/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __HAL_COMMON_REG_H__
#define __HAL_COMMON_REG_H__


#define MAC_ADDR_LEN				6

#define HAL_NAV_UPPER_UNIT		128		// micro-second

// 8188E PKT_BUFF_ACCESS_CTRL value
#define TXPKT_BUF_SELECT				0x69
#define RXPKT_BUF_SELECT				0xA5
#define DISABLE_TRXPKT_BUF_ACCESS		0x0

//============================================================
//
//============================================================

//-----------------------------------------------------
//
//	0x0000h ~ 0x00FFh	System Configuration
//
//-----------------------------------------------------
#define REG_SYS_ISO_CTRL				0x0000
#define REG_SYS_FUNC_EN				0x0002
#define REG_APS_FSMCO					0x0004
#define REG_SYS_CLKR					0x0008
#define REG_9346CR						0x000A
#define REG_SYS_EEPROM_CTRL			0x000A
#define REG_EE_VPD						0x000C
#define REG_AFE_MISC					0x0010
#define REG_SPS0_CTRL					0x0011
#define REG_SPS0_CTRL_6					0x0016
#define REG_POWER_OFF_IN_PROCESS 		0x0017
#define REG_SPS_OCP_CFG				0x0018
#define REG_RSV_CTRL					0x001C
#define REG_RF_CTRL						0x001F
#define REG_LDOA15_CTRL				0x0020
#define REG_LDOV12D_CTRL				0x0021
#define REG_LDOHCI12_CTRL				0x0022
#define REG_LPLDO_CTRL					0x0023
#define REG_AFE_XTAL_CTRL				0x0024
#define REG_AFE_LDO_CTRL				0x0027 // 1.5v for 8188EE test chip, 1.4v for MP chip
#define REG_AFE_PLL_CTRL				0x0028
#define REG_MAC_PHY_CTRL				0x002c //for 92d, DMDP,SMSP,DMSP contrl
#define REG_APE_PLL_CTRL_EXT			0x002c
#define REG_EFUSE_CTRL					0x0030
#define REG_EFUSE_TEST					0x0034
#define REG_PWR_DATA					0x0038
#define REG_CAL_TIMER					0x003C
#define REG_ACLK_MON					0x003E
#define REG_GPIO_MUXCFG				0x0040
#define REG_GPIO_IO_SEL					0x0042
#define REG_MAC_PINMUX_CFG			0x0043
#define REG_GPIO_PIN_CTRL				0x0044
#define REG_GPIO_INTM					0x0048
#define REG_LEDCFG0						0x004C
#define REG_LEDCFG1						0x004D
#define REG_LEDCFG2						0x004E
#define REG_LEDCFG3						0x004F
#define REG_FSIMR						0x0050
#define REG_FSISR						0x0054
#define REG_HSIMR						0x0058
#define REG_HSISR						0x005c
#define REG_GPIO_PIN_CTRL_2			0x0060 // RTL8723 WIFI/BT/GPS Multi-Function GPIO Pin Control.
#define REG_GPIO_IO_SEL_2				0x0062 // RTL8723 WIFI/BT/GPS Multi-Function GPIO Select.
#define REG_MULTI_FUNC_CTRL			0x0068 // RTL8723 WIFI/BT/GPS Multi-Function control source.
#define REG_GSSR						0x006c
#define REG_WL_BTCOEX_CTRL			0x0074
#define REG_AFE_XTAL_CTRL_EXT			0x0078 //RTL8188E
#define REG_XCK_OUT_CTRL				0x007c //RTL8188E
#define REG_MCUFWDL					0x0080
#define REG_WOL_EVENT					0x0081 //RTL8188E
#define REG_MCUTSTCFG					0x0084
#define REG_FDHM0						0x0088
#define REG_HOST_SUSP_CNT				0x00BC	// RTL8192C Host suspend counter on FPGA platform
#define REG_SYSTEM_ON_CTRL			0x00CC	// For 8723AE Reset after S3
#define REG_EFUSE_ACCESS				0x00CF	// Efuse access protection for RTL8723
#define REG_BIST_SCAN					0x00D0
#define REG_BIST_RPT					0x00D4
#define REG_BIST_ROM_RPT				0x00D8
#define REG_USB_SIE_INTF				0x00E0
#define REG_PCIE_MIO_INTF				0x00E4
#define REG_PCIE_MIO_INTD				0x00E8
#define REG_HPON_FSM					0x00EC
#define REG_SYS_CFG						0x00F0
#define REG_GPIO_OUTSTS				0x00F4	// For RTL8723 only.
#define REG_TYPE_ID						0x00FC


#define REG_WL_CLK_CTRL                 		0x0002
#define REG_WL_FUNC_EN                  		0x0004
#define REG_WL_PMC_CTRL                 		0x0020
#define REG_WL_AFE_CTRL    				0x0050
#define REG_WL_PMC_IMR                  		0x0080
#define REG_WL_PMC_ISR                  		0x0084

#define REG_AFC_CTRL_8721D                  	0x0030
#define REG_HIMR0_8721D                  		0x00B0
#define REG_HISR0_8721D                  		0x00B4

//-----------------------------------------------------
//
//	0x0100h ~ 0x01FFh	MACTOP General Configuration
//
//-----------------------------------------------------
#define REG_CR							0x0100
#define REG_PBP							0x0104
#define REG_PKT_BUFF_ACCESS_CTRL		0x0106
#define REG_TRXDMA_CTRL				0x010C
#define REG_TRXFF_BNDY					0x0114
#define REG_TRXFF_STATUS				0x0118
#define REG_RXFF_PTR					0x011C
#define REG_HIMR						0x0120
#define REG_HISR						0x0124
#define REG_HIMRE						0x0128
#define REG_HISRE						0x012C
#define REG_CPWM						0x012F
#define REG_FWIMR						0x0130
#define REG_FWISR						0x0134
#define REG_FTIMR						0x0138
#define REG_FTISR						0x013C //RTL8192C
#define REG_PKTBUF_DBG_CTRL			0x0140
#define REG_RXPKTBUF_CTRL				(REG_PKTBUF_DBG_CTRL+2)
#define REG_PKTBUF_DBG_DATA_L			0x0144
#define REG_PKTBUF_DBG_DATA_H		0x0148

#define REG_TC0_CTRL					0x0150
#define REG_TC1_CTRL					0x0154
#define REG_TC2_CTRL					0x0158
#define REG_TC3_CTRL					0x015C
#define REG_TC4_CTRL					0x0160
#define REG_TCUNIT_BASE				0x0164
#define REG_MBIST_START				0x0174
#define REG_MBIST_DONE					0x0178
#define REG_MBIST_FAIL					0x017C
#define REG_32K_CTRL					0x0194 //RTL8188E
#define REG_C2HEVT_MSG_NORMAL		0x01A0
#define REG_C2HEVT_CLEAR				0x01AF
#define REG_MCUTST_1					0x01c0
#define REG_MCUTST_WOWLAN			0x01C7	// Defined after 8188E series.
#define REG_FMETHR						0x01C8
#define REG_HMETFR						0x01CC
#define REG_HMEBOX_0					0x01D0
#define REG_HMEBOX_1					0x01D4
#define REG_HMEBOX_2					0x01D8
#define REG_HMEBOX_3					0x01DC
#define REG_LLT_INIT					0x01E0

//-----------------------------------------------------
//
//	0x0200h ~ 0x027Fh	TXDMA Configuration
//
//-----------------------------------------------------
#define REG_RQPN						0x0200
#define REG_FIFOPAGE					0x0204
#define REG_TDECTRL						0x0208
#define REG_TXDMA_OFFSET_CHK			0x020C
#define REG_TXDMA_STATUS				0x0210
#define REG_RQPN_NPQ					0x0214
#define REG_AUTO_LLT					0x0224


//-----------------------------------------------------
//
//	0x0280h ~ 0x02FFh	RXDMA Configuration
//
//-----------------------------------------------------
#define REG_RXDMA_AGG_PG_TH			0x0280
#define REG_RXPKT_NUM					0x0284
#define REG_RXDMA_STATUS				0x0288
#define REG_RXDMA_MODE					0x0290
#define REG_C2H_PKT_8723B				0x0294


//-----------------------------------------------------
//
//	0x0300h ~ 0x03FFh	PCIe
//
//-----------------------------------------------------
#define REG_PCIE_CTRL_REG				0x0300
#define REG_INT_MIG						0x0304	// Interrupt Migration 
#define REG_BCNQ_DESA					0x0308	// TX Beacon Descriptor Address
#define REG_HQ_DESA					0x0310	// TX High Queue Descriptor Address
#define REG_MGQ_DESA					0x0318	// TX Manage Queue Descriptor Address
#define REG_VOQ_DESA					0x0320	// TX VO Queue Descriptor Address
#define REG_VIQ_DESA					0x0328	// TX VI Queue Descriptor Address
#define REG_BEQ_DESA					0x0330	// TX BE Queue Descriptor Address
#define REG_BKQ_DESA					0x0338	// TX BK Queue Descriptor Address
#define REG_RX_DESA						0x0340	// RX Queue	Descriptor Address
//sherry added for DBI Read/Write  20091126
#define REG_DBI_WDATA					0x0348	// Backdoor REG for Access Configuration
#define REG_DBI_RDATA                         	0x034C	//Backdoor REG for Access Configuration
#define REG_DBI_CTRL                      		0x0350	//Backdoor REG for Access Configuration
#define REG_DBI_FLAG                      		0x0352	//Backdoor REG for Access Configuration
#define REG_MDIO						0x0354	// MDIO for Access PCIE PHY
#define REG_DBG_SEL						0x0360	// Debug Selection Register
#define REG_PCIE_HRPWM					0x0361	//PCIe RPWM
#define REG_PCIE_HCPWM					0x0363	//PCIe CPWM
#define REG_WATCH_DOG					0x0368

// For new buffer descriptor ring architecture

#define REG_LX_CTRL1                			0x0300  // 4 Bytes

#define REG_BCNQ_TXBD_DESA          		0x0308  // 8 Bytes
#define REG_MGQ_TXBD_DESA           		0x0310  // 8 Bytes 
#define REG_VOQ_TXBD_DESA          		0x0318  // 8 Bytes
#define REG_VIQ_TXBD_DESA           		0x0320  // 8 Bytes
#define REG_BEQ_TXBD_DESA           		0x0328  // 8 Bytes
#define REG_BKQ_TXBD_DESA           		0x0330  // 8 Bytes
#define REG_RXQ_RXBD_DESA           		0x0338  // 8 Bytes
#define REG_HI0Q_TXBD_DESA          		0x0340  // 8 Bytes
#define REG_HI1Q_TXBD_DESA          		0x0348  // 8 Bytes
#define REG_HI2Q_TXBD_DESA          		0x0350  // 8 Bytes
#define REG_HI3Q_TXBD_DESA          		0x0358  // 8 Bytes
#define REG_HI4Q_TXBD_DESA          		0x0360  // 8 Bytes
#define REG_HI5Q_TXBD_DESA          		0x0368  // 8 Bytes
#define REG_HI6Q_TXBD_DESA         		0x0370  // 8 Bytes
#define REG_HI7Q_TXBD_DESA          		0x0378  // 8 Bytes

#define REG_MGQ_TXBD_NUM            		0x0380  // 2 Bytes
#define REG_RX_RXBD_NUM             		0x0382  // 2 Bytes
#define REG_VOQ_TXBD_NUM            		0x0384  // 2 Bytes
#define REG_VIQ_TXBD_NUM            		0x0386  // 2 Bytes
#define REG_BEQ_TXBD_NUM            		0x0388  // 2 Bytes
#define REG_BKQ_TXBD_NUM            		0x038A  // 2 Bytes
#define REG_HI0Q_TXBD_NUM           		0x038C  // 2 Bytes
#define REG_HI1Q_TXBD_NUM           		0x038E  // 2 Bytes
#define REG_HI2Q_TXBD_NUM           		0x0390  // 2 Bytes
#define REG_HI3Q_TXBD_NUM           		0x0392  // 2 Bytes
#define REG_HI4Q_TXBD_NUM           		0x0394  // 2 Bytes
#define REG_HI5Q_TXBD_NUM           		0x0396  // 2 Bytes
#define REG_HI6Q_TXBD_NUM           		0x0398  // 2 Bytes
#define REG_HI7Q_TXBD_NUM           		0x039A  // 2 Bytes

#define REG_BD_RWPTR_CLR            		0x039C  // 4 Bytes
#define REG_VOQ_TXBD_IDX            		0x03A0  // 4 Bytes
#define REG_VIQ_TXBD_IDX            		0x03A4  // 4 Bytes
#define REG_BEQ_TXBD_IDX            		0x03A8  // 4 Bytes
#define REG_BKQ_TXBD_IDX            		0x03AC  // 4 Bytes
#define REG_MGQ_TXBD_IDX            		0x03B0  // 4 Bytes
#define REG_RXQ_RXBD_IDX            		0x03B4  // 4 Bytes
#define REG_HI0Q_TXBD_IDX           		0x03B8  // 4 Bytes
#define REG_HI1Q_TXBD_IDX           		0x03BC  // 4 Bytes
#define REG_HI2Q_TXBD_IDX           		0x03C0  // 4 Bytes
#define REG_HI3Q_TXBD_IDX           		0x03C4  // 4 Bytes
#define REG_HI4Q_TXBD_IDX           		0x03C8  // 4 Bytes
#define REG_HI5Q_TXBD_IDX           		0x03CC  // 4 Bytes
#define REG_HI6Q_TXBD_IDX           		0x03D0  // 4 Bytes
#define REG_HI7Q_TXBD_IDX           		0x03D4  // 4 Bytes

//CPWM &RPWM
#define REG_LX_HRPWM_8711B			0x03D9  // 1 Bytes
#define REG_LX_HCPWM_8711B			0x03DA  // 1 Bytes //from 0x14c

#define REG_LX_CTRL2                			0x03DB  // 1 Bytes

#define REG_LX_HRPWM2_8711B          		0x03DC  // 2 Bytes //REG_LX_HCPWM1_8711B
#define REG_LX_HCPWM2_8711B          		0x03DE  // 2 Bytes 
#define REG_LX_H2C_MSG_V1         		0x03E0  // 4 Bytes
#define REG_LX_C2H_MSG_V1         		0x03E4  // 4 Bytes


