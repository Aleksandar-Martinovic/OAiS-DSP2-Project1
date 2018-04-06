/********************************************************************
* Copyright (C) 2003-2008 Texas Instruments Incorporated.
* All Rights Reserved
*********************************************************************
* file: cslr_sar.h
*
* Brief: This file contains the Register Description for sar
*
*********************************************************************/
#ifndef _CSLR_SAR_H_
#define _CSLR_SAR_H_

#include <cslr.h>

#include <tistdtypes.h>
#include <csl_general.h>


/* Minimum unit = 2 bytes */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint16 RSVD0[4];
    volatile Uint16 USBLDOCNTL;
    volatile Uint16 RSVD1[13];
    volatile Uint16 SARCTRL;
    volatile Uint16 RSVD2;
    volatile Uint16 SARDATA;
    volatile Uint16 RSVD3;
    volatile Uint16 SARCLKCTRL;
    volatile Uint16 RSVD4;
    volatile Uint16 SARPINCTRL;
    volatile Uint16 RSVD5;
    volatile Uint16 SARGPOCTRL;
} CSL_AnactrlRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* USBLDOCNTL */


#define CSL_ANACTRL_USBLDOCNTL_USBLDOEN_MASK (0x0001u)
#define CSL_ANACTRL_USBLDOCNTL_USBLDOEN_SHIFT (0x0000u)
#define CSL_ANACTRL_USBLDOCNTL_USBLDOEN_RESETVAL (0x0000u)
/*----USBLDOEN Tokens----*/
#define CSL_ANACTRL_USBLDOCNTL_USBLDOEN_DISABLED (0x0000u)
#define CSL_ANACTRL_USBLDOCNTL_USBLDOEN_ENABLED (0x0001u)

#define CSL_ANACTRL_USBLDOCNTL_DSPLDOV_MASK (0x0002u)
#define CSL_ANACTRL_USBLDOCNTL_DSPLDOV_SHIFT (0x0001u)
#define CSL_ANACTRL_USBLDOCNTL_DSPLDOV_RESETVAL (0x0000u)
/*----DSPLDOEN Tokens----*/
#define CSL_ANACTRL_USBLDOCNTL_DSPLDOV_1P3V (0x0000u)
#define CSL_ANACTRL_USBLDOCNTL_DSPLDOV_1P05V (0x0001u)

#define CSL_ANACTRL_USBLDOCNTL_RESETVAL  (0x0000u)

/* SARCTRL */

#define CSL_ANACTRL_SARCTRL_ADCSTRT_MASK (0x8000u)
#define CSL_ANACTRL_SARCTRL_ADCSTRT_SHIFT (0x000Fu)
#define CSL_ANACTRL_SARCTRL_ADCSTRT_RESETVAL (0x0000u)
/*----ADCSTRT Tokens----*/
#define CSL_ANACTRL_SARCTRL_ADCSTRT_CLEAR (0x0000u)
#define CSL_ANACTRL_SARCTRL_ADCSTRT_SET  (0x0001u)

#define CSL_ANACTRL_SARCTRL_CHSEL_MASK   (0x7000u)
#define CSL_ANACTRL_SARCTRL_CHSEL_SHIFT  (0x000Cu)
#define CSL_ANACTRL_SARCTRL_CHSEL_RESETVAL (0x0000u)
/*----CHSEL Tokens----*/
#define CSL_ANACTRL_SARCTRL_CHSEL_AIN0   (0x0000u)
#define CSL_ANACTRL_SARCTRL_CHSEL_AIN1   (0x0001u)
#define CSL_ANACTRL_SARCTRL_CHSEL_AIN2   (0x0002u)
#define CSL_ANACTRL_SARCTRL_CHSEL_AIN3   (0x0003u)
#define CSL_ANACTRL_SARCTRL_CHSEL_AIN4   (0x0004u)
#define CSL_ANACTRL_SARCTRL_CHSEL_AIN5   (0x0005u)
#define CSL_ANACTRL_SARCTRL_CHSEL_RES0   (0x0006u)
#define CSL_ANACTRL_SARCTRL_CHSEL_RES1   (0x0007u)

