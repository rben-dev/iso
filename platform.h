#ifndef __PLATFORTM_H__
#define __PLATFORTM_H__

#include "types.h"

//#define REG_ADDR(addr)                      ((volatile uint32_t *)(addr))
//#include "soc-usart-regs.h"
//#include "gpio.h"

/* Bit 0 PE: Parity error */
#define USART_SR_PE_Pos         0
#define USART_SR_PE_Msk         ((uint32_t)1 << USART_SR_PE_Pos)
#define USART_SR_PE_OK          ((uint32_t)0 << USART_SR_PE_Pos)
#define USART_SR_PE_ERROR       ((uint32_t)1 << USART_SR_PE_Pos)

/* Bit 1 FE: Framing error */
#define USART_SR_FE_Pos         1
#define USART_SR_FE_Msk         ((uint32_t)1 << USART_SR_FE_Pos)
#define USART_SR_FE_OK         ((uint32_t)0 << USART_SR_FE_Pos)
#define USART_SR_FE_ERROR      ((uint32_t)1 << USART_SR_FE_Pos)

/* Bit 6 TC: Transmission complete */
#define USART_SR_TC_Pos         6
#define USART_SR_TC_Msk         ((uint32_t)1 << USART_SR_TC_Pos)
#define USART_SR_TC_RUNNING    ((uint32_t)0 << USART_SR_TC_Pos)
#define USART_SR_TC_COMPLETE   ((uint32_t)1 << USART_SR_TC_Pos)

#define USART_SR_RXNE_Pos               5
#define USART_SR_RXNE_Msk               ((uint32_t)1 << USART_SR_RXNE_Pos)
#define USART_SR_RXNE_EMPTY     ((uint32_t)0 << USART_SR_RXNE_Pos)
#define USART_SR_RXNE_RDY               ((uint32_t)1 << USART_SR_RXNE_Pos)

/***** Status register *****/
/* Bit 0 PE: Parity error */
#define USART_SR_PE_Pos		0
#define USART_SR_PE_Msk		((uint32_t)1 << USART_SR_PE_Pos)
#define USART_SR_PE_OK  	((uint32_t)0 << USART_SR_PE_Pos)
#define USART_SR_PE_ERROR      	((uint32_t)1 << USART_SR_PE_Pos)

/* Bit 1 FE: Framing error */
#define USART_SR_FE_Pos		1
#define USART_SR_FE_Msk		((uint32_t)1 << USART_SR_FE_Pos)
#define USART_SR_FE_OK         ((uint32_t)0 << USART_SR_FE_Pos)
#define USART_SR_FE_ERROR      ((uint32_t)1 << USART_SR_FE_Pos)

/* Bit 2 NF: Noise detected flag */
#define USART_SR_NF_Pos		2
#define USART_SR_NF_Msk		((uint32_t)1 << USART_SR_NF_Pos)
#define USART_SR_NF_OK         ((uint32_t)0 << USART_SR_NF_Pos)
#define USART_SR_NF_ERROR      ((uint32_t)1 << USART_SR_NF_Pos)

/* Bit 3 ORE: Overrun error */
#define USART_SR_OVERRUN_Pos	3
#define USART_SR_OVERRUN_Msk	((uint32_t)1 << USART_SR_OVERRUN_Pos)
#define USART_SR_OVERRUN_OK    ((uint32_t)0 << USART_SR_OVERRUN_Pos)
#define USART_SR_OVERRUN_ERROR ((uint32_t)1 << USART_SR_OVERRUN_Pos)

/* Bit 4 IDLE: IDLE line detected */
#define USART_SR_IDLE_Pos		4
#define USART_SR_IDLE_Msk		((uint32_t)1 << USART_SR_IDLE_Pos)
#define USART_SR_IDLE_NO_IDLE  ((uint32_t)0 << USART_SR_IDLE_Pos)
#define USART_SR_IDLE_IDLE     ((uint32_t)1 << USART_SR_IDLE_Pos)