#define REG_LX_DMA_ISR              			0x03E8  // 4 Bytes
#define REG_LX_DMA_IMR              			0x03EC  // 4 Bytes
#define REG_LX_DMA_DBG              			0x03F0  // 4 Bytes

#define REG_BUS_MIX_CFG             			0x03F8  // 4 Bytes#
#define REG_BUS_MIX_CFG1            		0x03FC  // 4 Bytes

//-----------------------------------------------------
//
//	0x0400h ~ 0x047Fh	Protocol Configuration
//
//-----------------------------------------------------
#define REG_VOQ_INFORMATION			0x0400
#define REG_VIQ_INFORMATION			0x0404
#define REG_BEQ_INFORMATION			0x0408
#define REG_BKQ_INFORMATION			0x040C
#define REG_MGQ_INFORMATION			0x0410
#define REG_HGQ_INFORMATION			0x0414
#define REG_BCNQ_INFORMATION			0x0418
#define REG_TXPKT_EMPTY				0x041A
#define REG_CPU_MGQ_INFORMATION		0x041C
#define REG_FWHW_TXQ_CTRL				0x0420
#define REG_HWSEQ_CTRL					0x0423
#define REG_BCNQ_BDNY					0x0424
#define REG_MGQ_BDNY					0x0425
#define REG_LIFETIME_CTRL				0x0426
#define REG_MULTI_BCNQ_OFFSET			0x0427
#define REG_SPEC_SIFS					0x0428
#define REG_RL							0x042A
#define REG_DARFRC						0x0430
#define REG_RARFRC						0x0438
#define REG_RRSR						0x0440
#define REG_ARFR0						0x0444
#define REG_ARFR1						0x0448
#define REG_ARFR2						0x044C
#define REG_ARFR3						0x0450
#define REG_BCNQ1_BDNY					0x0457

#define REG_AGGLEN_LMT					0x0458
#define REG_AMPDU_MIN_SPACE			0x045C
#define REG_TX_HANG_CTRL				0x045E
#define REG_WMAC_LBK_BF_HD			0x045D
#define REG_FAST_EDCA_CTRL				0x0460
#define REG_RD_RESP_PKT_TH				0x0463

#define REG_INIRTS_RATE_SEL				0x0480
#define REG_DATA_SC						0x0483
#define REG_MACID_SLEEP_3				0x0484
#define REG_MACID_SLEEP_1				0x0488

#define REG_POWER_STAGE1				0x04B4
#define REG_POWER_STAGE2				0x04B8
#define REG_PKT_VO_VI_LIFE_TIME		0x04C0
#define REG_PKT_BE_BK_LIFE_TIME		0x04C2
#define REG_STBC_SETTING				0x04C4
#define REG_QUEUE_CTRL					0x04C6
#define REG_SINGLE_AMPDU_CTRL			0x04c7
#define REG_PROT_MODE_CTRL			0x04C8
#define REG_MAX_AGGR_NUM				0x04CA
#define REG_RTS_MAX_AGGR_NUM			0x04CB
#define REG_BAR_MODE_CTRL				0x04CC
#define REG_RA_TRY_RATE_AGG_LMT		0x04CF
/* 88E */
#define REG_EARLY_MODE_CONTROL		0x04D0
/* 8723B, 92E, 8812A, 8821A */
#define REG_MACID_SLEEP_2			0x04D0
#define REG_MACID_SLEEP				0x04D4
#define REG_NQOS_SEQ					0x04DC
#define REG_QOS_SEQ					0x04DE
#define REG_NEED_CPU_HANDLE			0x04E0
#define REG_PKT_LOSE_RPT				0x04E1
#define REG_PTCL_ERR_STATUS			0x04E2
#define REG_PRETX_DROP_CTRL				0x04E4
#define REG_TX_RPT_CTRL					0x04EC
#define REG_TX_RPT_TIME					0x04F0	// 2 byte
#define REG_DUMMY						0x04FC

//-----------------------------------------------------
//
//	0x0500h ~ 0x05FFh	EDCA Configuration
//
//-----------------------------------------------------
#define REG_EDCA_VO_PARAM				0x0500
#define REG_EDCA_VI_PARAM				0x0504
#define REG_EDCA_BE_PARAM				0x0508
#define REG_EDCA_BK_PARAM				0x050C
#define REG_BCNTCFG						0x0510
#define REG_PIFS							0x0512
#define REG_RDG_PIFS					0x0513
#define REG_SIFS_CTX					0x0514
#define REG_SIFS_TRX					0x0516
#define REG_TSFTR_SYN_OFFSET			0x0518
#define REG_AGGR_BREAK_TIME			0x051A
#define REG_SLOT						0x051B
#define REG_TX_PTCL_CTRL				0x0520
#define REG_TXPAUSE						0x0522
#define REG_DIS_TXREQ_CLR				0x0523
#define REG_RD_CTRL						0x0524
//
// Format for offset 540h-542h:
//	[3:0]:   TBTT prohibit setup in unit of 32us. The time for HW getting beacon content before TBTT.
//	[7:4]:   Reserved.
//	[19:8]:  TBTT prohibit hold in unit of 32us. The time for HW holding to send the beacon packet.
//	[23:20]: Reserved
// Description:
//	              |
//     |<--Setup--|--Hold------------>|
//	--------------|----------------------
//                |
//               TBTT
// Note: We cannot update beacon content to HW or send any AC packets during the time between Setup and Hold.
// Described by Designer Tim and Bruce, 2011-01-14.
//
#define REG_TBTT_PROHIBIT				0x0540
#define REG_RD_NAV_NXT					0x0544
#define REG_NAV_PROT_LEN				0x0546
#define REG_BCN_CTRL					0x0550
#define REG_BCN_CTRL_1					0x0551
#define REG_MBID_NUM					0x0552
#define REG_DUAL_TSF_RST				0x0553
#define REG_BCN_INTERVAL				0x0554	// The same as REG_MBSSID_BCN_SPACE
#define REG_DRVERLYINT					0x0558
#define REG_BCNDMATIM					0x0559
#define REG_ATIMWND					0x055A
#define REG_USTIME_TSF					0x055C
#define REG_BCN_MAX_ERR				0x055D
#define REG_RXTSF_OFFSET_CCK			0x055E
#define REG_RXTSF_OFFSET_OFDM			0x055F
#define REG_TSFTR						0x0560
#define REG_TSFTR1						0x0568	// HW Port 1 TSF Register
#define REG_ATIMWND_1					0x0570
#define REG_P2P_CTWIN					0x0572 // 1 Byte long (in unit of TU)
#define REG_PSTIMER						0x0580
#define REG_TIMER0						0x0584
#define REG_TIMER1						0x0588
#define REG_TBTT_HOLD_PREDICT_P1		0x05B2
#define REG_PTA_PRE_TRX_CTRL			0x5B8	//rtl8721d
#define REG_ACMHWCTRL					0x05C0
#define REG_NOA_DESC_SEL				0x05CF
#define REG_NOA_DESC_DURATION		0x05E0
#define REG_NOA_DESC_INTERVAL			0x05E4
#define REG_NOA_DESC_START			0x05E8
#define REG_NOA_DESC_COUNT			0x05EC

#define REG_DMC							0x05F0	//Dual MAC Co-Existence Register
#define REG_SCH_TX_CMD					0x05F8

#define REG_FW_RESET_TSF_CNT_1		0x05FC
#define REG_FW_RESET_TSF_CNT_0		0x05FD
#define REG_FW_BCN_DIS_CNT			0x05FE

//-----------------------------------------------------
//
//	0x0600h ~ 0x07FFh	WMAC Configuration
//
//-----------------------------------------------------
#define REG_APSD_CTRL					0x0600
#define REG_BWOPMODE					0x0603
#define REG_TCR							0x0604
#define REG_RCR							0x0608
#define REG_RX_PKT_LIMIT				0x060C
#define REG_RX_DLK_TIME				0x060D
#define REG_RX_DRVINFO_SZ				0x060F

#define REG_MACID						0x0610
#define REG_BSSID						0x0618
#define REG_MAR							0x0620
#define REG_MBIDCAMCFG					0x0628

#define REG_USTIME_EDCA				0x0638
#define REG_ACKTO_CCK					0x0639
#define REG_MAC_SPEC_SIFS				0x063A
// 20100719 Joseph: Hardware register definition change. (HW datasheet v54)
#define REG_RESP_SIFS_CCK				0x063C	// [15:8]SIFS_R2T_OFDM, [7:0]SIFS_R2T_CCK
#define REG_RESP_SIFS_OFDM                    0x063E	// [15:8]SIFS_T2T_OFDM, [7:0]SIFS_T2T_CCK

#define REG_ACKTO						0x0640
#define REG_CTS2TO						0x0641
#define REG_EIFS							0x0642



//RXERR_RPT
#define RXERR_TYPE_OFDM_PPDU			0
#define RXERR_TYPE_OFDM_FALSE_ALARM 	1
#define RXERR_TYPE_OFDM_MPDU_OK 		2
#define RXERR_TYPE_OFDM_MPDU_FAIL	3
#define RXERR_TYPE_CCK_PPDU 			4
#define RXERR_TYPE_CCK_FALSE_ALARM	5
#define RXERR_TYPE_CCK_MPDU_OK		6
#define RXERR_TYPE_CCK_MPDU_FAIL		7
#define RXERR_TYPE_HT_PPDU				8
#define RXERR_TYPE_HT_FALSE_ALARM	9
#define RXERR_TYPE_HT_MPDU_TOTAL		10
#define RXERR_TYPE_HT_MPDU_OK			11
#define RXERR_TYPE_HT_MPDU_FAIL 		12
#define RXERR_TYPE_RX_FULL_DROP 		15

#define RXERR_COUNTER_MASK			0xFFFFF
#define RXERR_RPT_RST					BIT(27)
#define _RXERR_RPT_SEL(type)			((type) << 28)

//
// Note:
//	The NAV upper value is very important to WiFi 11n 5.2.3 NAV test. The default value is
//	always too small, but the WiFi TestPlan test by 25,000 microseconds of NAV through sending
//	CTS in the air. We must update this value greater than 25,000 microseconds to pass the item.
//	The offset of NAV_UPPER in 8192C Spec is incorrect, and the offset should be 0x0652. Commented
//	by SD1 Scott.
// By Bruce, 2011-07-18.
//
#define REG_NAV_UPPER					0x0652	// unit of 128

//WMA, BA, CCX
#define REG_NAV_CTRL					0x0650
#define REG_BACAMCMD					0x0654
#define REG_BACAMCONTENT				0x0658
#define REG_LBDLY						0x0660
#define REG_FWDLY						0x0661
#define REG_RXERR_RPT					0x0664
#define REG_WMAC_TRXPTCL_CTL			0x0668

// Security
#define REG_CAMCMD						0x0670
#define REG_CAMWRITE					0x0674
#define REG_CAMREAD					0x0678
#define REG_CAMDBG						0x067C
#define REG_SECCFG						0x0680

// Power
#define REG_WOW_CTRL					0x0690
#define REG_PS_RX_INFO					0x0692
#define REG_UAPSD_TID					0x0693
#define REG_WKFMCAM_CMD				0x0698
#define REG_WKFMCAM_NUM				REG_WKFMCAM_CMD
#define REG_WKFMCAM_RWD				0x069C
#define REG_RXFLTMAP0					0x06A0
#define REG_RXFLTMAP1					0x06A2
#define REG_RXFLTMAP2					0x06A4
#define REG_BCN_PSR_RPT				0x06A8
#define REG_BT_COEX_TABLE				0x06C0
#define REG_BT_COEX_TABLE2				0x06C4
#define REG_BT_BREAK_TABLE				0x06C8
#define REG_BT_COEX_TABLE_H				0x06CC

#define REG_BBPSF_CTRL					0x06DC


// Hardware Port 2
#define REG_MACID1						0x0700
#define REG_BSSID1						0x0708

#define REG_BT_COEX							0x0764
#define REG_WLAN_ACT_MASK_CTRL_1			0x076C
/* port0 & port1 enable */
#define REG_PORT_CTRL						0x076D
#define REG_BT_COEX_ENHANCED_INTR_CTRL		0x076E
#define REG_BT_STAT_CTRL					0x0778
#define REG_BT_CMD_ID						0x077C
#define REG_BT_INT_CTRL						0x0780

#define REG_BT_TDMA_TIME					0x0790

#define REG_RX_NAN_ADDR_FILTER				0x07EC

//-----------------------------------------------------
//
//	0xFE00h ~ 0xFE55h	USB Configuration
//
//-----------------------------------------------------
#define REG_USB_INFO					0xFE17
#define REG_USB_SPECIAL_OPTION		0xFE55
#define REG_USB_DMA_AGG_TO			0xFE5B
#define REG_USB_AGG_TO					0xFE5C
#define REG_USB_AGG_TH					0xFE5D

#define REG_USB_HRPWM					0xFE58
#define REG_USB_HCPWM					0xFE57

// for 92DU high_Queue low_Queue Normal_Queue select
#define REG_USB_High_NORMAL_Queue_Select_MAC0	0xFE44
//#define REG_USB_LOW_Queue_Select_MAC0		0xFE45
#define REG_USB_High_NORMAL_Queue_Select_MAC1	0xFE47
//#define REG_USB_LOW_Queue_Select_MAC1		0xFE48

// For test chip
#define REG_TEST_USB_TXQS				0xFE48
#define REG_TEST_SIE_VID				0xFE60		// 0xFE60~0xFE61
#define REG_TEST_SIE_PID				0xFE62		// 0xFE62~0xFE63
#define REG_TEST_SIE_OPTIONAL			0xFE64
#define REG_TEST_SIE_CHIRP_K			0xFE65
#define REG_TEST_SIE_PHY				0xFE66		// 0xFE66~0xFE6B
#define REG_TEST_SIE_MAC_ADDR			0xFE70		// 0xFE70~0xFE75
#define REG_TEST_SIE_STRING			0xFE80		// 0xFE80~0xFEB9


// For normal chip
#define REG_NORMAL_SIE_VID				0xFE60		// 0xFE60~0xFE61
#define REG_NORMAL_SIE_PID				0xFE62		// 0xFE62~0xFE63
#define REG_NORMAL_SIE_OPTIONAL		0xFE64
#define REG_NORMAL_SIE_EP				0xFE65		// 0xFE65~0xFE67
#define REG_NORMAL_SIE_PHY			0xFE68		// 0xFE68~0xFE6B
#define REG_NORMAL_SIE_OPTIONAL2		0xFE6C
#define REG_NORMAL_SIE_GPS_EP			0xFE6D		// 0xFE6D, for RTL8723 only.
#define REG_NORMAL_SIE_MAC_ADDR		0xFE70		// 0xFE70~0xFE75
#define REG_NORMAL_SIE_STRING			0xFE80		// 0xFE80~0xFEDF