#define CSL_ANACTRL_SARCTRL_MULTCH_MASK  (0x0800u)
#define CSL_ANACTRL_SARCTRL_MULTCH_SHIFT (0x000Bu)
#define CSL_ANACTRL_SARCTRL_MULTCH_RESETVAL (0x0000u)
/*----MULTCH Tokens----*/
#define CSL_ANACTRL_SARCTRL_MULTCH_CLEAR (0x0000u)
#define CSL_ANACTRL_SARCTRL_MULTCH_SET   (0x0001u)

#define CSL_ANACTRL_SARCTRL_SNGCYC_MASK  (0x0400u)
#define CSL_ANACTRL_SARCTRL_SNGCYC_SHIFT (0x000Au)
#define CSL_ANACTRL_SARCTRL_SNGCYC_RESETVAL (0x0000u)
/*----SNGCYC Tokens----*/
#define CSL_ANACTRL_SARCTRL_SNGCYC_CLEAR (0x0000u)
#define CSL_ANACTRL_SARCTRL_SNGCYC_SET   (0x0001u)


#define CSL_ANACTRL_SARCTRL_RESETVAL     (0x0000u)

/* SARDATA */

#define CSL_ANACTRL_SARDATA_ADCBSY_MASK  (0x8000u)
#define CSL_ANACTRL_SARDATA_ADCBSY_SHIFT (0x000Fu)
#define CSL_ANACTRL_SARDATA_ADCBSY_RESETVAL (0x0000u)
/*----ADCBSY Tokens----*/
#define CSL_ANACTRL_SARDATA_ADCBSY_CLEAR (0x0000u)
#define CSL_ANACTRL_SARDATA_ADCBSY_SET   (0x0001u)

#define CSL_ANACTRL_SARDATA_CHAN_MASK    (0x7000u)
#define CSL_ANACTRL_SARDATA_CHAN_SHIFT   (0x000Cu)
#define CSL_ANACTRL_SARDATA_CHAN_RESETVAL (0x0000u)
/*----CHAN Tokens----*/
#define CSL_ANACTRL_SARDATA_CHAN_AIN0    (0x0000u)
#define CSL_ANACTRL_SARDATA_CHAN_AIN1    (0x0001u)
#define CSL_ANACTRL_SARDATA_CHAN_AIN2    (0x0002u)
#define CSL_ANACTRL_SARDATA_CHAN_AIN3    (0x0003u)
#define CSL_ANACTRL_SARDATA_CHAN_AIN4    (0x0004u)
#define CSL_ANACTRL_SARDATA_CHAN_AIN5    (0x0005u)
#define CSL_ANACTRL_SARDATA_CHAN_RES0    (0x0006u)
#define CSL_ANACTRL_SARDATA_CHAN_RES1    (0x0007u)


#define CSL_ANACTRL_SARDATA_ADCDAT_MASK  (0x03FFu)
#define CSL_ANACTRL_SARDATA_ADCDAT_SHIFT (0x0000u)
#define CSL_ANACTRL_SARDATA_ADCDAT_RESETVAL (0x0000u)

#define CSL_ANACTRL_SARDATA_RESETVAL     (0x0000u)

/* SARCLKCTRL */


#define CSL_ANACTRL_SARCLKCTRL_ADCCLKDIV_MASK (0x7FFFu)
#define CSL_ANACTRL_SARCLKCTRL_ADCCLKDIV_SHIFT (0x0000u)
#define CSL_ANACTRL_SARCLKCTRL_ADCCLKDIV_RESETVAL (0x0000u)

#define CSL_ANACTRL_SARCLKCTRL_RESETVAL  (0x0000u)

/* SARPINCTRL */