#define USART_SR_RXNE_Pos		5
#define USART_SR_RXNE_Msk		((uint32_t)1 << USART_SR_RXNE_Pos)
#define USART_SR_RXNE_EMPTY	((uint32_t)0 << USART_SR_RXNE_Pos)
#define USART_SR_RXNE_RDY		((uint32_t)1 << USART_SR_RXNE_Pos)

/* Bit 6 TC: Transmission complete */
#define USART_SR_TC_Pos		6
#define USART_SR_TC_Msk		((uint32_t)1 << USART_SR_TC_Pos)
#define USART_SR_TC_RUNNING    ((uint32_t)0 << USART_SR_TC_Pos)
#define USART_SR_TC_COMPLETE   ((uint32_t)1 << USART_SR_TC_Pos)

/* Bit 6 TC: Transmission complete */
#define USART_SR_TXE_Pos		7
#define USART_SR_TXE_Msk		((uint32_t)1 << USART_SR_TXE_Pos)
#define USART_SR_TXE_DATA_NOT_TRANSFERED   ((uint32_t)0 << USART_SR_TXE_Pos)
#define USART_SR_TXE_DATA_TRANSFERED       ((uint32_t)1 << USART_SR_TXE_Pos)

/* Bit 8 LBD: LIN break detection flag */
#define USART_SR_LIN_Pos	   8
#define USART_SR_LIN_Msk	   ((uint32_t)1 << USART_SR_LIN_Pos)
#define USART_SR_LIN_NO_LINE_BREAK ((uint32_t)0 << USART_SR_LIN_Pos)
#define USART_SR_LIN_LINE_BREAK    ((uint32_t)1 << USART_SR_LIN_Pos)

/* Bit 9 CTS: CTS flag */
#define USART_SR_CTS_Pos	9
#define USART_SR_CTS_Msk	((uint32_t)1 << USART_SR_CTS_Pos)
#define USART_SR_CTS_NO_CHANGE ((uint32_t)0 << USART_SR_CTS_Pos)
#define USART_SR_CTS_CHANGED   ((uint32_t)1 << USART_SR_CTS_Pos)

/***** Data register *****/
/* Bits 8:0 DR[8:0]: Data value */
#define USART_DR_DR_Pos		0
#define USART_DR_DR_Msk		((uint32_t)0xff << USART_DR_DR_Pos)

/* Baud rate register */
/* Bits 3:0 DIV_Fraction[3:0]: fraction of USARTDIV */
#define USART_BRR_FRACTION_Pos	0
#define USART_BRR_FRACTION_Msk	((uint32_t)0xf << USART_BRR_FRACTION_Pos)

/* Bits 15:4 DIV_Mantissa[11:0]: mantissa of USARTDIV */
#define USART_BRR_MANTISSA_Pos	4
#define USART_BRR_MANTISSA_Msk	((uint32_t)0xfff << USART_BRR_MANTISSA_Pos)

/***** Control register 1 *****/
/* Bit 0 SBK: Send break */
#define USART_CR1_SBK_Pos      0
#define USART_CR1_SBK_Msk      ((uint32_t)1 << USART_CR1_SBK_Pos)

/* Bit 1 RWU: Receiver wakeup */
#define USART_CR1_RWU_Pos      1
#define USART_CR1_RWU_Msk      ((uint32_t)1 << USART_CR1_RWU_Pos)

/* Bit 2 RE: Receiver enable */
#define USART_CR1_RE_Pos	2
#define USART_CR1_RE_Msk	((uint32_t)1 << USART_CR1_RE_Pos)
#define USART_CR1_RE_EN		((uint32_t)1 << USART_CR1_RE_Pos)
#define USART_CR1_RE_DIS	((uint32_t)0 << USART_CR1_RE_Pos)

/* Bit 3 TE: Transmitter enable */
#define USART_CR1_TE_Pos	3
#define USART_CR1_TE_Msk	((uint32_t)1 << USART_CR1_TE_Pos)
#define USART_CR1_TE_EN		((uint32_t)1 << USART_CR1_TE_Pos)
#define USART_CR1_TE_DIS	((uint32_t)0 << USART_CR1_TE_Pos)

