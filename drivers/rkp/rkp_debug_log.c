#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/proc_fs.h>
#include <linux/highmem.h>
#include <linux/rkp_entry.h>

ssize_t	rkp_log_read(struct file *filep, char __user *buf, size_t size, loff_t *offset)
{
	size_t log_buf_size;
	unsigned long *log_addr = 0;

	if (!strcmp(filep->f_path.dentry->d_iname, "rkp_log")) {
		log_buf_size = TIMA_DEBUG_LOG_SIZE;
		log_addr = (unsigned long *)phys_to_virt(TIMA_DEBUG_LOG_START);
	} else
		return -1;

	if (*offset >= log_buf_size)
		return -EINVAL;

	if (*offset + size > log_buf_size)
		size = log_buf_size - *offset;

	if (copy_to_user(buf, (const char *)log_addr + (*offset), size))
		return -EFAULT;

	*offset += size;
	return size;
}

static const struct file_operations rkp_proc_fops = {
	.owner		= THIS_MODULE,
	.read		= rkp_log_read,
};

static int __init rkp_log_init(void)
{
	struct proc_dir_entry *entry;

	entry = proc_create("rkp_log", 0644, NULL, &rkp_proc_fops);
	if (!entry) {
		pr_err("rkp_log: Error creating proc entry\n");
		return -ENOMEM;
	}

	pr_info("rkp_log : create rkp nodes in /proc\n");
/* It is for low-end model
 * exynos8895 has KONX_KAP configuration but never set boot_mode_security.
 */
#if 0
#ifdef CONFIG_KNOX_KAP
	if (boot_mode_security)
#endif
		rkp_reserve_mem();
#endif
	return 0;
}

static void __exit rkp_log_exit(void)
{
	remove_proc_entry("rkp_log", NULL);
}

module_init(rkp_log_init);
module_exit(rkp_log_exit);