//-----------------------------------------------------
//
//	Redifine 8192C register definition for compatibility
//
//-----------------------------------------------------

// TODO: use these definition when using REG_xxx naming rule.
// NOTE: DO NOT Remove these definition. Use later.

#define EFUSE_CTRL				REG_EFUSE_CTRL		// E-Fuse Control.
#define EFUSE_TEST				REG_EFUSE_TEST		// E-Fuse Test.
#define MSR						(REG_CR + 2)		// Media Status register
//#define ISR						REG_HISR

#define TSFR						REG_TSFTR			// Timing Sync Function Timer Register.
#define TSFR1					REG_TSFTR1			// HW Port 1 TSF Register

#define PBP						REG_PBP

// Redifine MACID register, to compatible prior ICs.
#define IDR0						REG_MACID			// MAC ID Register, Offset 0x0050-0x0053
#define IDR4						(REG_MACID + 4)		// MAC ID Register, Offset 0x0054-0x0055


//
// 9. Security Control Registers	(Offset: )
//
#define RWCAM					REG_CAMCMD		//IN 8190 Data Sheet is called CAMcmd
#define WCAMI					REG_CAMWRITE	// Software write CAM input content
#define RCAMO					REG_CAMREAD		// Software read/write CAM config
#define CAMDBG					REG_CAMDBG
#define SECR						REG_SECCFG		//Security Configuration Register

// Unused register
#define UnusedRegister			0x1BF
#define DCAM					UnusedRegister
#define PSR						UnusedRegister
#define BBAddr					UnusedRegister
#define PhyDataR					UnusedRegister

// Min Spacing related settings.
#define MAX_MSS_DENSITY_2T 			0x13
#define MAX_MSS_DENSITY_1T 			0x0A

//----------------------------------------------------------------------------
//       8192C Cmd9346CR bits					(Offset 0xA, 16bit)
//----------------------------------------------------------------------------
#define CmdEEPROM_En				BIT5	 // EEPROM enable when set 1
#define CmdEERPOMSEL				BIT4 	// System EEPROM select, 0: boot from E-FUSE, 1: The EEPROM used is 9346
#define Cmd9346CR_9356SEL			BIT4

//----------------------------------------------------------------------------
//       8721D AFE Ctrl Configuration Register (offset 0x30, 4 byte)
//----------------------------------------------------------------------------
#define RF_AFE_RST				BIT15

//----------------------------------------------------------------------------
//       8192C GPIO MUX Configuration Register (offset 0x40, 4 byte)
//----------------------------------------------------------------------------
#define GPIOSEL_GPIO				0
#define GPIOSEL_ENBT				BIT5

//----------------------------------------------------------------------------
//       8192C GPIO PIN Control Register (offset 0x44, 4 byte)
//----------------------------------------------------------------------------
#define GPIO_VAL_IN				REG_GPIO_PIN_CTRL		// GPIO pins input value
#define GPIO_VAL_OUT			(REG_GPIO_PIN_CTRL+1)	// GPIO pins output value
#define GPIO_IO_SEL				(REG_GPIO_PIN_CTRL+2)	// GPIO pins output enable when a bit is set to "1"; otherwise, input is configured.
#define GPIO_MOD				(REG_GPIO_PIN_CTRL+3)

//----------------------------------------------------------------------------
//       8811A GPIO PIN Control Register (offset 0x60, 4 byte)
//----------------------------------------------------------------------------
#define GPIO_IN_8811A			REG_GPIO_PIN_CTRL_2		// GPIO pins input value
#define GPIO_OUT_8811A			(REG_GPIO_PIN_CTRL_2+1)	// GPIO pins output value
#define GPIO_IO_SEL_8811A		(REG_GPIO_PIN_CTRL_2+2)	// GPIO pins output enable when a bit is set to "1"; otherwise, input is configured.
#define GPIO_MOD_8811A			(REG_GPIO_PIN_CTRL_2+3)

//----------------------------------------------------------------------------
//       8723/8188E Host System Interrupt Mask Register (offset 0x58, 32 byte)
//----------------------------------------------------------------------------
#define HSIMR_GPIO12_0_INT_EN			BIT0
#define HSIMR_SPS_OCP_INT_EN			BIT5
#define HSIMR_RON_INT_EN				BIT6
#define HSIMR_PDN_INT_EN				BIT7
#define HSIMR_GPIO9_INT_EN				BIT25

//----------------------------------------------------------------------------
//       8723/8188E Host System Interrupt Status Register (offset 0x5C, 32 byte)
//----------------------------------------------------------------------------
#define HSISR_GPIO12_0_INT				BIT0
#define HSISR_SPS_OCP_INT				BIT5
#define HSISR_RON_INT					BIT6
#define HSISR_PDNINT					BIT7
#define HSISR_GPIO9_INT					BIT25

//----------------------------------------------------------------------------
//       8192C (MSR) Media Status Register	(Offset 0x4C, 8 bits)
//----------------------------------------------------------------------------
/*
Network Type
00: No link
01: Link in ad hoc network
10: Link in infrastructure network
11: AP mode
Default: 00b.
*/
#define MSR_NOLINK				0x00
#define MSR_ADHOC				0x01
#define MSR_INFRA				0x02
#define MSR_AP					0x03

//----------------------------------------------------------------------------
//       USB INTR CONTENT
//----------------------------------------------------------------------------
#define USB_C2H_CMDID_OFFSET					0
#define USB_C2H_SEQ_OFFSET					1
#define USB_C2H_EVENT_OFFSET					2
#define USB_INTR_CPWM_OFFSET					16
#define USB_INTR_CONTENT_C2H_OFFSET			0
#define USB_INTR_CONTENT_CPWM1_OFFSET		16
#define USB_INTR_CONTENT_CPWM2_OFFSET		20
#define USB_INTR_CONTENT_HISR_OFFSET			48
#define USB_INTR_CONTENT_HISRE_OFFSET		52
#define USB_INTR_CONTENT_LENGTH				56

//----------------------------------------------------------------------------
//       Response Rate Set Register	(offset 0x440, 24bits)
//----------------------------------------------------------------------------
#define RRSR_1M					BIT0
#define RRSR_2M					BIT1
#define RRSR_5_5M				BIT2
#define RRSR_11M				BIT3
#define RRSR_6M					BIT4
#define RRSR_9M					BIT5
#define RRSR_12M				BIT6
#define RRSR_18M				BIT7
#define RRSR_24M				BIT8
#define RRSR_36M				BIT9
#define RRSR_48M				BIT10
#define RRSR_54M				BIT11
#define RRSR_MCS0				BIT12
#define RRSR_MCS1				BIT13
#define RRSR_MCS2				BIT14
#define RRSR_MCS3				BIT15
#define RRSR_MCS4				BIT16
#define RRSR_MCS5				BIT17
#define RRSR_MCS6				BIT18
#define RRSR_MCS7				BIT19

#define RRSR_CCK_RATES (RRSR_11M|RRSR_5_5M|RRSR_2M|RRSR_1M)
#define RRSR_OFDM_RATES (RRSR_54M|RRSR_48M|RRSR_36M|RRSR_24M|RRSR_18M|RRSR_12M|RRSR_9M|RRSR_6M)
// WOL bit information
#define HAL92C_WOL_PTK_UPDATE_EVENT		BIT0
#define HAL92C_WOL_GTK_UPDATE_EVENT		BIT1
#define HAL92C_WOL_DISASSOC_EVENT		BIT2
#define HAL92C_WOL_DEAUTH_EVENT			BIT3
#define HAL92C_WOL_FW_DISCONNECT_EVENT	BIT4

//----------------------------------------------------------------------------
//       Rate Definition
//----------------------------------------------------------------------------
//CCK
#define	RATR_1M					0x00000001
#define	RATR_2M					0x00000002
#define	RATR_55M					0x00000004
#define	RATR_11M					0x00000008
//OFDM
#define	RATR_6M					0x00000010
#define	RATR_9M					0x00000020
#define	RATR_12M					0x00000040
#define	RATR_18M					0x00000080
#define	RATR_24M					0x00000100
#define	RATR_36M					0x00000200
#define	RATR_48M					0x00000400
#define	RATR_54M					0x00000800
//MCS 1 Spatial Stream
#define	RATR_MCS0					0x00001000
#define	RATR_MCS1					0x00002000
#define	RATR_MCS2					0x00004000
#define	RATR_MCS3					0x00008000
#define	RATR_MCS4					0x00010000
#define	RATR_MCS5					0x00020000
#define	RATR_MCS6					0x00040000
#define	RATR_MCS7					0x00080000
//MCS 2 Spatial Stream
#define	RATR_MCS8					0x00100000
#define	RATR_MCS9					0x00200000
#define	RATR_MCS10					0x00400000
#define	RATR_MCS11					0x00800000
#define	RATR_MCS12					0x01000000
#define	RATR_MCS13					0x02000000
#define	RATR_MCS14					0x04000000
#define	RATR_MCS15					0x08000000

//CCK
#define RATE_1M					BIT(0)
#define RATE_2M					BIT(1)
#define RATE_5_5M				BIT(2)
#define RATE_11M				BIT(3)
//OFDM
#define RATE_6M					BIT(4)
#define RATE_9M					BIT(5)
#define RATE_12M				BIT(6)
#define RATE_18M				BIT(7)
#define RATE_24M				BIT(8)
#define RATE_36M				BIT(9)
#define RATE_48M				BIT(10)
#define RATE_54M				BIT(11)
//MCS 1 Spatial Stream
#define RATE_MCS0				BIT(12)
#define RATE_MCS1				BIT(13)
#define RATE_MCS2				BIT(14)
#define RATE_MCS3				BIT(15)
#define RATE_MCS4				BIT(16)
#define RATE_MCS5				BIT(17)
#define RATE_MCS6				BIT(18)
#define RATE_MCS7				BIT(19)
//MCS 2 Spatial Stream
#define RATE_MCS8				BIT(20)
#define RATE_MCS9				BIT(21)
#define RATE_MCS10				BIT(22)
#define RATE_MCS11				BIT(23)
#define RATE_MCS12				BIT(24)
#define RATE_MCS13				BIT(25)
#define RATE_MCS14				BIT(26)
#define RATE_MCS15				BIT(27)


// ALL CCK Rate
#define	RATE_ALL_CCK				RATR_1M|RATR_2M|RATR_55M|RATR_11M
#define	RATE_ALL_OFDM_AG			RATR_6M|RATR_9M|RATR_12M|RATR_18M|RATR_24M|\
						RATR_36M|RATR_48M|RATR_54M
#define	RATE_ALL_OFDM_1SS			RATR_MCS0|RATR_MCS1|RATR_MCS2|RATR_MCS3 |\
						RATR_MCS4|RATR_MCS5|RATR_MCS6	|RATR_MCS7
#define	RATE_ALL_OFDM_2SS			RATR_MCS8|RATR_MCS9	|RATR_MCS10|RATR_MCS11|\
						RATR_MCS12|RATR_MCS13|RATR_MCS14|RATR_MCS15

#define RATE_BITMAP_ALL			0xFFFFF

// Only use CCK 1M rate for ACK
#define RATE_RRSR_CCK_ONLY_1M		0xFFFF1
#define RATE_RRSR_WITHOUT_CCK		0xFFFF0

//----------------------------------------------------------------------------
//       REG_DATA_SC bits				(Offset 0x483, 8bit)
//----------------------------------------------------------------------------

#define BIT_SHIFT_TXSC_20M			0
#define BIT_MASK_TXSC_20M			0xf
#define BIT_TXSC_20M(x)				(((x) & BIT_MASK_TXSC_20M) << BIT_SHIFT_TXSC_20M)

#define BIT_SHIFT_TXSC_40M			4
#define BIT_MASK_TXSC_40M			0xf
#define BIT_TXSC_40M(x)				(((x) & BIT_MASK_TXSC_40M) << BIT_SHIFT_TXSC_40M)

//----------------------------------------------------------------------------
//       BW_OPMODE bits				(Offset 0x603, 8bit)
//----------------------------------------------------------------------------
#define BW_OPMODE_20MHZ			BIT2
#define BW_OPMODE_5G				BIT1

//----------------------------------------------------------------------------
//       REG_WMAC_TRXPTCL_CTL bits			(Offset 0x668, 32bit)
//----------------------------------------------------------------------------
#define BIT_SHIFT_RFMOD				7
#define BIT_MASK_RFMOD				0x3
#define BIT_RFMOD(x)				(((x) & BIT_MASK_RFMOD) << BIT_SHIFT_RFMOD)


//----------------------------------------------------------------------------
//       CAM Config Setting (offset 0x680, 1 byte)
//----------------------------------------------------------------------------
#define CAM_VALID				BIT15
#define CAM_NOTVALID			0x0000
#define CAM_USEDK				BIT5

#define CAM_CONTENT_COUNT 	8

#define CAM_NONE				0x0
#define CAM_WEP40				0x01
#define CAM_TKIP				0x02
#define CAM_AES					0x04
#define CAM_WEP104				0x05
#define CAM_SMS4				0x6

#define TOTAL_CAM_ENTRY		32
#define HALF_CAM_ENTRY			16

#define CAM_CONFIG_USEDK		_TRUE
#define CAM_CONFIG_NO_USEDK	_FALSE

#define CAM_WRITE				BIT16
#define CAM_READ				0x00000000
#define CAM_POLLINIG			BIT31

#define SCR_UseDK				0x01
#define SCR_TxSecEnable			0x02
#define SCR_RxSecEnable			0x04

//
// 10. Power Save Control Registers
//
#define	WOW_PMEN				BIT0 // Power management Enable.
#define	WOW_WOMEN			BIT1 // WoW function on or off. 
#define	WOW_MAGIC				BIT2 // Magic packet
#define	WOW_UWF				BIT3 // Unicast Wakeup frame.