/* Bit 4 IDLEIE: IDLE interrupt enable */
#define USART_CR1_IDLEIE_Pos	5
#define USART_CR1_IDLEIE_Msk	((uint32_t)1 << USART_CR1_IDLEIE_Pos)

/* Bit 5 RXNEIE: RXNE interrupt enable */
#define USART_CR1_RXNEIE_Pos	5
#define USART_CR1_RXNEIE_Msk	((uint32_t)1 << USART_CR1_RXNEIE_Pos)
#define USART_CR1_RXNEIE_EN     ((uint32_t)1 << USART_CR1_RXNEIE_Pos)
#define USART_CR1_RXNEIE_DIS    ((uint32_t)0 << USART_CR1_RXNEIE_Pos)

/* Bit 6 TCIE: Transmission complete interrupt enable */
#define USART_CR1_TCIE_Pos     6
#define USART_CR1_TCIE_Msk     ((uint32_t)1 << USART_CR1_TCIE_Pos)
#define USART_CR1_TCIE_DIS    ((uint32_t)0 << USART_CR1_TCIE_Pos)
#define USART_CR1_TCIE_EN     ((uint32_t)1 << USART_CR1_TCIE_Pos)

/* Bit 7 TXEIE: TXE interrupt enable */
#define USART_CR1_TXEIE_Pos    7
#define USART_CR1_TXEIE_Msk    ((uint32_t)1 << USART_CR1_TXEIE_Pos)
#define USART_CR1_TXEIE_DIS    ((uint32_t)0 << USART_CR1_TXEIE_Pos)
#define USART_CR1_TXEIE_EN     ((uint32_t)1 << USART_CR1_TXEIE_Pos)

/* Bit 8 PEIE: PE interrupt enable */
#define USART_CR1_PEIE_Pos     8
#define USART_CR1_PEIE_Msk     ((uint32_t)1 << USART_CR1_PEIE_Pos)
#define USART_CR1_PEIE_DIS     ((uint32_t)0 << USART_CR1_PEIE_Pos)
#define USART_CR1_PEIE_EN      ((uint32_t)1 << USART_CR1_PEIE_Pos)

/* Bit 9 PS: Parity selection */
#define USART_CR1_PS_Pos       9
#define USART_CR1_PS_Msk       ((uint32_t)1 << USART_CR1_PS_Pos)
#define USART_CR1_PS_EVEN      ((uint32_t)0 << USART_CR1_PS_Pos)
#define USART_CR1_PS_ODD       ((uint32_t)1 << USART_CR1_PS_Pos)

/* Bit 10 PCE: Parity control enable */
#define USART_CR1_PCE_Pos      10
#define USART_CR1_PCE_Msk      ((uint32_t)1 << USART_CR1_PCE_Pos)
#define USART_CR1_PCE_EN       ((uint32_t)1 << USART_CR1_PCE_Pos)
#define USART_CR1_PCE_DIS      ((uint32_t)0 << USART_CR1_PCE_Pos)

/* Bit 11 WAKE: Wakeup method */
#define USART_CR1_WAKE_Pos      11
#define USART_CR1_WAKE_Msk      ((uint32_t)1 << USART_CR1_WAKE_Pos)

/* Bit 12 M: Word length */
#define USART_CR1_M_Pos		12
#define USART_CR1_M_Msk		((uint32_t)1 << USART_CR1_M_Pos)
#define USART_CR1_M_8		((uint32_t)0 << USART_CR1_M_Pos)
#define USART_CR1_M_9		((uint32_t)1 << USART_CR1_M_Pos)

/* Bit 13 UE: USART enable */
#define USART_CR1_UE_Pos	13
#define USART_CR1_UE_Msk	((uint32_t)1 << USART_CR1_UE_Pos)
#define USART_CR1_UE_DIS       	((uint32_t)0 << USART_CR1_UE_Pos)
#define USART_CR1_UE_EN        	((uint32_t)1 << USART_CR1_UE_Pos)