#define CSL_ANACTRL_SARPINCTRL_STATUSMASK_MASK (0x4000u)
#define CSL_ANACTRL_SARPINCTRL_STATUSMASK_SHIFT (0x000Eu)
#define CSL_ANACTRL_SARPINCTRL_STATUSMASK_RESETVAL (0x0000u)
/*----STATUSMASK Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_STATUSMASK_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_STATUSMASK_SET (0x0001u)

#define CSL_ANACTRL_SARPINCTRL_PWRUPBIAS_MASK (0x2000u)
#define CSL_ANACTRL_SARPINCTRL_PWRUPBIAS_SHIFT (0x000Du)
#define CSL_ANACTRL_SARPINCTRL_PWRUPBIAS_RESETVAL (0x0000u)
/*----PWRUPBIAS Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_PWRUPBIAS_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_PWRUPBIAS_SET (0x0001u)

#define CSL_ANACTRL_SARPINCTRL_SARPWRUP_MASK (0x1000u)
#define CSL_ANACTRL_SARPINCTRL_SARPWRUP_SHIFT (0x000Cu)
#define CSL_ANACTRL_SARPINCTRL_SARPWRUP_RESETVAL (0x0000u)
/*----SARPWRUP Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_SARPWRUP_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_SARPWRUP_SET (0x0001u)


#define CSL_ANACTRL_SARPINCTRL_REFBUFFEN_MASK (0x0400u)
#define CSL_ANACTRL_SARPINCTRL_REFBUFFEN_SHIFT (0x000Au)
#define CSL_ANACTRL_SARPINCTRL_REFBUFFEN_RESETVAL (0x0000u)
/*----REFBUFFEN Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_REFBUFFEN_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_REFBUFFEN_SET (0x0001u)

#define CSL_ANACTRL_SARPINCTRL_REFLVSEL_MASK (0x0200u)
#define CSL_ANACTRL_SARPINCTRL_REFLVSEL_SHIFT (0x0009u)
#define CSL_ANACTRL_SARPINCTRL_REFLVSEL_RESETVAL (0x0000u)
/*----REFLVSEL Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_REFLVSEL_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_REFLVSEL_SET (0x0001u)

#define CSL_ANACTRL_SARPINCTRL_REFAVDDSEL_MASK (0x0100u)
#define CSL_ANACTRL_SARPINCTRL_REFAVDDSEL_SHIFT (0x0008u)
#define CSL_ANACTRL_SARPINCTRL_REFAVDDSEL_RESETVAL (0x0000u)
/*----REFAVDDSEL Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_REFAVDDSEL_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_REFAVDDSEL_SET (0x0001u)


#define CSL_ANACTRL_SARPINCTRL_TOUCHSCREENMODE_MASK (0x0010u)
#define CSL_ANACTRL_SARPINCTRL_TOUCHSCREENMODE_SHIFT (0x0004u)
#define CSL_ANACTRL_SARPINCTRL_TOUCHSCREENMODE_RESETVAL (0x0000u)
/*----TOUCHSCREENMODE Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_TOUCHSCREENMODE_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_TOUCHSCREENMODE_SET (0x0001u)

#define CSL_ANACTRL_SARPINCTRL_AVDDMEAS_MASK (0x0008u)
#define CSL_ANACTRL_SARPINCTRL_AVDDMEAS_SHIFT (0x0003u)
#define CSL_ANACTRL_SARPINCTRL_AVDDMEAS_RESETVAL (0x0000u)
/*----AVDDMEAS Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_AVDDMEAS_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_AVDDMEAS_SET (0x0001u)


#define CSL_ANACTRL_SARPINCTRL_GNDON_MASK (0x0002u)
#define CSL_ANACTRL_SARPINCTRL_GNDON_SHIFT (0x0001u)
#define CSL_ANACTRL_SARPINCTRL_GNDON_RESETVAL (0x0000u)
/*----GNDON Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_GNDON_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_GNDON_SET (0x0001u)

#define CSL_ANACTRL_SARPINCTRL_HALF_MASK (0x0001u)
#define CSL_ANACTRL_SARPINCTRL_HALF_SHIFT (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_HALF_RESETVAL (0x0000u)
/*----HALF Tokens----*/
#define CSL_ANACTRL_SARPINCTRL_HALF_CLEAR (0x0000u)
#define CSL_ANACTRL_SARPINCTRL_HALF_SET  (0x0001u)