//
// 12. Host Interrupt Status Registers
//
//----------------------------------------------------------------------------
//      8190 IMR/ISR bits
//----------------------------------------------------------------------------
#define IMR8190_DISABLED		0x0
#define IMR_DISABLED			0x0
// IMR DW0 Bit 0-31
#define IMR_BCNDMAINT6			BIT31		// Beacon DMA Interrupt 6
#define IMR_BCNDMAINT5			BIT30		// Beacon DMA Interrupt 5
#define IMR_BCNDMAINT4			BIT29		// Beacon DMA Interrupt 4
#define IMR_BCNDMAINT3			BIT28		// Beacon DMA Interrupt 3
#define IMR_BCNDMAINT2			BIT27		// Beacon DMA Interrupt 2
#define IMR_BCNDMAINT1			BIT26		// Beacon DMA Interrupt 1
#define IMR_BCNDOK8				BIT25		// Beacon Queue DMA OK Interrup 8
#define IMR_BCNDOK7				BIT24		// Beacon Queue DMA OK Interrup 7
#define IMR_BCNDOK6				BIT23		// Beacon Queue DMA OK Interrup 6
#define IMR_BCNDOK5				BIT22		// Beacon Queue DMA OK Interrup 5
#define IMR_BCNDOK4				BIT21		// Beacon Queue DMA OK Interrup 4
#define IMR_BCNDOK3				BIT20		// Beacon Queue DMA OK Interrup 3
#define IMR_BCNDOK2				BIT19		// Beacon Queue DMA OK Interrup 2
#define IMR_BCNDOK1				BIT18		// Beacon Queue DMA OK Interrup 1
#define IMR_TIMEOUT2			BIT17		// Timeout interrupt 2
#define IMR_TIMEOUT1			BIT16		// Timeout interrupt 1
#define IMR_TXFOVW				BIT15		// Transmit FIFO Overflow
#define IMR_PSTIMEOUT			BIT14		// Power save time out interrupt 
#define IMR_BcnInt				BIT13		// Beacon DMA Interrupt 0
#define IMR_RXFOVW				BIT12		// Receive FIFO Overflow
#define IMR_RDU					BIT11		// Receive Descriptor Unavailable
#define IMR_ATIMEND				BIT10		// For 92C,ATIM Window End Interrupt. For 8723 and later ICs, it also means P2P CTWin End interrupt.
#define IMR_BDOK				BIT9		// Beacon Queue DMA OK Interrup
#define IMR_HIGHDOK				BIT8		// High Queue DMA OK Interrupt
#define IMR_TBDOK				BIT7		// Transmit Beacon OK interrup
#define IMR_MGNTDOK			BIT6		// Management Queue DMA OK Interrupt
#define IMR_TBDER				BIT5		// For 92C,Transmit Beacon Error Interrupt
#define IMR_BKDOK				BIT4		// AC_BK DMA OK Interrupt
#define IMR_BEDOK				BIT3		// AC_BE DMA OK Interrupt
#define IMR_VIDOK				BIT2		// AC_VI DMA OK Interrupt
#define IMR_VODOK				BIT1		// AC_VO DMA Interrupt
#define IMR_ROK					BIT0		// Receive DMA OK Interrupt

// 13. Host Interrupt Status Extension Register	 (Offset: 0x012C-012Eh)
#define IMR_TSF_BIT32_TOGGLE	BIT15
#define IMR_BcnInt_E				BIT12
#define IMR_TXERR				BIT11
#define IMR_RXERR				BIT10
#define IMR_C2HCMD				BIT9
#define IMR_CPWM				BIT8
//RSVD [2-7]
#define IMR_OCPINT				BIT1
#define IMR_WLANOFF			BIT0

//----------------------------------------------------------------------------
// 8723E series PCIE Host IMR/ISR bit
//----------------------------------------------------------------------------
// IMR DW0 Bit 0-31
#define PHIMR_TIMEOUT2				BIT31
#define PHIMR_TIMEOUT1				BIT30
#define PHIMR_PSTIMEOUT			BIT29
#define PHIMR_GTINT4				BIT28
#define PHIMR_GTINT3				BIT27
#define PHIMR_TXBCNERR				BIT26
#define PHIMR_TXBCNOK				BIT25
#define PHIMR_TSF_BIT32_TOGGLE	BIT24
#define PHIMR_BCNDMAINT3			BIT23
#define PHIMR_BCNDMAINT2			BIT22
#define PHIMR_BCNDMAINT1			BIT21
#define PHIMR_BCNDMAINT0			BIT20
#define PHIMR_BCNDOK3				BIT19
#define PHIMR_BCNDOK2				BIT18
#define PHIMR_BCNDOK1				BIT17
#define PHIMR_BCNDOK0				BIT16
#define PHIMR_HSISR_IND_ON			BIT15
#define PHIMR_BCNDMAINT_E			BIT14
#define PHIMR_ATIMEND_E			BIT13
#define PHIMR_ATIM_CTW_END		BIT12
#define PHIMR_HISRE_IND			BIT11	// RO. HISRE Indicator (HISRE & HIMRE is true, this bit is set to 1)
#define PHIMR_C2HCMD				BIT10
#define PHIMR_CPWM2				BIT9
#define PHIMR_CPWM					BIT8
#define PHIMR_HIGHDOK				BIT7		// High Queue DMA OK Interrupt
#define PHIMR_MGNTDOK				BIT6		// Management Queue DMA OK Interrupt
#define PHIMR_BKDOK					BIT5		// AC_BK DMA OK Interrupt
#define PHIMR_BEDOK					BIT4		// AC_BE DMA OK Interrupt
#define PHIMR_VIDOK					BIT3		// AC_VI DMA OK Interrupt
#define PHIMR_VODOK				BIT2		// AC_VO DMA Interrupt
#define PHIMR_RDU					BIT1		// Receive Descriptor Unavailable
#define PHIMR_ROK					BIT0		// Receive DMA OK Interrupt

// PCIE Host Interrupt Status Extension bit
#define PHIMR_BCNDMAINT7			BIT23
#define PHIMR_BCNDMAINT6			BIT22
#define PHIMR_BCNDMAINT5			BIT21
#define PHIMR_BCNDMAINT4			BIT20
#define PHIMR_BCNDOK7				BIT19
#define PHIMR_BCNDOK6				BIT18
#define PHIMR_BCNDOK5				BIT17
#define PHIMR_BCNDOK4				BIT16
// bit12 15: RSVD
#define PHIMR_TXERR					BIT11
#define PHIMR_RXERR					BIT10
#define PHIMR_TXFOVW				BIT9
#define PHIMR_RXFOVW				BIT8
// bit2-7: RSVD
#define PHIMR_OCPINT				BIT1
// bit0: RSVD

#define UHIMR_TIMEOUT2				BIT31
#define UHIMR_TIMEOUT1				BIT30
#define UHIMR_PSTIMEOUT			BIT29
#define UHIMR_GTINT4				BIT28
#define UHIMR_GTINT3				BIT27
#define UHIMR_TXBCNERR				BIT26
#define UHIMR_TXBCNOK				BIT25
#define UHIMR_TSF_BIT32_TOGGLE	BIT24
#define UHIMR_BCNDMAINT3			BIT23
#define UHIMR_BCNDMAINT2			BIT22
#define UHIMR_BCNDMAINT1			BIT21
#define UHIMR_BCNDMAINT0			BIT20
#define UHIMR_BCNDOK3				BIT19
#define UHIMR_BCNDOK2				BIT18
#define UHIMR_BCNDOK1				BIT17
#define UHIMR_BCNDOK0				BIT16
#define UHIMR_HSISR_IND			BIT15
#define UHIMR_BCNDMAINT_E			BIT14
//RSVD	BIT13
#define UHIMR_CTW_END				BIT12
//RSVD	BIT11
#define UHIMR_C2HCMD				BIT10
#define UHIMR_CPWM2				BIT9
#define UHIMR_CPWM					BIT8
#define UHIMR_HIGHDOK				BIT7		// High Queue DMA OK Interrupt
#define UHIMR_MGNTDOK				BIT6		// Management Queue DMA OK Interrupt
#define UHIMR_BKDOK				BIT5		// AC_BK DMA OK Interrupt
#define UHIMR_BEDOK				BIT4		// AC_BE DMA OK Interrupt
#define UHIMR_VIDOK					BIT3		// AC_VI DMA OK Interrupt
#define UHIMR_VODOK				BIT2		// AC_VO DMA Interrupt
#define UHIMR_RDU					BIT1		// Receive Descriptor Unavailable
#define UHIMR_ROK					BIT0		// Receive DMA OK Interrupt

// USB Host Interrupt Status Extension bit
#define UHIMR_BCNDMAINT7			BIT23
#define UHIMR_BCNDMAINT6			BIT22
#define UHIMR_BCNDMAINT5			BIT21
#define UHIMR_BCNDMAINT4			BIT20
#define UHIMR_BCNDOK7				BIT19
#define UHIMR_BCNDOK6				BIT18
#define UHIMR_BCNDOK5				BIT17
#define UHIMR_BCNDOK4				BIT16
// bit14-15: RSVD
#define UHIMR_ATIMEND_E			BIT13
#define UHIMR_ATIMEND				BIT12
#define UHIMR_TXERR					BIT11
#define UHIMR_RXERR					BIT10
#define UHIMR_TXFOVW				BIT9
#define UHIMR_RXFOVW				BIT8
// bit2-7: RSVD
#define UHIMR_OCPINT				BIT1
// bit0: RSVD


#define HAL_NIC_UNPLUG_ISR			0xFFFFFFFF	// The value when the NIC is unplugged for PCI.
#define HAL_NIC_UNPLUG_PCI_ISR		0xEAEAEAEA	// The value when the NIC is unplugged for PCI in PCI interrupt (page 3).

//----------------------------------------------------------------------------
//       8188 IMR/ISR bits
//----------------------------------------------------------------------------
#define IMR_DISABLED_88E			0x0
// IMR DW0(0x0060-0063) Bit 0-31
#define IMR_TXCCK_88E				BIT30		// TXRPT interrupt when CCX bit of the packet is set	
#define IMR_PSTIMEOUT_88E			BIT29		// Power Save Time Out Interrupt
#define IMR_GTINT4_88E				BIT28		// When GTIMER4 expires, this bit is set to 1	
#define IMR_GTINT3_88E				BIT27		// When GTIMER3 expires, this bit is set to 1	
#define IMR_TBDER_88E				BIT26		// Transmit Beacon0 Error			
#define IMR_TBDOK_88E				BIT25		// Transmit Beacon0 OK			
#define IMR_TSF_BIT32_TOGGLE_88E	BIT24		// TSF Timer BIT32 toggle indication interrupt			
#define IMR_BCNDMAINT0_88E		BIT20		// Beacon DMA Interrupt 0			
#define IMR_BCNDERR0_88E			BIT16		// Beacon Queue DMA Error 0
#define IMR_HSISR_IND_ON_INT_88E	BIT15		// HSISR Indicator (HSIMR & HSISR is true, this bit is set to 1)			
#define IMR_BCNDMAINT_E_88E		BIT14		// Beacon DMA Interrupt Extension for Win7			
#define IMR_ATIMEND_88E			BIT12		// CTWidnow End or ATIM Window End
#define IMR_HISR1_IND_INT_88E		BIT11		// HISR1 Indicator (HISR1 & HIMR1 is true, this bit is set to 1)
#define IMR_C2HCMD_88E				BIT10		// CPU to Host Command INT Status, Write 1 clear	
#define IMR_CPWM2_88E				BIT9			// CPU power Mode exchange INT Status, Write 1 clear	
#define IMR_CPWM_88E				BIT8			// CPU power Mode exchange INT Status, Write 1 clear	
#define IMR_HIGHDOK_88E			BIT7			// High Queue DMA OK	
#define IMR_MGNTDOK_88E			BIT6			// Management Queue DMA OK	
#define IMR_BKDOK_88E				BIT5			// AC_BK DMA OK		
#define IMR_BEDOK_88E				BIT4			// AC_BE DMA OK	
#define IMR_VIDOK_88E				BIT3			// AC_VI DMA OK		
#define IMR_VODOK_88E				BIT2			// AC_VO DMA OK	
#define IMR_RDU_88E					BIT1			// Rx Descriptor Unavailable	
#define IMR_ROK_88E					BIT0			// Receive DMA OK

// IMR DW1(0x00B4-00B7) Bit 0-31
#define IMR_BCNDMAINT7_88E		BIT27		// Beacon DMA Interrupt 7
#define IMR_BCNDMAINT6_88E		BIT26		// Beacon DMA Interrupt 6
#define IMR_BCNDMAINT5_88E		BIT25		// Beacon DMA Interrupt 5
#define IMR_BCNDMAINT4_88E		BIT24		// Beacon DMA Interrupt 4
#define IMR_BCNDMAINT3_88E		BIT23		// Beacon DMA Interrupt 3
#define IMR_BCNDMAINT2_88E		BIT22		// Beacon DMA Interrupt 2
#define IMR_BCNDMAINT1_88E		BIT21		// Beacon DMA Interrupt 1
#define IMR_BCNDOK7_88E			BIT20		// Beacon Queue DMA OK Interrup 7
#define IMR_BCNDOK6_88E			BIT19		// Beacon Queue DMA OK Interrup 6
#define IMR_BCNDOK5_88E			BIT18		// Beacon Queue DMA OK Interrup 5
#define IMR_BCNDOK4_88E			BIT17		// Beacon Queue DMA OK Interrup 4
#define IMR_BCNDOK3_88E			BIT16		// Beacon Queue DMA OK Interrup 3
#define IMR_BCNDOK2_88E			BIT15		// Beacon Queue DMA OK Interrup 2
#define IMR_BCNDOK1_88E			BIT14		// Beacon Queue DMA OK Interrup 1
#define IMR_ATIMEND_E_88E			BIT13		// ATIM Window End Extension for Win7
#define IMR_TXERR_88E				BIT11		// Tx Error Flag Interrupt Status, write 1 clear.
#define IMR_RXERR_88E				BIT10		// Rx Error Flag INT Status, Write 1 clear
#define IMR_TXFOVW_88E				BIT9			// Transmit FIFO Overflow
#define IMR_RXFOVW_88E				BIT8			// Receive FIFO Overflow