/* Bit 15 OVER8: Over sampling */
#define USART_CR1_OVER8_Pos    	15
#define USART_CR1_OVER8_Msk    	((uint32_t)1 << USART_CR1_OVER8_Pos)
#define USART_CR1_OVER_S_8   	((uint32_t)0 << USART_CR1_OVER8_Pos)
#define USART_CR1_OVER_S_16  	((uint32_t)1 << USART_CR1_OVER8_Pos)

/***** Control register 2 *****/
/* Bit 14 LINEN: LIN mode enable */
#define USART_CR2_LINEN_Pos      14
#define USART_CR2_LINEN_Msk      ((uint32_t)1 << USART_CR2_LINEN_Pos)
#define USART_CR2_LINEN_DIS      ((uint32_t)0 << USART_CR2_LINEN_Pos)
#define USART_CR2_LINEN_EN       ((uint32_t)1 << USART_CR2_LINEN_Pos)

/* Bits 13:12 STOP: STOP bits */
#define USART_CR2_STOP_Pos	12
#define USART_CR2_STOP_Msk	((uint32_t)3 << USART_CR2_STOP_Pos)
#define USART_CR2_STOP_1BIT	0   /* 1 Stop bit     */
#define USART_CR2_STOP_0_5BITS	1   /* 0.5 Stop bit   */
#define USART_CR2_STOP_2BITS	2   /* 2 Stop bit     */
#define USART_CR2_STOP_1_5BITS	3   /* 1.5 Stop bit   */

/* Bit 11 CLKEN: Clock enable */
#define USART_CR2_CLKEN_Pos     11
#define USART_CR2_CLKEN_Msk     ((uint32_t)1 << USART_CR2_CLKEN_Pos)
#define USART_CR2_CLKEN_PIN_EN  ((uint32_t)1 << USART_CR2_CLKEN_Pos)
#define USART_CR2_CLKEN_PIN_DIS ((uint32_t)0 << USART_CR2_CLKEN_Pos)

/* Bit 10 CPOL: Clock polarity */
#define USART_CR2_CPOL_Pos  	10
#define USART_CR2_CPOL_Msk  	((uint32_t)1 << USART_CR2_CPOL_Pos)
#define USART_CR2_CPOL_EN  	((uint32_t)1 << USART_CR2_CPOL_Pos)
#define USART_CR2_CPOL_DIS  	((uint32_t)0 << USART_CR2_CPOL_Pos)

/* Bit 9 CPHA: Clock phase */
#define USART_CR2_CPHA_Pos  	9
#define USART_CR2_CPHA_Msk  	((uint32_t)1 << USART_CR2_CPHA_Pos)
#define USART_CR2_CPHA_EN  	((uint32_t)1 << USART_CR2_CPHA_Pos)
#define USART_CR2_CPHA_DIS 	((uint32_t)0 << USART_CR2_CPHA_Pos)

/* Bit 8 LBCL: Last bit clock pulse */
#define USART_CR2_LBCL_Pos  	8
#define USART_CR2_LBCL_Msk  	((uint32_t)1 << USART_CR2_LBCL_Pos)
#define USART_CR2_LBCL_DIS  	((uint32_t)0 << USART_CR2_LBCL_Pos)
#define USART_CR2_LBCL_EN   	((uint32_t)1 << USART_CR2_LBCL_Pos)

/* Bit 6 LBDIE: LIN break detection interrupt enable */
#define USART_CR2_LBDIE_Pos 	6
#define USART_CR2_LBDIE_Msk 	((uint32_t)1 << USART_CR2_LBDIE_Pos)
#define USART_CR2_LBDIE_EN  	((uint32_t)1 << USART_CR2_LBDIE_Pos)    /* An interrupt is generated whenever LBD=1 in the USART_SR register */
#define USART_CR2_LBDIE_DIS 	((uint32_t)0 << USART_CR2_LBDIE_Pos)    /*  Interrupt is inhibited */