#define CSL_ANACTRL_SARPINCTRL_RESETVAL  (0x0000u)

/* SARGPOCTRL */


#define CSL_ANACTRL_SARGPOCTRL_PENIRQSTAT_MASK (0x0200u)
#define CSL_ANACTRL_SARGPOCTRL_PENIRQSTAT_SHIFT (0x0009u)
#define CSL_ANACTRL_SARGPOCTRL_PENIRQSTAT_RESETVAL (0x0000u)
/*----PENIRQSTAT Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_PENIRQSTAT_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_PENIRQSTAT_SET (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_PENIRQEN_MASK (0x0100u)
#define CSL_ANACTRL_SARGPOCTRL_PENIRQEN_SHIFT (0x0008u)
#define CSL_ANACTRL_SARGPOCTRL_PENIRQEN_RESETVAL (0x0000u)
/*----PENIRQEN Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_PENIRQEN_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_PENIRQEN_SET (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO3EN_MASK (0x0080u)
#define CSL_ANACTRL_SARGPOCTRL_GPO3EN_SHIFT (0x0007u)
#define CSL_ANACTRL_SARGPOCTRL_GPO3EN_RESETVAL (0x0000u)
/*----GPO3EN Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO3EN_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO3EN_SET (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO2EN_MASK (0x0040u)
#define CSL_ANACTRL_SARGPOCTRL_GPO2EN_SHIFT (0x0006u)
#define CSL_ANACTRL_SARGPOCTRL_GPO2EN_RESETVAL (0x0000u)
/*----GPO2EN Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO2EN_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO2EN_SET (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO1EN_MASK (0x0020u)
#define CSL_ANACTRL_SARGPOCTRL_GPO1EN_SHIFT (0x0005u)
#define CSL_ANACTRL_SARGPOCTRL_GPO1EN_RESETVAL (0x0000u)
/*----GPO1EN Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO1EN_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO1EN_SET (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO0EN_MASK (0x0010u)
#define CSL_ANACTRL_SARGPOCTRL_GPO0EN_SHIFT (0x0004u)
#define CSL_ANACTRL_SARGPOCTRL_GPO0EN_RESETVAL (0x0000u)
/*----GPO0EN Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO0EN_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO0EN_SET (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO3_MASK (0x0008u)
#define CSL_ANACTRL_SARGPOCTRL_GPO3_SHIFT (0x0003u)
#define CSL_ANACTRL_SARGPOCTRL_GPO3_RESETVAL (0x0000u)
/*----GPO3 Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO3_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO3_SET  (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO2_MASK (0x0004u)
#define CSL_ANACTRL_SARGPOCTRL_GPO2_SHIFT (0x0002u)
#define CSL_ANACTRL_SARGPOCTRL_GPO2_RESETVAL (0x0000u)
/*----GPO2 Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO2_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO2_SET  (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO1_MASK (0x0002u)
#define CSL_ANACTRL_SARGPOCTRL_GPO1_SHIFT (0x0001u)
#define CSL_ANACTRL_SARGPOCTRL_GPO1_RESETVAL (0x0000u)
/*----GPO1 Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO1_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO1_SET  (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_GPO0_MASK (0x0001u)
#define CSL_ANACTRL_SARGPOCTRL_GPO0_SHIFT (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO0_RESETVAL (0x0000u)
/*----GPO0 Tokens----*/
#define CSL_ANACTRL_SARGPOCTRL_GPO0_CLEAR (0x0000u)
#define CSL_ANACTRL_SARGPOCTRL_GPO0_SET  (0x0001u)

#define CSL_ANACTRL_SARGPOCTRL_RESETVAL  (0x0000u)

#endif