/*===================================================================
=====================================================================
Here the register defines are for 92C. When the define is as same with 92C,
we will use the 92C's define for the consistency
So the following defines for 92C is not entire!!!!!!
=====================================================================
=====================================================================*/
/*
Based on Datasheet V33---090401
Register Summary
Current IOREG MAP
0x0000h ~ 0x00FFh   System Configuration (256 Bytes)
0x0100h ~ 0x01FFh   MACTOP General Configuration (256 Bytes)
0x0200h ~ 0x027Fh   TXDMA Configuration (128 Bytes)
0x0280h ~ 0x02FFh   RXDMA Configuration (128 Bytes)
0x0300h ~ 0x03FFh   PCIE EMAC Reserved Region (256 Bytes)
0x0400h ~ 0x04FFh   Protocol Configuration (256 Bytes)
0x0500h ~ 0x05FFh   EDCA Configuration (256 Bytes)
0x0600h ~ 0x07FFh   WMAC Configuration (512 Bytes)
0x2000h ~ 0x3FFFh   8051 FW Download Region (8196 Bytes)
*/
//----------------------------------------------------------------------------
//		 8192C (TXPAUSE) transmission pause 	(Offset 0x522, 8 bits)
//----------------------------------------------------------------------------
// Note:
//	The the bits of stoping AC(VO/VI/BE/BK) queue in datasheet RTL8192S/RTL8192C are wrong,
//	the correct arragement is VO - Bit0, VI - Bit1, BE - Bit2, and BK - Bit3.
//	8723 and 88E may be not correct either in the eralier version. Confirmed with DD Tim.
// By Bruce, 2011-09-22.
#define StopBecon		BIT6
#define StopHigh			BIT5
#define StopMgt			BIT4
#define StopBK			BIT3
#define StopBE			BIT2
#define StopVI			BIT1
#define StopVO			BIT0

//----------------------------------------------------------------------------
//       8192C (RCR) Receive Configuration Register	(Offset 0x608, 32 bits)
//----------------------------------------------------------------------------
#define RCR_APPFCS				BIT31	// WMAC append FCS after pauload
#define RCR_APP_MIC				BIT30	// MACRX will retain the MIC at the bottom of the packet. 
#define RCR_APP_ICV				BIT29	// MACRX will retain the ICV at the bottom of the packet.
#define RCR_APP_PHYST_RXFF		BIT28	// PHY Status is appended before RX packet in RXFF
#define RCR_APP_BA_SSN			BIT27	// SSN of previous TXBA is appended as after original RXDESC as the 4-th DW of RXDESC.
#define RCR_NONQOS_VHT			BIT26	// Reserved
#define RCR_RSVD_BIT25			BIT25	// Reserved
#define RCR_ENMBID				BIT24	// Enable Multiple BssId. Only response ACK to the packets whose DID(A1) matching to the addresses in the MBSSID CAM Entries.
#define RCR_LSIGEN				BIT23	// Enable LSIG TXOP Protection function. Search KEYCAM for each rx packet to check if LSIGEN bit is set.
#define RCR_MFBEN				BIT22	// Enable immediate MCS Feedback function. When Rx packet with MRQ = 1'b1, then search KEYCAM to find sender's MCS Feedback function and send response.
#define RCR_RSVD_BIT21			BIT21	// Reserved
#define RCR_RSVD_BIT20			BIT20	// Reserved
#define RCR_RSVD_BIT19			BIT19	// Reserved
#define RCR_TIM_PARSER_EN		BIT18	// RX Beacon TIM Parser.
#define RCR_BM_DATA_EN			BIT17	// Broadcast data packet interrupt enable.
#define RCR_UC_DATA_EN			BIT16	// Unicast data packet interrupt enable.
#define RCR_RSVD_BIT15			BIT15	// Reserved
#define RCR_HTC_LOC_CTRL		BIT14	// MFC<--HTC=1 MFC-->HTC=0
#define RCR_AMF					BIT13	// Accept management type frame
#define RCR_ACF					BIT12	// Accept control type frame. Control frames BA, BAR, and PS-Poll (when in AP mode) are not controlled by this bit. They are controlled by ADF.
#define RCR_ADF					BIT11	// Accept data type frame. This bit also regulates BA, BAR, and PS-Poll (AP mode only).
#define RCR_RSVD_BIT10			BIT10	// Reserved
#define RCR_AICV					BIT9		// Accept ICV error packet
#define RCR_ACRC32				BIT8		// Accept CRC32 error packet 
#define RCR_CBSSID_BCN			BIT7		// Accept BSSID match packet (Rx beacon, probe rsp)
#define RCR_CBSSID_DATA		BIT6		// Accept BSSID match packet (Data)
#define RCR_CBSSID				RCR_CBSSID_DATA	// Accept BSSID match packet
#define RCR_APWRMGT			BIT5		// Accept power management packet
#define RCR_ADD3				BIT4		// Accept address 3 match packet
#define RCR_AB					BIT3		// Accept broadcast packet 
#define RCR_AM					BIT2		// Accept multicast packet 
#define RCR_APM					BIT1		// Accept physical match packet
#define RCR_AAP					BIT0		// Accept all unicast packet 


//-----------------------------------------------------
//
//	0x0000h ~ 0x00FFh	System Configuration
//
//-----------------------------------------------------

//2 SYS_ISO_CTRL
#define ISO_MD2PP				BIT(0)
#define ISO_UA2USB				BIT(1)
#define ISO_UD2CORE				BIT(2)
#define ISO_PA2PCIE				BIT(3)
#define ISO_PD2CORE				BIT(4)
#define ISO_IP2MAC				BIT(5)
#define ISO_DIOP					BIT(6)
#define ISO_DIOE					BIT(7)
#define ISO_EB2CORE				BIT(8)
#define ISO_DIOR					BIT(9)
#define PWC_EV12V				BIT(15)


//2 SYS_FUNC_EN
#define FEN_BBRSTB				BIT(0)
#define FEN_BB_GLB_RSTn		BIT(1)
#define FEN_USBA				BIT(2)
#define FEN_UPLL				BIT(3)
#define FEN_USBD				BIT(4)
#define FEN_DIO_PCIE			BIT(5)
#define FEN_PCIEA				BIT(6)
#define FEN_PPLL					BIT(7)
#define FEN_PCIED				BIT(8)
#define FEN_DIOE				BIT(9)
#define FEN_CPUEN				BIT(10)
#define FEN_DCORE				BIT(11)
#define FEN_ELDR				BIT(12)
//#define FEN_DIO_RF				BIT(13)
#define FEN_HWPDN				BIT(14)
#define FEN_MREGEN				BIT(15)

/* REG_WL_FUNC_EN 0x0004 */
#define BIT_SHIFT_FEN_BBRSTB_V2                      17
#define BIT_FEN_BBRSTB_V2                            ((u32)0x00000001 << BIT_SHIFT_FEN_BBRSTB_V2)                      /*!<R/W 0  When this bit is set to , CCK and OFDM are disabled, and clock are gated. Otherwise, CCK and OFDM are enabled. */
#define BIT_SHIFT_FEN_BB_GLB_RSTN_V2                 16
#define BIT_FEN_BB_GLB_RSTN_V2                       ((u32)0x00000001 << BIT_SHIFT_FEN_BB_GLB_RSTN_V2)                 /*!<R/W 0  When this bit is set to , whole BB is reset. When this bit is set, BB is enabled. */
#define BIT_SHIFT_FEN_MAC_PMC                        0
#define BIT_FEN_MAC_PMC                              ((u32)0x00000001 << BIT_SHIFT_FEN_MAC_PMC)                        /*!<R/W 0  1: enable MAC PMC; 0: reset */

/* REG_CLKDIV 0x0008 */
#define BIT_SHIFT_MAC_CLK_SEL                        18
#define BIT_MASK_MAC_CLK_SEL                         ((u32)0x00000003 << BIT_SHIFT_MAC_CLK_SEL)                        /*!<R/W 2'b10  11/10:20M 01:40M 00:80M */
#define MAC_CLK_20M				(0x2 << BIT_SHIFT_MAC_CLK_SEL)
#define MAC_CLK_40M				(0x1 << BIT_SHIFT_MAC_CLK_SEL)

/* REG_WL_PMC_CTRL 0x0020 */
#define BIT_SHIFT_WL_PMC_OFFMAC                       1
#define BIT_WL_PMC_OFFMAC                             ((u32)0x00000001 << BIT_SHIFT_WL_PMC_OFFMAC)                       /*!<R/W 0  Inform WLAN PMC FSM to power On mode, include clock, isolation, power control for MAC only (clear when Power Ready) */
#define BIT_SHIFT_WL_PMC_ONMAC                       0
#define BIT_WL_PMC_ONMAC                             ((u32)0x00000001 << BIT_SHIFT_WL_PMC_ONMAC)                       /*!<R/W 0  Inform WLAN PMC FSM to power On mode, include clock, isolation, power control for MAC only (clear when Power Ready) */


//2 APS_FSMCO
#define PFM_LDALL				BIT(0)
#define PFM_ALDN				BIT(1)
#define PFM_LDKP				BIT(2)
#define PFM_WOWL				BIT(3)
#define EnPDN					BIT(4)
#define PDN_PL					BIT(5)
#define APFM_ONMAC				BIT(8)
#define APFM_OFF				BIT(9)
#define APFM_RSM				BIT(10)
#define AFSM_HSUS				BIT(11)
#define AFSM_PCIE				BIT(12)
#define APDM_MAC				BIT(13)
#define APDM_HOST				BIT(14)
#define APDM_HPDN				BIT(15)
#define RDY_MACON				BIT(16)
#define SUS_HOST				BIT(17)
#define ROP_ALD					BIT(20)
#define ROP_PWR					BIT(21)
#define ROP_SPS					BIT(22)
#define SOP_MRST				BIT(25)
#define SOP_FUSE				BIT(26)
#define SOP_ABG					BIT(27)
#define SOP_AMB					BIT(28)
#define SOP_RCK					BIT(29)
#define SOP_A8M					BIT(30)
#define XOP_BTCK				BIT(31)

//2 SYS_CLKR
#define ANAD16V_EN				BIT(0)
#define ANA8M					BIT(1)
#define MACSLP					BIT(4)
#define LOADER_CLK_EN			BIT(5)


//2 9346CR /REG_SYS_EEPROM_CTRL
#define BOOT_FROM_EEPROM		BIT(4)
#define EEPROMSEL				BIT(4)
#define EEPROM_EN				BIT(5)


//2 RF_CTRL
#define RF_EN					BIT(0)
#define RF_RSTB					BIT(1)
#define RF_SDMRSTB				BIT(2)
#define RF_DAI_REG00_WREN		BIT(6)
#define RF_DAI_RW_EN			BIT(7)


//2 LDOV12D_CTRL
#define LDV12_EN				BIT(0)
#define LDV12_SDBY				BIT(1)
#define LPLDO_HSM				BIT(2)
#define LPLDO_LSM_DIS			BIT(3)
#define _LDV12_VADJ(x)			(((x) & 0xF) << 4)



//2 EFUSE_TEST (For RTL8723 partially)
#define EF_TRPT					BIT(7)
#define EF_CELL_SEL				(BIT(8)|BIT(9)) // 00: Wifi Efuse, 01: BT Efuse0, 10: BT Efuse1, 11: BT Efuse2
#define LDOE25_EN				BIT(31)
#define EFUSE_SEL(x)				(((x) & 0x3) << 8)
#define EFUSE_SEL_MASK			0x300
#define EFUSE_WIFI_SEL_0		0x0
#define EFUSE_BT_SEL_0			0x1
#define EFUSE_BT_SEL_1			0x2
#define EFUSE_BT_SEL_2			0x3


//2 8051FWDL
//2 MCUFWDL
#define MCUFWDL_EN				BIT(0)
#define MCUFWDL_RDY			BIT(1)
#define FWDL_ChkSum_rpt		BIT(2)
#define MACINI_RDY				BIT(3)
#define BBINI_RDY				BIT(4)
#define RFINI_RDY				BIT(5)
#define WINTINI_RDY				BIT(6)
#define RAM_DL_SEL				BIT(7)
#define ROM_DLEN				BIT(19)
#define CPRST					BIT(23)


//2 REG_SYS_CFG
#define XCLK_VLD				BIT(0)
#define ACLK_VLD				BIT(1)
#define UCLK_VLD				BIT(2)
#define PCLK_VLD				BIT(3)
#define PCIRSTB					BIT(4)
#define V15_VLD					BIT(5)
#define SW_OFFLOAD_EN			BIT(7)
#define SIC_IDLE					BIT(8)
#define BD_MAC2					BIT(9)
#define BD_MAC1					BIT(10)
#define IC_MACPHY_MODE		BIT(11)
#define CHIP_VER				(BIT(12)|BIT(13)|BIT(14)|BIT(15))
#define BT_FUNC					BIT(16)
#define VENDOR_ID				BIT(19)
#define EXT_VENDOR_ID			(BIT(18)|BIT(19)) //Currently only for RTL8723B
#define PAD_HWPD_IDN			BIT(22)
#define TRP_VAUX_EN				BIT(23)	// RTL ID
#define TRP_BT_EN				BIT(24)
#define BD_PKG_SEL				BIT(25)
#define BD_HCI_SEL				BIT(26)
#define TYPE_ID					BIT(27)
#define RF_TYPE_ID				BIT(27)

#define RTL_ID					BIT(23) // TestChip ID, 1:Test(RLE); 0:MP(RL)
#define SPS_SEL					BIT(24) // 1:LDO regulator mode; 0:Switching regulator mode


#define CHIP_VER_RTL_MASK		0xF000	//Bit 12 ~ 15
#define CHIP_VER_RTL_SHIFT		12
#define EXT_VENDOR_ID_SHIFT	18

//2 REG_GPIO_OUTSTS (For RTL8723 only)
#define EFS_HCI_SEL				(BIT(0)|BIT(1))
#define PAD_HCI_SEL				(BIT(2)|BIT(3))
#define HCI_SEL					(BIT(4)|BIT(5))
#define PKG_SEL_HCI				BIT(6)
#define FEN_GPS					BIT(7)
#define FEN_BT					BIT(8)
#define FEN_WL					BIT(9)
#define FEN_PCI					BIT(10)
#define FEN_USB					BIT(11)
#define BTRF_HWPDN_N			BIT(12)
#define WLRF_HWPDN_N			BIT(13)
#define PDN_BT_N				BIT(14)
#define PDN_GPS_N				BIT(15)
#define BT_CTL_HWPDN			BIT(16)
#define GPS_CTL_HWPDN			BIT(17)
#define PPHY_SUSB				BIT(20)
#define UPHY_SUSB				BIT(21)
#define PCI_SUSEN				BIT(22)
#define USB_SUSEN				BIT(23)
#define RF_RL_ID					(BIT(31)|BIT(30)|BIT(29)|BIT(28))