/* Bit 5 LBDL: lin break detection length */
#define USART_CR2_LBDL_Pos  	5
#define USART_CR2_LBDL_Msk  	((uint32_t)1 << USART_CR2_LBDL_Pos)
#define USART_CR2_LBDL_10   	((uint32_t)0 << USART_CR2_LBDL_Pos)
#define USART_CR2_LBDL_11   	((uint32_t)1 << USART_CR2_LBDL_Pos)

/* Bits 3:0 ADD[3:0]: Address of the USART node */
#define USART_CR2_ADD_Pos  	0
#define USART_CR2_ADD_Msk  	((uint32_t)4 << USART_CR2_ADD_Pos)

/***** Control register 3 ******/
/* Bit 11 ONEBIT: One sample bit method enable */
#define USART_CR3_ONEBIT_Pos   11
#define USART_CR3_ONEBIT_Msk   ((uint32_t)1 << USART_CR3_ONEBIT_Pos)
#define USART_CR3_ONEBIT_3_SPL_BIT ((uint32_t)0 << USART_CR3_ONEBIT_Pos)
#define USART_CR3_ONEBIT_1_SPL_BIT ((uint32_t)1 << USART_CR3_ONEBIT_Pos)

/* Bit 10 CTSIE: CTS interrupt enable */
#define USART_CR3_CTSIE_Pos    10
#define USART_CR3_CTSIE_Msk    ((uint32_t)1 << USART_CR3_CTSIE_Pos)
#define USART_CR3_CTSIE_DIS    ((uint32_t)0 << USART_CR3_CTSIE_Pos)
#define USART_CR3_CTSIE_EN     ((uint32_t)1 << USART_CR3_CTSIE_Pos)

/* Bit 9 CTSE: CTS enable */
/* Note: This bit is not available for UART4 & UART5. */
#define USART_CR3_CTSE_Pos     9
#define USART_CR3_CTSE_Msk     ((uint32_t)1 << USART_CR3_CTSE_Pos)
#define USART_CR3_CTSE_CTS_DIS ((uint32_t)0 << USART_CR3_CTSE_Pos)
#define USART_CR3_CTSE_CTS_EN  ((uint32_t)1 << USART_CR3_CTSE_Pos)

/* Bit 8 RTSE: RTS enable */
/* Note: This bit is not available for UART4 & UART5. */
#define USART_CR3_RTSE_Pos     8
#define USART_CR3_RTSE_Msk     ((uint32_t)1 << USART_CR3_RTSE_Pos)
#define USART_CR3_RTSE_RTS_DIS ((uint32_t)0 << USART_CR3_RTSE_Pos)
#define USART_CR3_RTSE_RTS_EN  ((uint32_t)1 << USART_CR3_RTSE_Pos)

/* Bit 7 DMAT: DMA enable transmitter */
#define USART_CR3_DMAT_Pos		7
#define USART_CR3_DMAT_Msk		((uint32_t)1 << USART_CR3_DMAT_Pos)
#define USART_CR3_DMAT_DIS		((uint32_t)0 << USART_CR3_DMAT_Pos)
#define USART_CR3_DMAT_EN		((uint32_t)1 << USART_CR3_DMAT_Pos)

/* Bit 6 DMAR: DMA enable receiver */
#define USART_CR3_DMAR_Pos		6
#define USART_CR3_DMAR_Msk		((uint32_t)1 << USART_CR3_DMAR_Pos)
#define USART_CR3_DMAR_DIS		((uint32_t)0 << USART_CR3_DMAR_Pos)
#define USART_CR3_DMAR_EN		((uint32_t)1 << USART_CR3_DMAR_Pos)

