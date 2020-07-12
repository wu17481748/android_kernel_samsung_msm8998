/*
 * Copyright (c) 2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_MSM_GCC_FALCON_H
#define _DT_BINDINGS_CLK_MSM_GCC_FALCON_H

/* Hardware/Dummy/Voter clocks */
#define GCC_XO					0
#define GCC_GPLL0_EARLY_DIV			1
#define GCC_GPLL1_EARLY_DIV			2
#define GCC_CE1_AHB_M_CLK			3
#define GCC_CE1_AXI_M_CLK			4

/* RCGs and Branches */
#define BLSP1_QUP1_I2C_APPS_CLK_SRC		10
#define BLSP1_QUP1_SPI_APPS_CLK_SRC		11
#define BLSP1_QUP2_I2C_APPS_CLK_SRC		12
#define BLSP1_QUP2_SPI_APPS_CLK_SRC		13
#define BLSP1_QUP3_I2C_APPS_CLK_SRC		14
#define BLSP1_QUP3_SPI_APPS_CLK_SRC		15
#define BLSP1_QUP4_I2C_APPS_CLK_SRC		16
#define BLSP1_QUP4_SPI_APPS_CLK_SRC		17
#define BLSP1_UART1_APPS_CLK_SRC		18
#define BLSP1_UART2_APPS_CLK_SRC		19
#define BLSP2_QUP1_I2C_APPS_CLK_SRC		20
#define BLSP2_QUP1_SPI_APPS_CLK_SRC		21
#define BLSP2_QUP2_I2C_APPS_CLK_SRC		22
#define BLSP2_QUP2_SPI_APPS_CLK_SRC		23
#define BLSP2_QUP3_I2C_APPS_CLK_SRC		24
#define BLSP2_QUP3_SPI_APPS_CLK_SRC		25
#define BLSP2_QUP4_I2C_APPS_CLK_SRC		26
#define BLSP2_QUP4_SPI_APPS_CLK_SRC		27
#define BLSP2_UART1_APPS_CLK_SRC		28
#define BLSP2_UART2_APPS_CLK_SRC		29
#define GCC_AGGRE2_UFS_AXI_CLK			30
#define GCC_AGGRE2_USB3_AXI_CLK			31
#define GCC_BIMC_GFX_CLK			32
#define GCC_BIMC_HMSS_AXI_CLK			33
#define GCC_BIMC_MSS_Q6_AXI_CLK			34
#define GCC_BLSP1_AHB_CLK			35
#define GCC_BLSP1_QUP1_I2C_APPS_CLK		36
#define GCC_BLSP1_QUP1_SPI_APPS_CLK		37
#define GCC_BLSP1_QUP2_I2C_APPS_CLK		38
#define GCC_BLSP1_QUP2_SPI_APPS_CLK		39
#define GCC_BLSP1_QUP3_I2C_APPS_CLK		40
#define GCC_BLSP1_QUP3_SPI_APPS_CLK		41
#define GCC_BLSP1_QUP4_I2C_APPS_CLK		42
#define GCC_BLSP1_QUP4_SPI_APPS_CLK		43
#define GCC_BLSP1_UART1_APPS_CLK		44
#define GCC_BLSP1_UART2_APPS_CLK		45
#define GCC_BLSP2_AHB_CLK			46
#define GCC_BLSP2_QUP1_I2C_APPS_CLK		47
#define GCC_BLSP2_QUP1_SPI_APPS_CLK		48
#define GCC_BLSP2_QUP2_I2C_APPS_CLK		49
#define GCC_BLSP2_QUP2_SPI_APPS_CLK		50
#define GCC_BLSP2_QUP3_I2C_APPS_CLK		51
#define GCC_BLSP2_QUP3_SPI_APPS_CLK		52
#define GCC_BLSP2_QUP4_I2C_APPS_CLK		53
#define GCC_BLSP2_QUP4_SPI_APPS_CLK		54
#define GCC_BLSP2_UART1_APPS_CLK		55
#define GCC_BLSP2_UART2_APPS_CLK		56
#define GCC_BOOT_ROM_AHB_CLK			57
#define GCC_CFG_NOC_USB2_AXI_CLK		58
#define GCC_CFG_NOC_USB3_AXI_CLK		59
#define GCC_DCC_AHB_CLK				60
#define GCC_GP1_CLK				61
#define GCC_GP2_CLK				62
#define GCC_GP3_CLK				63
#define GCC_GPU_BIMC_GFX_CLK			64
#define GCC_GPU_BIMC_GFX_SRC_CLK		65
#define GCC_GPU_CFG_AHB_CLK			66
#define GCC_GPU_GPLL0_CLK			67
#define GCC_GPU_GPLL0_DIV_CLK			68
#define GCC_GPU_SNOC_DVM_GFX_CLK		69
#define GCC_HMSS_AHB_CLK			70
#define GCC_HMSS_DVM_BUS_CLK			71
#define GCC_HMSS_RBCPR_CLK			72
#define GCC_MMSS_GPLL0_CLK			73
#define GCC_MMSS_GPLL0_DIV_CLK			74
#define GCC_MMSS_NOC_CFG_AHB_CLK		75
#define GCC_MMSS_SYS_NOC_AXI_CLK		76
#define GCC_MSS_CFG_AHB_CLK			77
#define GCC_MSS_GPLL0_DIV_CLK			78
#define GCC_MSS_MNOC_BIMC_AXI_CLK		79
#define GCC_MSS_Q6_BIMC_AXI_CLK			80
#define GCC_MSS_SNOC_AXI_CLK			81
#define GCC_PDM2_CLK				82
#define GCC_PDM_AHB_CLK				83
#define GCC_PRNG_AHB_CLK			84
#define GCC_QSPI_AHB_CLK			85
#define GCC_QSPI_SER_CLK			86
#define GCC_RX0_USB2_CLKREF_CLK			87
#define GCC_RX1_USB2_CLKREF_CLK			88
#define GCC_RX2_QLINK_CLKREF_CLK		89
#define GCC_SDCC1_AHB_CLK			90
#define GCC_SDCC1_APPS_CLK			91
#define GCC_SDCC1_ICE_CORE_CLK			92
#define GCC_SDCC2_AHB_CLK			93
#define GCC_SDCC2_APPS_CLK			94
#define GCC_UFS_AHB_CLK				95
#define GCC_UFS_AXI_CLK				96
#define GCC_UFS_CLKREF_CLK			97
#define GCC_UFS_ICE_CORE_CLK			98
#define GCC_UFS_PHY_AUX_CLK			99
#define GCC_UFS_RX_SYMBOL_0_CLK			100
#define GCC_UFS_RX_SYMBOL_1_CLK			101
#define GCC_UFS_TX_SYMBOL_0_CLK			102
#define GCC_UFS_UNIPRO_CORE_CLK			103
#define GCC_USB20_MASTER_CLK			104
#define GCC_USB20_MOCK_UTMI_CLK			105
#define GCC_USB20_SLEEP_CLK			106
#define GCC_USB30_MASTER_CLK			107
#define GCC_USB30_MOCK_UTMI_CLK			108
#define GCC_USB30_SLEEP_CLK			109
#define GCC_USB3_CLKREF_CLK			110
#define GCC_USB3_PHY_AUX_CLK			111
#define GCC_USB3_PHY_PIPE_CLK			112
#define GCC_USB_PHY_CFG_AHB2PHY_CLK		113
#define GP1_CLK_SRC				114
#define GP2_CLK_SRC				115
#define GP3_CLK_SRC				116
#define GPLL0					117
#define GPLL0_OUT_AUX				118
#define GPLL0_OUT_AUX2				119
#define GPLL0_OUT_EARLY				120
#define GPLL0_OUT_MAIN				121
#define GPLL0_OUT_TEST				122
#define GPLL1					123
#define GPLL1_OUT_AUX				124
#define GPLL1_OUT_AUX2				125
#define GPLL1_OUT_EARLY				126
#define GPLL1_OUT_MAIN				127
#define GPLL1_OUT_TEST				128
#define GPLL2					129
#define GPLL2_OUT_AUX				130
#define GPLL2_OUT_AUX2				131
#define GPLL2_OUT_EARLY				132
#define GPLL2_OUT_MAIN				133
#define GPLL2_OUT_TEST				134
#define GPLL3					135
#define GPLL3_OUT_AUX				136
#define GPLL3_OUT_AUX2				137
#define GPLL3_OUT_EARLY				138
#define GPLL3_OUT_MAIN				139
#define GPLL3_OUT_TEST				140
#define GPLL4					141
#define GPLL4_OUT_AUX				142
#define GPLL4_OUT_AUX2				143
#define GPLL4_OUT_EARLY				144
#define GPLL4_OUT_MAIN				145
#define GPLL4_OUT_TEST				146
#define GPLL5					147
#define GPLL5_OUT_AUX				148
#define GPLL5_OUT_AUX2				149
#define GPLL5_OUT_EARLY				150
#define GPLL5_OUT_MAIN				151
#define GPLL5_OUT_TEST				152
#define GPLL6					153
#define GPLL6_OUT_AUX				154
#define GPLL6_OUT_AUX2				155
#define GPLL6_OUT_EARLY				156
#define GPLL6_OUT_MAIN				157
#define GPLL6_OUT_TEST				158
#define HLOS1_VOTE_LPASS_ADSP_SMMU_CLK		159
#define HMSS_AHB_CLK_SRC			160
#define HMSS_GPLL0_CLK_SRC			161
#define HMSS_GPLL4_CLK_SRC			162
#define HMSS_RBCPR_CLK_SRC			163
#define PDM2_CLK_SRC				164
#define QSPI_SER_CLK_SRC			165
#define SDCC1_APPS_CLK_SRC			166
#define SDCC1_ICE_CORE_CLK_SRC			167
#define SDCC2_APPS_CLK_SRC			168
#define UFS_AXI_CLK_SRC				169
#define UFS_ICE_CORE_CLK_SRC			170
#define UFS_PHY_AUX_CLK_SRC			171
#define UFS_UNIPRO_CORE_CLK_SRC			172
#define USB20_MASTER_CLK_SRC			173
#define USB20_MOCK_UTMI_CLK_SRC			174
#define USB30_MASTER_CLK_SRC			175
#define USB30_MOCK_UTMI_CLK_SRC			176
#define USB3_PHY_AUX_CLK_SRC			177
#define GPLL0_OUT_MSSCC				178
#define GCC_UFS_AXI_HW_CTL_CLK			179
#define GCC_UFS_ICE_CORE_HW_CTL_CLK		180
#define GCC_UFS_PHY_AUX_HW_CTL_CLK		181
#define GCC_UFS_UNIPRO_CORE_HW_CTL_CLK		182
#define HLOS1_VOTE_TURING_ADSP_SMMU_CLK		183
#define HLOS2_VOTE_TURING_ADSP_SMMU_CLK		184

/* Block resets */
#define GCC_QUSB2PHY_PRIM_BCR                    0
#define GCC_QUSB2PHY_SEC_BCR                     1
#define GCC_UFS_BCR                              2
#define GCC_USB3_DP_PHY_BCR                      3
#define GCC_USB3_PHY_BCR                         4
#define GCC_USB3PHY_PHY_BCR                      5
#define GCC_USB_20_BCR                           6
#define GCC_USB_30_BCR                           7
#define GCC_USB_PHY_CFG_AHB2PHY_BCR              8

#endif