//2 REG_WL_BTCOEX_CTRL (0x74)
#define PTA_EN					BIT(16)
#define BT_MODE					(BIT(17)|BIT(18))


//-----------------------------------------------------
//
//	0x0100h ~ 0x01FFh	MACTOP General Configuration
//
//-----------------------------------------------------

//2 Function Enable Registers
//2 CR
#define HCI_TXDMA_EN			BIT(0)
#define HCI_RXDMA_EN			BIT(1)
#define TXDMA_EN				BIT(2)
#define RXDMA_EN				BIT(3)
#define PROTOCOL_EN				BIT(4)
#define SCHEDULE_EN				BIT(5)
#define MACTXEN					BIT(6)
#define MACRXEN					BIT(7)
#define ENSWBCN					BIT(8)
#define ENSEC					BIT(9)
#define CALTMR_EN				BIT(10)	// 32k CAL TMR enable

// Network type
#define _NETTYPE(x)				(((x) & 0x3) << 16)
#define MASK_NETTYPE			0x30000
#define NT_NO_LINK				0x0
#define NT_LINK_AD_HOC			0x1
#define NT_LINK_AP				0x2
#define NT_AS_AP				0x3

//2 PBP - Page Size Register
#define GET_RX_PAGE_SIZE(value)			((value) & 0xF)
#define GET_TX_PAGE_SIZE(value)			(((value) & 0xF0) >> 4)
#define _PSRX_MASK				0xF
#define _PSTX_MASK				0xF0
#define _PSRX(x)				(x)
#define _PSTX(x)				((x) << 4)

#define PBP_64					0x0
#define PBP_128					0x1
#define PBP_256					0x2
#define PBP_512					0x3
#define PBP_1024				0x4


//2 TX/RXDMA
#define RXDMA_ARBBW_EN		BIT(0)
#define RXSHFT_EN				BIT(1)
#define RXDMA_AGG_EN			BIT(2)
#define QS_VO_QUEUE			BIT(8)
#define QS_VI_QUEUE				BIT(9)
#define QS_BE_QUEUE			BIT(10)
#define QS_BK_QUEUE			BIT(11)
#define QS_MANAGER_QUEUE		BIT(12)
#define QS_HIGH_QUEUE			BIT(13)

#define HQSEL_VOQ				BIT(0)
#define HQSEL_VIQ				BIT(1)
#define HQSEL_BEQ				BIT(2)
#define HQSEL_BKQ				BIT(3)
#define HQSEL_MGTQ				BIT(4)
#define HQSEL_HIQ				BIT(5)

// For normal driver, 0x10C
#define _TXDMA_CMQ_MAP(x) 	 		(((x)&0x3) << 16)
#define _TXDMA_HIQ_MAP(x) 	 		(((x)&0x3) << 14)
#define _TXDMA_MGQ_MAP(x) 	 		(((x)&0x3) << 12)
#define _TXDMA_BKQ_MAP(x) 	 		(((x)&0x3) << 10)
#define _TXDMA_BEQ_MAP(x) 	 		(((x)&0x3) << 8 )
#define _TXDMA_VIQ_MAP(x) 	 		(((x)&0x3) << 6 )
#define _TXDMA_VOQ_MAP(x) 	 		(((x)&0x3) << 4 )

#define QUEUE_EXTRA				0
#define QUEUE_LOW				1
#define QUEUE_NORMAL			2
#define QUEUE_HIGH				3


//2 TRXFF_BNDY


//2 LLT_INIT
#define _LLT_NO_ACTIVE				0x0
#define _LLT_WRITE_ACCESS			0x1
#define _LLT_READ_ACCESS			0x2

#define _LLT_INIT_DATA(x)			((x) & 0xFF)
#define _LLT_INIT_ADDR(x)			(((x) & 0xFF) << 8)
#define _LLT_OP(x)					(((u32)(x) & 0x3) << 30)
#define _LLT_OP_VALUE(x)			(((x) >> 30) & 0x3)


//-----------------------------------------------------
//
//	0x0200h ~ 0x027Fh	TXDMA Configuration
//
//-----------------------------------------------------
//2 RQPN
#define _HPQ(x)					((x) & 0xFF)
#define _LPQ(x)					(((x) & 0xFF) << 8)
#define _PUBQ(x)					(((x) & 0xFF) << 16)
#define _NPQ(x)					((x) & 0xFF)			// NOTE: in RQPN_NPQ register
#define _EPQ(x)					(((x) & 0xFF) << 16)	// NOTE: in RQPN_EPQ register


#define HPQ_PUBLIC_DIS			BIT(24)
#define LPQ_PUBLIC_DIS			BIT(25)
#define LD_RQPN					BIT(31)


//2 TDECTL
#define BLK_DESC_NUM_SHIFT			4
#define BLK_DESC_NUM_MASK			0xF


//2 TXDMA_OFFSET_CHK
#define DROP_DATA_EN				BIT(9)

//2 AUTO_LLT
#define BIT_SHIFT_TXPKTNUM 24
#define BIT_MASK_TXPKTNUM 0xff
#define BIT_TXPKTNUM(x) (((x) & BIT_MASK_TXPKTNUM) << BIT_SHIFT_TXPKTNUM)

#define BIT_TDE_DBG_SEL BIT(23)
#define BIT_AUTO_INIT_LLT BIT(16)

#define BIT_SHIFT_Tx_OQT_free_space 8
#define BIT_MASK_Tx_OQT_free_space 0xff
#define BIT_Tx_OQT_free_space(x) (((x) & BIT_MASK_Tx_OQT_free_space) << BIT_SHIFT_Tx_OQT_free_space)


//-----------------------------------------------------
//
//	0x0280h ~ 0x028Bh	RX DMA Configuration
//
//-----------------------------------------------------

//2 REG_RXDMA_CONTROL, 0x0286h
// Write only. When this bit is set, RXDMA will decrease RX PKT counter by one. Before
// this bit is polled, FW shall update RXFF_RD_PTR first. This register is write pulse and auto clear.
//#define RXPKT_RELEASE_POLL			BIT(0)
// Read only. When RXMA finishes on-going DMA operation, RXMDA will report idle state in
// this bit. FW can start releasing packets after RXDMA entering idle mode.
//#define RXDMA_IDLE					BIT(1)
// When this bit is set, RXDMA will enter this mode after on-going RXDMA packet to host
// completed, and stop DMA packet to host. RXDMA will then report Default: 0;
//#define RW_RELEASE_EN				BIT(2)

//2 REG_RXPKT_NUM, 0x0284
#define 	RXPKT_RELEASE_POLL	BIT(16)
#define	RXDMA_IDLE				BIT(17)
#define	RW_RELEASE_EN			BIT(18)

//-----------------------------------------------------
//
//	0x0400h ~ 0x047Fh	Protocol Configuration
//
//-----------------------------------------------------
//2 CPU_MGT_INFORMATION
#define CPUMGT_POLL                 BIT(5)

//2 FWHW_TXQ_CTRL
#define EN_AMPDU_RTY_NEW			BIT(7)


//2 SPEC SIFS
#define _SPEC_SIFS_CCK(x)			((x) & 0xFF)
#define _SPEC_SIFS_OFDM(x)			(((x) & 0xFF) << 8)

//2 RL
#define	RETRY_LIMIT_SHORT_SHIFT			8
#define	RETRY_LIMIT_LONG_SHIFT			0

//2 QUEUE_CTRL (0x04C6)
#define	PTA_WL_TX_EN	BIT(4)

//2 TX_HANG_CTRL (0x045E)
#define BIT_EN_GNT_BT_AWAKE BIT(3)

#define BIT_SHIFT_PRETX_AGGR_TIME_MAX                8
#define BIT_MASK_PRETX_AGGR_TIME_MAX                 ((u32)0x000007FF << BIT_SHIFT_PRETX_AGGR_TIME_MAX)                /*!<R/W 230h  If BIT_PRETX_AGGR_EN = 1, the bits will count down after PHYTXON signal asserting every transmission in pre-tx mode.(Default: 7us) */

//-----------------------------------------------------
//
//	0x0500h ~ 0x05FFh	EDCA Configuration
//
//-----------------------------------------------------

//2 EDCA setting
#define AC_PARAM_TXOP_LIMIT_OFFSET		16
#define AC_PARAM_ECW_MAX_OFFSET			12
#define AC_PARAM_ECW_MIN_OFFSET			8
#define AC_PARAM_AIFS_OFFSET				0


#define _LRL(x)					((x) & 0x3F)
#define _SRL(x)					(((x) & 0x3F) << 8)


//2 BCN_CTRL
#define EN_TXBCN_RPT			BIT(2)
#define EN_BCN_FUNCTION		BIT(3)
#define STOP_BCNQ				BIT(6)
#define DIS_RX_BSSID_FIT		BIT(6)

#define DIS_ATIM					BIT(0)
#define DIS_BCNQ_SUB			BIT(1)
#define DIS_TSF_UDT				BIT(4)

// The same function but different bit field.
#define DIS_TSF_UDT0_NORMAL_CHIP	BIT(4)
#define DIS_TSF_UDT0_TEST_CHIP	BIT(5)


//2 ACMHWCTRL
#define AcmHw_HwEn				BIT(0)
#define AcmHw_BeqEn			BIT(1)
#define AcmHw_ViqEn				BIT(2)
#define AcmHw_VoqEn			BIT(3)
#define AcmHw_BeqStatus		BIT(4)
#define AcmHw_ViqStatus			BIT(5)
#define AcmHw_VoqStatus		BIT(6)

//2 REG_DUAL_TSF_RST (0x553)
#define DUAL_TSF_RST_P2P		BIT(4)

//2 REG_TBTT_HOLD_PREDICT_P1 (0x5B2)
#define BIT_DIS_BCN_1st			BIT(5)
#define BIT_DIS_BCN_2st			BIT(6)

//2 REG_NOA_DESC_SEL (0x5CF)
#define NOA_DESC_SEL_0			0
#define NOA_DESC_SEL_1			BIT(4)

//2 REG_PTA_PRE_TRX_CTRL(0x5B8)
#define PTA_RXBCN_DIR	BIT(29)
//-----------------------------------------------------
//
//	0x0600h ~ 0x07FFh	WMAC Configuration
//
//-----------------------------------------------------

//2 APSD_CTRL
#define APSDOFF					BIT(6)

//2 TCR
#define TSFRST					BIT(0)
#define DIS_GCLK					BIT(1)
#define PAD_SEL					BIT(2)
#define PWR_ST					BIT(6)
#define PWRBIT_OW_EN			BIT(7)
#define ACRC						BIT(8)
#define CFENDFORM				BIT(9)
#define ICV						BIT(10)


//2 RCR
#define AAP						BIT(0)
#define APM						BIT(1)
#define AM						BIT(2)
#define AB						BIT(3)
#define ADD3						BIT(4)
#define APWRMGT				BIT(5)
#define CBSSID					BIT(6)
#define CBSSID_DATA				BIT(6)
#define CBSSID_BCN				BIT(7)
#define ACRC32					BIT(8)
#define AICV						BIT(9)
#define ADF						BIT(11)
#define ACF						BIT(12)
#define AMF						BIT(13)
#define HTC_LOC_CTRL			BIT(14)
#define UC_DATA_EN				BIT(16)
#define BM_DATA_EN				BIT(17)
#define MFBEN					BIT(22)
#define LSIGEN					BIT(23)
#define EnMBID					BIT(24)
#define FORCEACK				BIT(26)
#define APP_BASSN				BIT(27)
#define APP_PHYSTS				BIT(28)
#define APP_ICV					BIT(29)
#define APP_MIC					BIT(30)
#define APP_FCS					BIT(31)


//2 SECCFG
#define SCR_TxUseDK				BIT(0)			//Force Tx Use Default Key
#define SCR_RxUseDK				BIT(1)			//Force Rx Use Default Key
#define SCR_TxEncEnable			BIT(2)			//Enable Tx Encryption
#define SCR_RxDecEnable			BIT(3)			//Enable Rx Decryption
#define SCR_SKByA2				BIT(4)			//Search kEY BY A2
#define SCR_NoSKMC				BIT(5)			//No Key Search Multicast
#define SCR_TXBCUSEDK			BIT(6)			// Force Tx Broadcast packets Use Default Key
#define SCR_RXBCUSEDK			BIT(7)			// Force Rx Broadcast packets Use Default Key
#define BIT_DIS_GCLK_TKIP                          ((u32)0x00000001 << 13)          /*!<R/W 0  Disable gated clock control for WEP/TKIP engine. */

//2 REG_BBPSF_CTRL
#define BIT_BBPSF_MPDUCHKEN	BIT[5]	//{This bit is set to 1 to enable MAC to inform BB enter power saving mode as rx unmatch my MACID unicast or unmatch my BSSID Broadcast/Mutlicast packets, for non_ampdu case. Only valid when BIT_BBPSF_MHCHKEN is set 1.}						
#define BIT_BBPSF_MHCHKEN		BIT[4]	//{This bit is set to 1 to enable MAC to inform BB enter power saving mode as rx unmatch my MACID unicast or unmatch my BSSID Broadcast/Mutlicast packets}						
#define BIT_BBPSF_ERRCHKEN		BIT[3]	//{This bit is set to 1 to enable MAC to inform BB enter power saving mode as rx FCS error packets number is large than the FCS error packet threshold defined by BBPSF_ERRTHR.}						
#define BIT_MASK_BBPSF_ERRTHR	0x07	//{FCS error packet threshold: 3'd0: 1 packets; 3'd1: 2 packets; 3'd2: 4 packets; 3'd3: 6 packets����}						
#define BIT_SHIFT_BBPSF_ERRTHR	0

//2 REG_BT_COEX (0x764)
#define SW_CTRL_BT_BASEBAND_EN				BIT(9)
#define SW_CTRL_BT_BASEBAND					BIT(10)
#define SW_CTRL_BT_RF_EN					BIT(11)
#define SW_CTRL_BT_RF						BIT(12)
//-----------------------------------------------------
//
//  0x0300h ~ 0x03FFh   PCIe/LBus
//
//-----------------------------------------------------