/* Bit 5 SCEN: Smartcard mode enable */
/* Note: This bit is not available for UART4 & UART5. */
#define USART_CR3_SCEN_Pos     5
#define USART_CR3_SCEN_Msk     ((uint32_t)1 << USART_CR3_SCEN_Pos)
#define USART_CR3_SCEN_DIS     ((uint32_t)0 << USART_CR3_SCEN_Pos)
#define USART_CR3_SCEN_EN      ((uint32_t)1 << USART_CR3_SCEN_Pos)

/* Bit 4 NACK: Smartcard NACK enable */
/* Note: This bit is not available for UART4 & UART5. */
#define USART_CR3_NACK_Pos     4
#define USART_CR3_NACK_Msk     ((uint32_t)1 << USART_CR3_NACK_Pos)
#define USART_CR3_NACK_DIS     ((uint32_t)0 << USART_CR3_NACK_Pos)
#define USART_CR3_NACK_EN      ((uint32_t)1 << USART_CR3_NACK_Pos)

/* Bit 3 HDSEL: Half-duplex selection */
#define USART_CR3_HDSEL_Pos    3
#define USART_CR3_HDSEL_Msk    ((uint32_t)1 << USART_CR3_HDSEL_Pos)
#define USART_CR3_HDSEL_DIS    ((uint32_t)0 << USART_CR3_HDSEL_Pos)
#define USART_CR3_HDSEL_EN     ((uint32_t)1 << USART_CR3_HDSEL_Pos)

/* Bit 2 IRLP: IrDA low-power */
#define USART_CR3_IRLP_Pos     2
#define USART_CR3_IRLP_Msk     ((uint32_t)1 << USART_CR3_IRLP_Pos)
#define USART_CR3_IRLP_NORMAL  ((uint32_t)0 << USART_CR3_IRLP_Pos)
#define USART_CR3_IRLP_LOW_POWER ((uint32_t)1 << USART_CR3_IRLP_Pos)

/* Bit 1 IREN: IrDA mode enable */
#define USART_CR3_IREN_Pos     1
#define USART_CR3_IREN_Msk     ((uint32_t)1 << USART_CR3_IREN_Pos)
#define USART_CR3_IREN_DIS     ((uint32_t)0 << USART_CR3_IREN_Pos)
#define USART_CR3_IREN_EN      ((uint32_t)1 << USART_CR3_IREN_Pos)

/* Bit 0 EIE: Error interrupt enable */
#define USART_CR3_EIE_Pos      0
#define USART_CR3_EIE_Msk      ((uint32_t)1 << USART_CR3_EIE_Pos)
#define USART_CR3_EIE_DIS      ((uint32_t)0 << USART_CR3_EIE_Pos)
#define USART_CR3_EIE_EN       ((uint32_t)1 << USART_CR3_EIE_Pos)

/***** Guard time and prescaler register (USART_GTPR) ******/
/* Bits 15:8 GT[7:0]: Guard time value */
#define USART_GTPR_GT_Pos   8
#define USART_GTPR_GT_Msk   ((uint32_t)(0xff) << USART_GTPR_GT_Pos)

/* Bits 7:0 PSC[7:0]: Prescaler value */
#define USART_GTPR_PSC_Pos   0
#define USART_GTPR_PSC_Msk   ((uint32_t)(0xff) << USART_GTPR_PSC_Pos)
/*
n IrDA Low-power mode:
PSC[7:0] = IrDA Low-Power Baud Rate
Used for programming the prescaler for dividing the system clock to achieve the low-power
frequency:
The source clock is divided by the value given in the register (8 significant bits):
00000000: Reserved - do not program this value
00000001: divides the source clock by 1
00000010: divides the source clock by 2
...
 */
#define USART_GTPR_PSC_IRDA_LOW_DIV1 		((uint32_t)(0x1) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_IRDA_LOW_DIV2 		((uint32_t)(0x2) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_IRDA_LOW_DIV4 		((uint32_t)(0x4) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_IRDA_LOW_DIV8		((uint32_t)(0x8) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_IRDA_LOW_DIV16		((uint32_t)(0x10) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_IRDA_LOW_DIV32		((uint32_t)(0x20) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_IRDA_LOW_DIV64		((uint32_t)(0x40) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_IRDA_LOW_DIV128		((uint32_t)(0x80) << USART_GTPR_PSC_Pos)
/*
In normal IrDA mode: PSC must be set to 00000001.
 */