//4 REG_LX_CTRL1(0x300)
#define BIT_WT_LIT_EDN              	BIT(25)
#define BIT_RD_LITT_EDN             	BIT(24)

#define BIT_SHIFT_MAX_RXDMA	20
#define BIT_MASK_MAX_RXDMA     0x7
#define BIT_MAX_RXDMA(x)            (((x) & BIT_MASK_MAX_RXDMA)<<BIT_SHIFT_MAX_RXDMA)

#define BIT_SHIFT_MAX_TXDMA     16
#define BIT_MASK_MAX_TXDMA      0x7
#define BIT_MAX_TXDMA(x)            (((x) & BIT_MASK_MAX_TXDMA)<<BIT_SHIFT_MAX_TXDMA)

#define SW_BCN_ADDR_SEL		BIT(16)
#define BIT_STOP_BCNQ               	BIT(14)
#define BIT_STOP_MGQ			BIT(13)
#define BIT_STOP_VOQ                	BIT(12)
#define BIT_STOP_VIQ                	BIT(11)
#define BIT_STOP_BEQ                	BIT(10)
#define BIT_STOP_BKQ                	BIT(9)
#define BIT_STOP_RXQ                	BIT(8)
#define BIT_STOP_HI7Q               	BIT(7)
#define BIT_STOP_HI6Q               	BIT(6)
#define BIT_STOP_HI5Q               	BIT(5)
#define BIT_STOP_HI4Q               	BIT(4)
#define BIT_STOP_HI3Q               	BIT(3)
#define BIT_STOP_HI2Q               	BIT(2)
#define BIT_STOP_HI1Q               	BIT(1)
#define BIT_STOP_HI0Q               	BIT(0)


//4 REG_INT_MIG_CFG(0x0304), 4 Bytes
#define BIT_SHIFT_TXTTIMER_MATCH_NUM		28
#define BIT_MASK_TXTTIMER_MATCH_NUM			0xF
#define BIT_MAX_TXTTIMER_MATCH_NUM(x)		(((x) & BIT_MASK_TXTTIMER_MATCH_NUM)<<BIT_SHIFT_TXTTIMER_MATCH_NUM)

#define BIT_SHIFT_TXPKT_NUM_MATCH			24
#define BIT_MASK_TXPKT_NUM_MATCH                    0xF
#define BIT_MAX_TXPKT_NUM_MATCH(x)                  (((x) & BIT_MASK_TXPKT_NUM_MATCH)<<BIT_SHIFT_TXPKT_NUM_MATCH)

#define BIT_SHIFT_RXTTIMER_MATCH_NUM		20
#define BIT_MASK_RXTTIMER_MATCH_NUM			0xF
#define BIT_MAX_RXTTIMER_MATCH_NUM(x)		(((x) & BIT_MASK_RXTTIMER_MATCH_NUM)<<BIT_SHIFT_RXTTIMER_MATCH_NUM)

#define BIT_SHIFT_RXPKT_NUM_MATCH			16
#define BIT_MASK_RXPKT_NUM_MATCH			0xF
#define BIT_MAX_RXPKT_NUM_MATCH(x)			(((x) & BIT_MASK_RXPKT_NUM_MATCH)<<BIT_SHIFT_RXPKT_NUM_MATCH)

#define BIT_SHIFT_MIGRATE_TIMER				0
#define BIT_MASK_MIGRATE_TIMER				0xFFFF
#define BIT_MAX_MIGRATE_TIMER(x)				(((x) & BIT_MASK_MIGRATE_TIMER)<<BIT_SHIFT_MIGRATE_TIMER)

//4 #define REG_BCNQ_TXBD_DESA          0x0308  // 8 Bytes
//4 #define REG_MGQ_TXBD_DESA           0x0310  // 8 Bytes
//4 #define REG_VOQ_TXBD_DESA           0x0318  // 8 Bytes
//4 #define REG_VIQ_TXBD_DESA           0x0320  // 8 Bytes
//4 #define REG_BEQ_TXBD_DESA           0x0328  // 8 Bytes
//4 #define REG_BKQ_TXBD_DESA           0x0330  // 8 Bytes
//4 #define REG_RXQ_RXBD_DESA           0x0338  // 8 Bytes
//4 #define REG_HI0Q_TXBD_DESA          0x0340  // 8 Bytes
//4 #define REG_HI1Q_TXBD_DESA          0x0348  // 8 Bytes
//4 #define REG_HI2Q_TXBD_DESA          0x0350  // 8 Bytes
//4 #define REG_HI3Q_TXBD_DESA          0x0358  // 8 Bytes
//4 #define REG_HI4Q_TXBD_DESA          0x0360  // 8 Bytes
//4 #define REG_HI5Q_TXBD_DESA          0x0368  // 8 Bytes
//4 #define REG_HI6Q_TXBD_DESA          0x0370  // 8 Bytes
//4 #define REG_HI7Q_TXBD_DESA          0x0378  // 8 Bytes


//4 #define REG_MGQ_TXBD_NUM            0x0380  // 2 Bytes
#define BIT_SHIFT_MGQ_DESC_MODE                      12
#define BIT_MASK_MGQ_DESC_MODE                       0x3
#define BIT_MAX_MGQ_DESC_MODE(x)                     (((x) & BIT_MASK_MGQ_DESC_MODE)<<BIT_SHIFT_MGQ_DESC_MODE)

#define BIT_SHIFT_MGQ_DESC_NUM                      0
#define BIT_MASK_MGQ_DESC_NUM                       0xFFF
#define BIT_MAX_MGQ_DESC_NUM(x)                     (((x) & BIT_MASK_MGQ_DESC_NUM)<<BIT_SHIFT_MGQ_DESC_NUM)


//4 #define REG_RX_RXBD_NUM             0x0382  // 2 Bytes
#define BIT_SYS_32_64                               BIT(15)

#define BIT_SHIFT_BCNQ_DESC_MODE                    13
#define BIT_MASK_BCNQ_DESC_MODE                     0x3
#define BIT_MAX_BCNQ_DESC_MODE(x)                   (((x) & BIT_MASK_BCNQ_DESC_MODE)<<BIT_SHIFT_BCNQ_DESC_MODE)

#define BIT_BCNQ_FLAG                               BIT(12)

#define BIT_SHIFT_RXQ_DESC_NUM                      0
#define BIT_MASK_RXQ_DESC_NUM                       0xFFF
#define BIT_MAX_RXQ_DESC_NUM(x)                     (((x) & BIT_MASK_RXQ_DESC_NUM)<<BIT_SHIFT_RXQ_DESC_NUM)


//4 #define REG_VOQ_TXBD_NUM            0x0384  // 2 Bytes
#define BIT_VOQ_FLAG                                BIT(14)

#define BIT_SHIFT_VOQ_DESC_MODE                    12
#define BIT_MASK_VOQ_DESC_MODE                     0x3
#define BIT_MAX_VOQ_DESC_MODE(x)                   (((x) & BIT_MASK_VOQ_DESC_MODE)<<BIT_SHIFT_VOQ_DESC_MODE)

#define BIT_SHIFT_VOQ_DESC_NUM                      0
#define BIT_MASK_VOQ_DESC_NUM                       0xFFF
#define BIT_MAX_VOQ_DESC_NUM(x)                     (((x) & BIT_MASK_VOQ_DESC_NUM)<<BIT_SHIFT_VOQ_DESC_NUM)


//4 #define REG_VIQ_TXBD_NUM            0x0386  // 2 Bytes
#define BIT_VIQ_FLAG                                BIT(14)

#define BIT_SHIFT_VIQ_DESC_MODE                    12
#define BIT_MASK_VIQ_DESC_MODE                     0x3
#define BIT_MAX_VIQ_DESC_MODE(x)                   (((x) & BIT_MASK_VIQ_DESC_MODE)<<BIT_SHIFT_VIQ_DESC_MODE)

#define BIT_SHIFT_VIQ_DESC_NUM                      0
#define BIT_MASK_VIQ_DESC_NUM                       0xFFF
#define BIT_MAX_VIQ_DESC_NUM(x)                     (((x) & BIT_MASK_VIQ_DESC_NUM)<<BIT_SHIFT_VIQ_DESC_NUM)


//4 #define REG_BEQ_TXBD_NUM            0x0388  // 2 Bytes
#define BIT_BEQ_FLAG                                BIT(14)

#define BIT_SHIFT_BEQ_DESC_MODE                    12
#define BIT_MASK_BEQ_DESC_MODE                     0x3
#define BIT_MAX_BEQ_DESC_MODE(x)                   (((x) & BIT_MASK_BEQ_DESC_MODE)<<BIT_SHIFT_BEQ_DESC_MODE)

#define BIT_SHIFT_BEQ_DESC_NUM                      0
#define BIT_MASK_BEQ_DESC_NUM                       0xFFF
#define BIT_MAX_BEQ_DESC_NUM(x)                     (((x) & BIT_MASK_BEQ_DESC_NUM)<<BIT_SHIFT_BEQ_DESC_NUM)



//4 #define REG_BKQ_TXBD_NUM            0x038A  // 2 Bytes
#define BIT_BKQ_FLAG                                BIT(14)

#define BIT_SHIFT_BKQ_DESC_MODE                    12
#define BIT_MASK_BKQ_DESC_MODE                     0x3
#define BIT_MAX_BKQ_DESC_MODE(x)                   (((x) & BIT_MASK_BKQ_DESC_MODE)<<BIT_SHIFT_BKQ_DESC_MODE)

#define BIT_SHIFT_BKQ_DESC_NUM                      0
#define BIT_MASK_BKQ_DESC_NUM                       0xFFF
#define BIT_MAX_BKQ_DESC_NUM(x)                     (((x) & BIT_MASK_BKQ_DESC_NUM)<<BIT_SHIFT_BKQ_DESC_NUM)


//4 #define REG_HI0Q_TXBD_NUM            0x038C  // 2 Bytes
#define BIT_HI0Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI0Q_DESC_MODE                    12
#define BIT_MASK_HI0Q_DESC_MODE                     0x3
#define BIT_MAX_HI0Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI0Q_DESC_MODE)<<BIT_SHIFT_HI0Q_DESC_MODE)

#define BIT_SHIFT_HI0Q_DESC_NUM                      0
#define BIT_MASK_HI0Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI0Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI0Q_DESC_NUM)<<BIT_SHIFT_HI0Q_DESC_NUM)


//4 #define REG_HI1Q_TXBD_NUM            0x038E  // 2 Bytes
#define BIT_HI1Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI1Q_DESC_MODE                    12
#define BIT_MASK_HI1Q_DESC_MODE                     0x3
#define BIT_MAX_HI1Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI1Q_DESC_MODE)<<BIT_SHIFT_HI1Q_DESC_MODE)

#define BIT_SHIFT_HI1Q_DESC_NUM                      0
#define BIT_MASK_HI1Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI1Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI1Q_DESC_NUM)<<BIT_SHIFT_HI1Q_DESC_NUM)


//4 #define REG_HI2Q_TXBD_NUM            0x0390  // 2 Bytes
#define BIT_HI2Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI2Q_DESC_MODE                    12
#define BIT_MASK_HI2Q_DESC_MODE                     0x3
#define BIT_MAX_HI2Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI2Q_DESC_MODE)<<BIT_SHIFT_HI2Q_DESC_MODE)


#define BIT_SHIFT_HI2Q_DESC_NUM                      0
#define BIT_MASK_HI2Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI2Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI2Q_DESC_NUM)<<BIT_SHIFT_HI2Q_DESC_NUM)


//4 #define REG_HI3Q_TXBD_NUM            0x0392  // 2 Bytes
#define BIT_HI3Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI3Q_DESC_MODE                    12
#define BIT_MASK_HI3Q_DESC_MODE                     0x3
#define BIT_MAX_HI3Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI3Q_DESC_MODE)<<BIT_SHIFT_HI3Q_DESC_MODE)

#define BIT_SHIFT_HI3Q_DESC_NUM                      0
#define BIT_MASK_HI3Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI3Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI3Q_DESC_NUM)<<BIT_SHIFT_HI3Q_DESC_NUM)


//4 #define REG_HI4Q_TXBD_NUM            0x0394  // 2 Bytes
#define BIT_HI4Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI4Q_DESC_MODE                    12
#define BIT_MASK_HI4Q_DESC_MODE                     0x3
#define BIT_MAX_HI4Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI4Q_DESC_MODE)<<BIT_SHIFT_HI4Q_DESC_MODE)

#define BIT_SHIFT_HI4Q_DESC_NUM                      0
#define BIT_MASK_HI4Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI4Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI4Q_DESC_NUM)<<BIT_SHIFT_HI4Q_DESC_NUM)


//4 #define REG_HI5Q_TXBD_NUM            0x0396  // 2 Bytes
#define BIT_HI5Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI5Q_DESC_MODE                    12
#define BIT_MASK_HI5Q_DESC_MODE                     0x3
#define BIT_MAX_HI5Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI5Q_DESC_MODE)<<BIT_SHIFT_HI5Q_DESC_MODE)

#define BIT_SHIFT_HI5Q_DESC_NUM                      0
#define BIT_MASK_HI5Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI5Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI5Q_DESC_NUM)<<BIT_SHIFT_HI5Q_DESC_NUM)


//4 #define REG_HI6Q_TXBD_NUM            0x0398  // 2 Bytes
#define BIT_HI6Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI6Q_DESC_MODE                    12
#define BIT_MASK_HI6Q_DESC_MODE                     0x3
#define BIT_MAX_HI6Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI6Q_DESC_MODE)<<BIT_SHIFT_HI6Q_DESC_MODE)

#define BIT_SHIFT_HI6Q_DESC_NUM                      0
#define BIT_MASK_HI6Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI6Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI6Q_DESC_NUM)<<BIT_SHIFT_HI6Q_DESC_NUM)


//4 #define REG_HI7Q_TXBD_NUM            0x039A  // 2 Bytes
#define BIT_HI7Q_FLAG                                BIT(14)

#define BIT_SHIFT_HI7Q_DESC_MODE                    12
#define BIT_MASK_HI7Q_DESC_MODE                     0x3
#define BIT_MAX_HI7Q_DESC_MODE(x)                   (((x) & BIT_MASK_HI7Q_DESC_MODE)<<BIT_SHIFT_HI7Q_DESC_MODE)

#define BIT_SHIFT_HI7Q_DESC_NUM                      0
#define BIT_MASK_HI7Q_DESC_NUM                       0xFFF
#define BIT_MAX_HI7Q_DESC_NUM(x)                     (((x) & BIT_MASK_HI7Q_DESC_NUM)<<BIT_SHIFT_HI7Q_DESC_NUM)