#define USART_GTPR_PSC_IRDA_HIGH_DIV		((uint32_t)(0x1) << USART_GTPR_PSC_Pos)
/*
In smartcard mode:
PSC[4:0]: Prescaler value
Used for programming the prescaler for dividing the system clock to provide the smartcard
clock.
The value given in the register (5 significant bits) is multiplied by 2 to give the division factor
of the source clock frequency:
00000: Reserved - do not program this value
00001: divides the source clock by 2
00010: divides the source clock by 4
00011: divides the source clock by 6
...
 */
#define USART_GTPR_PSC_SMARTCARD_DIV2		((uint32_t)(0x1) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV4		((uint32_t)(0x2) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV6		((uint32_t)(0x3) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV8		((uint32_t)(0x4) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV10		((uint32_t)(0x5) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV12		((uint32_t)(0x6) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV14		((uint32_t)(0x7) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV16		((uint32_t)(0x8) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV18		((uint32_t)(0x8) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV20		((uint32_t)(0xa) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV22		((uint32_t)(0xb) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV24		((uint32_t)(0xc) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV26		((uint32_t)(0xd) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV28		((uint32_t)(0xe) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV30		((uint32_t)(0xf) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV32		((uint32_t)(0x10) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV34		((uint32_t)(0x11) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV36		((uint32_t)(0x12) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV38		((uint32_t)(0x13) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV40		((uint32_t)(0x14) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV42		((uint32_t)(0x15) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV44		((uint32_t)(0x16) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV46		((uint32_t)(0x17) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV48		((uint32_t)(0x18) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV50		((uint32_t)(0x19) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV52		((uint32_t)(0x1a) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV54		((uint32_t)(0x1b) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV56		((uint32_t)(0x1c) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV58		((uint32_t)(0x1d) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV60		((uint32_t)(0x1e) << USART_GTPR_PSC_Pos)
#define USART_GTPR_PSC_SMARTCARD_DIV62		((uint32_t)(0x1f) << USART_GTPR_PSC_Pos)


static inline uint32_t get_reg_value(uint32_t * reg, uint32_t mask, uint8_t pos){
    if ((mask == 0x00) || (pos > 31))
        return 0;

    return (uint32_t) (((*reg) & mask) >> pos);
}

#define get_reg(REG, BITS)              get_reg_value(REG, BITS##_Msk, BITS##_Pos)

static inline void mutex_init(volatile uint32_t *m){
	return;
}
static inline int mutex_trylock(volatile uint32_t *m){
	return 1;
}
static inline void mutex_lock(volatile uint32_t *m){
	return;
}
static inline void mutex_unlock(volatile uint32_t *m){
	return;
}


typedef void (*cb_usart_irq_handler_t) (uint32_t status, uint32_t data);
typedef char (*cb_usart_getc_t) (void);
typedef void (*cb_usart_putc_t) (char);

/* Defines the USART mode that we consider
 * [RB] TODO: to be completed with other USART modes if/when needed! (IrDA, LIN, ...)
 * For now, only the classical UART console mode and the SMARTCARD modes are
 * implemented.
 */
typedef enum {
  UART       = 0,
  SMARTCARD,
  CUSTOM
} usart_mode_t;

typedef enum {
  USART_SET_BAUDRATE       = 0b000000001,
  USART_SET_WORD_LENGTH    = 0b000000010,
  USART_SET_PARITY         = 0b000000100,
  USART_SET_STOP_BITS      = 0b000001000,
  USART_SET_HW_FLOW_CTRL   = 0b000010000,
  USART_SET_OPTIONS_CR1    = 0b000100000,
  USART_SET_OPTIONS_CR2    = 0b001000000,
  USART_SET_GUARD_TIME_PS  = 0b010000000,
  USART_SET_CB_RCV_IRQ     = 0b100000000,
  USART_SET_ALL            = 0b111111111
} usart_mask_t;