//4 #define REG_TSFTIMER_HCI            0x039C  // 4 Bytes
#define BIT_SHIFT_TSFT2_HCI                           16
#define BIT_MASK_TSFT2_HCI                            0xFFFF
#define BIT_MAX_TSFT2_HCI(x)                         (((x) & BIT_MASK_TSFT2_HCI)<<BIT_SHIFT_TSFT2_HCI)

#define BIT_SHIFT_TSFT1_HCI                           0
#define BIT_MASK_TSFT1_HCI                            0xFFFF
#define BIT_MAX_TSFT1_HCI(x)                         (((x) & BIT_MASK_TSFT1_HCI)<<BIT_SHIFT_TSFT1_HCI)


//4 #define REG_BD_RWPTR_CLR            0x039C  // 4 Bytes
#define BIT_CLR_HI7Q_HW_IDX                             BIT(29)
#define BIT_CLR_HI6Q_HW_IDX                             BIT(28)
#define BIT_CLR_HI5Q_HW_IDX                             BIT(27)
#define BIT_CLR_HI4Q_HW_IDX                             BIT(26)
#define BIT_CLR_HI3Q_HW_IDX                             BIT(25)
#define BIT_CLR_HI2Q_HW_IDX                             BIT(24)
#define BIT_CLR_HI1Q_HW_IDX                             BIT(23)
#define BIT_CLR_HI0Q_HW_IDX                             BIT(22)
#define BIT_CLR_BKQ_HW_IDX                              BIT(21)
#define BIT_CLR_BEQ_HW_IDX                              BIT(20)
#define BIT_CLR_VIQ_HW_IDX                              BIT(19)
#define BIT_CLR_VOQ_HW_IDX                              BIT(18)
#define BIT_CLR_MGTQ_HW_IDX                             BIT(17)
#define BIT_CLR_RXQ_HW_IDX                              BIT(16)

#define BIT_SRST_TX                                     BIT(15)
#define BIT_SRST_RX                                     BIT(14)

#define BIT_CLR_HI7Q_HOST_IDX                           BIT(13)
#define BIT_CLR_HI6Q_HOST_IDX                           BIT(12)
#define BIT_CLR_HI5Q_HOST_IDX                           BIT(11)
#define BIT_CLR_HI4Q_HOST_IDX                           BIT(10)
#define BIT_CLR_HI3Q_HOST_IDX                           BIT(9)
#define BIT_CLR_HI2Q_HOST_IDX                           BIT(8)
#define BIT_CLR_HI1Q_HOST_IDX                           BIT(7)
#define BIT_CLR_HI0Q_HOST_IDX                           BIT(6)
#define BIT_CLR_BKQ_HOST_IDX                            BIT(5)
#define BIT_CLR_BEQ_HOST_IDX                            BIT(4)
#define BIT_CLR_VIQ_HOST_IDX                            BIT(3)
#define BIT_CLR_VOQ_HOST_IDX                            BIT(2)
#define BIT_CLR_MGTQ_HOST_IDX                           BIT(1)
#define BIT_CLR_RXQ_HOST_IDX                            BIT(0)


//4 #define REG_VOQ_TXBD_IDX            0x03A0  // 4 Bytes
//4 #define REG_VIQ_TXBD_IDX            0x03A4  // 4 Bytes
//4 #define REG_BEQ_TXBD_IDX            0x03A8  // 4 Bytes
//4 #define REG_BKQ_TXBD_IDX            0x03AC  // 4 Bytes
//4 #define REG_MGQ_TXBD_IDX            0x03B0  // 4 Bytes
//4 #define REG_RXQ_RXBD_IDX            0x03B4  // 4 Bytes
//4 #define REG_HI0Q_TXBD_IDX           0x03B8  // 4 Bytes
//4 #define REG_HI1Q_TXBD_IDX           0x03BC  // 4 Bytes
//4 #define REG_HI2Q_TXBD_IDX           0x03C0  // 4 Bytes
//4 #define REG_HI3Q_TXBD_IDX           0x03C4  // 4 Bytes
//4 #define REG_HI4Q_TXBD_IDX           0x03C8  // 4 Bytes
//4 #define REG_HI5Q_TXBD_IDX           0x03CC  // 4 Bytes
//4 #define REG_HI6Q_TXBD_IDX           0x03D0  // 4 Bytes
//4 #define REG_HI7Q_TXBD_IDX           0x03D4  // 4 Bytes


//4 #define REG_PCIE_HRPWM1_V1          0x03D9  // 1 Bytes
//4 #define REG_PCIE_HCPWM1_V1          0x03DA  // 1 Bytes


#define REG_LX_CTRL2                0x03DB  // 1 Bytes
#define BIT_SHIFT_HPS_CLKR                          4
#define BIT_MASK_HPS_CLKR                           0x3
#define BIT_HPS_CLKR(x)                             (((x) & BIT_MASK_HPS_CLKR)<<BIT_SHIFT_HPS_CLKR)
#define BIT_LX_INT                                  BIT(3)

//4 #define REG_PCIE_HRPWM2_V1          0x03DC  // 2 Bytes
//4 #define REG_PCIE_HCPWM2_V1          0x03DE  // 2 Bytes
//4 #define REG_PCIE_H2C_MSG_V1         0x03E0  // 4 Bytes
//4 #define REG_PCIE_C2H_MSG_V1         0x03E4  // 4 Bytes

#define REG_LX_DMA_ISR              0x03E8  // 4 Bytes
#define BIT_BCN7DOK         BIT(23)
#define BIT_BCN6DOK         BIT(22)
#define BIT_BCN5DOK         BIT(21)
#define BIT_BCN4DOK         BIT(20)
#define BIT_BCN3DOK         BIT(19)
#define BIT_BCN2DOK         BIT(18)
#define BIT_BCN1DOK         BIT(17)
#define BIT_BCN0DOK         BIT(16)

#define BIT_M7DOK           BIT(15)
#define BIT_M6DOK           BIT(14)
#define BIT_M5DOK           BIT(13)
#define BIT_M4DOK           BIT(12)
#define BIT_M3DOK           BIT(11)
#define BIT_M2DOK           BIT(10)
#define BIT_M1DOK           BIT(9)
#define BIT_M0DOK           BIT(8)

#define BIT_MGTQDOK         BIT(6)
#define BIT_BKQDOK          BIT(5)
#define BIT_BEQDOK          BIT(4)
#define BIT_VIQDOK          BIT(3)
#define BIT_VOQDOK          BIT(2)
#define BIT_RDU             BIT(1)
#define BIT_RXDOK           BIT(0)

//4 #define REG_LX_DMA_IMR              0x03EC  // 4 Bytes
#define BIT_BCN7DOKM        BIT(23)
#define BIT_BCN6DOKM        BIT(22)
#define BIT_BCN5DOKM        BIT(21)
#define BIT_BCN4DOKM        BIT(20)
#define BIT_BCN3DOKM        BIT(19)
#define BIT_BCN2DOKM        BIT(18)
#define BIT_BCN1DOKM        BIT(17)
#define BIT_BCN0DOKM        BIT(16)

#define BIT_M7DOKM          BIT(15)
#define BIT_M6DOKM          BIT(14)
#define BIT_M5DOKM          BIT(13)
#define BIT_M4DOKM          BIT(12)
#define BIT_M3DOKM          BIT(11)
#define BIT_M2DOKM          BIT(10)
#define BIT_M1DOKM          BIT(9)
#define BIT_M0DOKM          BIT(8)

#define BIT_MGTQDOKM        BIT(6)
#define BIT_BKQDOKM         BIT(5)
#define BIT_BEQDOKM         BIT(4)
#define BIT_VIQDOKM         BIT(3)
#define BIT_VOQDOKM         BIT(2)
#define BIT_RDUM            BIT(1)
#define BIT_RXDOKM          BIT(0)

//4 #define REG_LX_DMA_DBG              0x03F0  // 4 Bytes
#define BIT_RX_OVER_RD_ERR              BIT(20)
#define BIT_RXDMA_STUCK                 BIT(19)

#define BIT_SHIFT_RX_STATE              16
#define BIT_MASK_RX_STATE               0x7
#define BIT_RX_STATE(x)                 (((x) & BIT_MASK_RX_STATE)<<BIT_SHIFT_RX_STATE)

#define BIT_TDE_NO_IDLE                 BIT(15)
#define BIT_TXDMA_STUCK                 BIT(14)
#define BIT_TDE_FULL_ERR                BIT(13)
#define BIT_HD_SIZE_ERR                 BIT(12)

#define BIT_SHIFT_TX_STATE              8
#define BIT_MASK_TX_STATE               0xF
#define BIT_TX_STATE(x)                 (((x) & BIT_MASK_TX_STATE)<<BIT_SHIFT_TX_STATE)

#define BIT_MST_BUSY                    BIT(3)
#define BIT_SLV_BUSY                    BIT(2)
#define BIT_RXDES_UNAVAIL               BIT(1)
#define BIT_EN_DBG_STUCK                BIT(0)



//4 #define REG_PCIE_MIX_CFG            0x03F8  // 4 Bytes
//4 #define REG_BUS_MIX_CFG             0x03F8  // 4 Bytes
#define BIT_SHIFT_WATCH_DOG_RECORD              10
#define BIT_MASK_WATCH_DOG_RECORD               0x3FFF
#define BIT_WATCH_DOG_RECORD(x)                 (((x) & BIT_MASK_WATCH_DOG_RECORD)<<BIT_SHIFT_WATCH_DOG_RECORD)

#define BIT_R_IO_TIMEOUT_FLAG                   BIT(9)
#define BIT_EN_WATCH_DOG                        BIT(8)



#define REG_BUS_MIX_CFG             0x03F8  // 4 Bytes

//-----------------------------------------------------
//
//  0x0700h ~ 0x07FFh
//
//-----------------------------------------------------
//2 REG_BT_STAT_CTRL (0x0778)
#define BIT_RTK_MODE_EN			BIT(0)

//2 REG_BT_COEX_ENHANCED_INTR_CTRL (0x076E)
#define BIT_WL_ACT_MASK_EN		BIT(1)
#define BIT_WL_ACT_PINMUX		BIT(3)


//2 REG_BT_TDMA_TIME (0x0790)
#define BIT_BT_REPORT_SAMPLE_RATE 		(BIT(5)|BIT(4)|BIT(3)|BIT(2)|BIT(1)|BIT(0))



//-----------------------------------------------------
//
//	0xFE00h ~ 0xFE55h	USB Configuration
//
//-----------------------------------------------------

//2 USB Information (0xFE17)
#define USB_IS_HIGH_SPEED			0
#define USB_IS_FULL_SPEED			1
#define USB_SPEED_MASK				BIT(5)

#define USB_NORMAL_SIE_EP_MASK	0xF
#define USB_NORMAL_SIE_EP_SHIFT	4

//2 Special Option
#define USB_AGG_EN				BIT(3)

// 0; Use interrupt endpoint to upload interrupt pkt
// 1; Use bulk endpoint to upload interrupt pkt,
#define INT_BULK_SEL			BIT(4)

//2REG_C2HEVT_CLEAR
#define C2H_EVT_HOST_CLOSE		0x00	// Set by driver and notify FW that the driver has read the C2H command message
#define C2H_EVT_FW_CLOSE		0xFF	// Set by FW indicating that FW had set the C2H command message and it's not yet read by driver.


//2REG_MULTI_FUNC_CTRL(For RTL8723 Only)
#define WL_HWPDN_EN			BIT0	// Enable GPIO[9] as WiFi HW PDn source
#define WL_HWPDN_SL			BIT1	// WiFi HW PDn polarity control
#define WL_FUNC_EN				BIT2	// WiFi function enable
#define WL_HWROF_EN			BIT3	// Enable GPIO[9] as WiFi RF HW PDn source
#define BT_HWPDN_EN			BIT16	// Enable GPIO[11] as BT HW PDn source
#define BT_HWPDN_SL			BIT17	// BT HW PDn polarity control
#define BT_FUNC_EN				BIT18	// BT function enable
#define BT_HWROF_EN			BIT19	// Enable GPIO[11] as BT/GPS RF HW PDn source
#define GPS_HWPDN_EN			BIT20	// Enable GPIO[10] as GPS HW PDn source
#define GPS_HWPDN_SL			BIT21	// GPS HW PDn polarity control
#define GPS_FUNC_EN			BIT22	// GPS function enable

//3 REG_LIFECTRL_CTRL
#define HAL92C_EN_PKT_LIFE_TIME_BK		BIT3
#define HAL92C_EN_PKT_LIFE_TIME_BE		BIT2
#define HAL92C_EN_PKT_LIFE_TIME_VI		BIT1
#define HAL92C_EN_PKT_LIFE_TIME_VO		BIT0

#define HAL92C_MSDU_LIFE_TIME_UNIT		128	// in us, said by Tim.

//2 8192D PartNo.
#define PARTNO_92D_NIC							(BIT7|BIT6)
#define PARTNO_92D_NIC_REMARK 				(BIT5|BIT4)
#define PARTNO_SINGLE_BAND_VS  				BIT3
#define PARTNO_SINGLE_BAND_VS_REMARK 		BIT1
#define PARTNO_CONCURRENT_BAND_VC 			(BIT3|BIT2)
#define PARTNO_CONCURRENT_BAND_VC_REMARK 	(BIT1|BIT0)

//========================================================
// General definitions
//========================================================

#define LAST_ENTRY_OF_TX_PKT_BUFFER_8188E		176
#define LAST_ENTRY_OF_TX_PKT_BUFFER_8812			255
#define LAST_ENTRY_OF_TX_PKT_BUFFER_8723B		255
#define LAST_ENTRY_OF_TX_PKT_BUFFER_8192C		255
#define LAST_ENTRY_OF_TX_PKT_BUFFER_DUAL_MAC	127
#define LAST_ENTRY_OF_TX_PKT_BUFFER_8188F			255
#define LAST_ENTRY_OF_TX_PKT_BUFFER_8723D		255

#define POLLING_LLT_THRESHOLD				20
#define POLLING_READY_TIMEOUT_COUNT		1000

// GPIO BIT
#define HAL_8192C_HW_GPIO_WPS_BIT	BIT2

#endif //__HAL_COMMON_H__