typedef enum {
    USART_MAP_AUTO,
    USART_MAP_VOLUNTARY
} usart_map_mode_t;

typedef struct {

    uint32_t set_mask;
    uint8_t usart;
    usart_mode_t mode;
    uint32_t baudrate;          /* USART_BRR:DIV_Mantissa[11:0]: and DIV_Fraction[3:0]: */
    uint32_t word_length;       /* USART_CR1:Bit 12 M: Word length */
    uint32_t parity;            /* USART_CR1:Bit 9 PS: Parity selection and Bit 10 PCE: Parity control enable */
    uint32_t stop_bits;         /* USART_CR2:Bits 13:12 STOP: STOP bits,  */
    uint32_t hw_flow_control;   /* USART_CR3:
                                   Bit 11 ONEBIT: One sample bit method enable
                                   Bit 10 CTSIE: CTS interrupt enable
                                   Bit 9 CTSE: CTS enable
                                   Bit 8 RTSE: RTS enable
                                   Bit 7 DMAT: DMA enable transmitter
                                   Bit 6 DMAR: DMA enable receiver
                                   Bit 5 SCEN: Smartcard mode enable
                                   Bit 4 NACK: Smartcard NACK enable
                                   Bit 3 HDSEL: Half-duplex selection
                                   Bit 2 IRLP: IrDA low-power
                                   Bit 1 IREN: IrDA mode enable
                                   Bit 0 EIE: Error interrupt enable */
    /* Additional options in CR1 */
    uint32_t options_cr1;       /* USART_CR1:
                                   Bit 15 OVER8:
                                   Bit 11 WAKE: Wakeup method
                                   Bit 8 PEIE: PE interrupt enable
                                   Bit 7 TXEIE: TXE interrupt enable
                                   Bit 6 TCIE: Transmission complete interrupt enable
                                   Bit 5 RXNEIE: RXNE interrupt enable
                                   Bit 4 IDLEIE: IDLE interrupt enable
                                   Bit 3 TE: Transmitter enable
                                   Bit 2 RE: Receiver enable
                                   Bit 1 RWU: Receiver wakeup
                                   Bit 0 SBK: Send break */
    /* Additional options in CR2 */
    uint32_t options_cr2;       /* USART_CR2:
                                   Bit 14 LINEN: LIN mode enable
                                   Bit 11 CLKEN: Clock enable
                                   Bit 10 CPOL: Clock polarity
                                   Bit 9 CPHA: Clock phase
                                   Bit 8 LBCL: Last bit clock pulse
                                   Bit 6 LBDIE: LIN break detection interrupt enable
                                   Bit 5 LBDL: lin break detection length */
    uint32_t guard_time_prescaler;  /* USART_GTPR: (used for Smartcard and IrDA modes
                                     * Bits 15:8 GT[7:0]: Guard time value
                                     * Bits 7:0 PSC[7:0]: Prescaler value */
    cb_usart_irq_handler_t callback_irq_handler;
    cb_usart_getc_t *callback_usart_getc_ptr;
    cb_usart_putc_t *callback_usart_putc_ptr;
} usart_config_t;

static volatile unsigned char *usart_mapping[2048];

#define USART_DATA_OFFSET 0
static inline uint32_t *usart_get_data_addr(uint32_t usart){
	return (uint32_t *)(&usart_mapping[USART_DATA_OFFSET]);
}

#define USART_STATUS_OFFSET 4
static inline uint32_t *usart_get_status_addr(uint32_t usart){
	return (uint32_t *)(&usart_mapping[USART_STATUS_OFFSET]);
}


void usart_init(usart_config_t *cfg){
/*
	unsigned int i;
	for(i = 0; i < sizeof(usart_mapping); i++){
		usart_mapping[i] = 0; //rand();
	}
*/
	return;
}

#endif
