/*****************************************************************************/
/* COPYRIGHT (C) 2009 STMicroelectronics - All Rights Reserved               */
/* ST makes no warranty express or implied including but not limited to,     */
/* any warranty of                                                           */
/*                                                                           */
/*   (i)  merchantability or fitness for a particular purpose and/or         */
/*   (ii) requirements, for a particular purpose in relation to the LICENSED */
/*        MATERIALS, which is provided "AS IS", WITH ALL FAULTS. ST does not */
/*        represent or warrant that the LICENSED MATERIALS provided here     */
/*        under is free of infringement of any third party patents,          */
/*        copyrights,trade secrets or other intellectual property rights.    */
/*        ALL WARRANTIES, CONDITIONS OR OTHER TERMS IMPLIED BY LAW ARE       */
/*        EXCLUDED TO THE FULLEST EXTENT PERMITTED BY LAW                    */
/*                                                                           */
/*****************************************************************************/
/**
 @File stv0367ter_init.h
 @brief

*/
#ifndef _STV0367TER_INIT_H
#define _STV0367TER_INIT_H

/* =======================================================================
-- Registers Declaration
-- -------------------------
-- Each register (R367TER_XXXXX) is defined by its address (2 bytes).
--
-- Each field (F367TER_XXXXX)is defined as follows:
-- [register address -- 2bytes][field sign -- 1byte][field mask -- 1byte]
========================================================================== */

/* ID */
#define R367_ID                            0xF000
#define F367_IDENTIFICATIONREG             0xF00000FF

/* I2CRPT */
#define R367_I2CRPT                        0xF001
#define F367_I2CT_ON                       0xF0010080
#define F367_ENARPT_LEVEL                  0xF0010070
#define F367_SCLT_DELAY                    0xF0010008
#define F367_SCLT_NOD                      0xF0010004
#define F367_STOP_ENABLE                   0xF0010002
#define F367_SDAT_NOD                      0xF0010001

/* TOPCTRL */
#define R367_TOPCTRL                       0xF002
#define F367_STDBY                         0xF0020080
#define F367_STDBY_FEC                     0xF0020040
#define F367_STDBY_CORE                    0xF0020020
#define F367_QAM_COFDM                     0xF0020010
#define F367_TS_DIS                        0xF0020008
#define F367_DIR_CLK_216                   0xF0020004
#define F367_TUNER_BB                      0xF0020002
#define F367_DVBT_H                        0xF0020001

/* IOCFG0 */
#define R367_IOCFG0                        0xF003
#define F367_OP0_SD                        0xF0030080
#define F367_OP0_VAL                       0xF0030040
#define F367_OP0_OD                        0xF0030020
#define F367_OP0_INV                       0xF0030010
#define F367_OP0_DACVALUE_HI               0xF003000F

/* DAC0R */
#define R367_DAC0R                         0xF004
#define F367_OP0_DACVALUE_LO               0xF00400FF

/* IOCFG1 */
#define R367_IOCFG1                        0xF005
#define F367_IP0                           0xF0050040
#define F367_OP1_OD                        0xF0050020
#define F367_OP1_INV                       0xF0050010
#define F367_OP1_DACVALUE_HI               0xF005000F

/* DAC1R */
#define R367_DAC1R                         0xF006
#define F367_OP1_DACVALUE_LO               0xF00600FF

/* IOCFG2 */
#define R367_IOCFG2                        0xF007
#define F367_OP2_LOCK_CONF                 0xF00700E0
#define F367_OP2_OD                        0xF0070010
#define F367_OP2_VAL                       0xF0070008
#define F367_OP1_LOCK_CONF                 0xF0070007

/* SDFR */
#define R367_SDFR                          0xF008
#define F367_OP0_FREQ                      0xF00800F0
#define F367_OP1_FREQ                      0xF008000F

/* STATUS */
#define R367TER_STATUS                    0xF009
#define F367TER_TPS_LOCK                  0xF0090080
#define F367TER_SYR_LOCK                  0xF0090040
#define F367TER_AGC_LOCK                  0xF0090020
#define F367TER_PRF                       0xF0090010
#define F367TER_LK                        0xF0090008
#define F367TER_PR                        0xF0090007

/* AUX_CLK */
#define R367_AUX_CLK                       0xF00A
#define F367_AUXFEC_CTL                    0xF00A00C0
#define F367_DIS_CKX4                      0xF00A0020
#define F367_CKSEL                         0xF00A0018
#define F367_CKDIV_PROG                    0xF00A0006
#define F367_AUXCLK_ENA                    0xF00A0001

/* FREESYS1 */
#define R367_FREESYS1                      0xF00B
#define F367_FREE_SYS1                     0xF00B00FF

/* FREESYS2 */
#define R367_FREESYS2                      0xF00C
#define F367_FREE_SYS2                     0xF00C00FF

/* FREESYS3 */
#define R367_FREESYS3                      0xF00D
#define F367_FREE_SYS3                     0xF00D00FF

/* GPIO_CFG */
#define R367_GPIO_CFG                      0xF00E
#define F367_GPIO7_NOD                     0xF00E0080
#define F367_GPIO7_CFG                     0xF00E0040
#define F367_GPIO6_NOD                     0xF00E0020
#define F367_GPIO6_CFG                     0xF00E0010
#define F367_GPIO5_NOD                     0xF00E0008
#define F367_GPIO5_CFG                     0xF00E0004
#define F367_GPIO4_NOD                     0xF00E0002
#define F367_GPIO4_CFG                     0xF00E0001

/* GPIO_CMD */
#define R367_GPIO_CMD                      0xF00F
#define F367_GPIO7_VAL                     0xF00F0008
#define F367_GPIO6_VAL                     0xF00F0004
#define F367_GPIO5_VAL                     0xF00F0002
#define F367_GPIO4_VAL                     0xF00F0001

/* AGC2MAX */
#define R367TER_AGC2MAX                   0xF010
#define F367TER_AGC2_MAX                  0xF01000FF

/* AGC2MIN */
#define R367TER_AGC2MIN                   0xF011
#define F367TER_AGC2_MIN                  0xF01100FF

/* AGC1MAX */
#define R367TER_AGC1MAX                   0xF012
#define F367TER_AGC1_MAX                  0xF01200FF

/* AGC1MIN */
#define R367TER_AGC1MIN                   0xF013
#define F367TER_AGC1_MIN                  0xF01300FF

/* AGCR */
#define R367TER_AGCR                      0xF014
#define F367TER_RATIO_A                   0xF01400E0
#define F367TER_RATIO_B                   0xF0140018
#define F367TER_RATIO_C                   0xF0140007

/* AGC2TH */
#define R367TER_AGC2TH                    0xF015
#define F367TER_AGC2_THRES                0xF01500FF

/* AGC12C */
#define R367TER_AGC12C                    0xF016
#define F367TER_AGC1_IV                   0xF0160080
#define F367TER_AGC1_OD                   0xF0160040
#define F367TER_AGC1_LOAD                 0xF0160020
#define F367TER_AGC2_IV                   0xF0160010
#define F367TER_AGC2_OD                   0xF0160008
#define F367TER_AGC2_LOAD                 0xF0160004
#define F367TER_AGC12_MODE                0xF0160003

/* AGCCTRL1 */
#define R367TER_AGCCTRL1                  0xF017
#define F367TER_DAGC_ON                   0xF0170080
#define F367TER_INVERT_AGC12              0xF0170040
#define F367TER_AGC1_MODE                 0xF0170008
#define F367TER_AGC2_MODE                 0xF0170007

/* AGCCTRL2 */
#define R367TER_AGCCTRL2                  0xF018
#define F367TER_FRZ2_CTRL                 0xF0180060
#define F367TER_FRZ1_CTRL                 0xF0180018
#define F367TER_TIME_CST                  0xF0180007

/* AGC1VAL1 */
#define R367TER_AGC1VAL1                  0xF019
#define F367TER_AGC1_VAL_LO               0xF01900FF

/* AGC1VAL2 */
#define R367TER_AGC1VAL2                  0xF01A
#define F367TER_AGC1_VAL_HI               0xF01A000F

/* AGC2VAL1 */
#define R367TER_AGC2VAL1                  0xF01B
#define F367TER_AGC2_VAL_LO               0xF01B00FF

/* AGC2VAL2 */
#define R367TER_AGC2VAL2                  0xF01C
#define F367TER_AGC2_VAL_HI               0xF01C000F

/* AGC2PGA */
#define R367TER_AGC2PGA                   0xF01D
#define F367TER_AGC2_PGA                  0xF01D00FF

/* OVF_RATE1 */
#define R367TER_OVF_RATE1                 0xF01E
#define F367TER_OVF_RATE_HI               0xF01E000F

/* OVF_RATE2 */
#define R367TER_OVF_RATE2                 0xF01F
#define F367TER_OVF_RATE_LO               0xF01F00FF

/* GAIN_SRC1 */
#define R367TER_GAIN_SRC1                 0xF020
#define F367TER_INV_SPECTR                0xF0200080
#define F367TER_IQ_INVERT                 0xF0200040
#define F367TER_INR_BYPASS                0xF0200020
#define F367TER_STATUS_INV_SPECRUM        0xF0200010
#define F367TER_GAIN_SRC_HI               0xF020000F

/* GAIN_SRC2 */
#define R367TER_GAIN_SRC2                 0xF021
#define F367TER_GAIN_SRC_LO               0xF02100FF

/* INC_DEROT1 */
#define R367TER_INC_DEROT1                0xF022
#define F367TER_INC_DEROT_HI              0xF02200FF

/* INC_DEROT2 */
#define R367TER_INC_DEROT2                0xF023
#define F367TER_INC_DEROT_LO              0xF02300FF

/* PPM_CPAMP_DIR */
#define R367TER_PPM_CPAMP_DIR             0xF024
#define F367TER_PPM_CPAMP_DIRECT          0xF02400FF

/* PPM_CPAMP_INV */
#define R367TER_PPM_CPAMP_INV             0xF025
#define F367TER_PPM_CPAMP_INVER           0xF02500FF

/* FREESTFE_1 */
#define R367TER_FREESTFE_1                0xF026
#define F367TER_SYMBOL_NUMBER_INC         0xF02600C0
#define F367TER_SEL_LSB                   0xF0260004
#define F367TER_AVERAGE_ON                0xF0260002
#define F367TER_DC_ADJ                    0xF0260001

/* FREESTFE_2 */
#define R367TER_FREESTFE_2                0xF027
#define F367TER_SEL_SRCOUT                0xF02700C0
#define F367TER_SEL_SYRTHR                0xF027001F

/* DCOFFSET */
#define R367TER_DCOFFSET                  0xF028
#define F367TER_SELECT_I_Q                0xF0280080
#define F367TER_DC_OFFSET                 0xF028007F

/* EN_PROCESS */
#define R367TER_EN_PROCESS                0xF029
#define F367TER_FREE                      0xF02900F0
#define F367TER_ENAB_MANUAL               0xF0290001

/* SDI_SMOOTHER */
#define R367TER_SDI_SMOOTHER              0xF02A
#define F367TER_DIS_SMOOTH                0xF02A0080
#define F367TER_SDI_INC_SMOOTHER          0xF02A007F

/* FE_LOOP_OPEN */
#define R367TER_FE_LOOP_OPEN              0xF02B
#define F367TER_TRL_LOOP_OP               0xF02B0002
#define F367TER_CRL_LOOP_OP               0xF02B0001

/* FREQOFF1 */
#define R367TER_FREQOFF1                  0xF02C
#define F367TER_FREQ_OFFSET_LOOP_OPEN_VHI 0xF02C00FF

/* FREQOFF2 */
#define R367TER_FREQOFF2                  0xF02D
#define F367TER_FREQ_OFFSET_LOOP_OPEN_HI  0xF02D00FF

/* FREQOFF3 */
#define R367TER_FREQOFF3                  0xF02E
#define F367TER_FREQ_OFFSET_LOOP_OPEN_LO  0xF02E00FF

/* TIMOFF1 */
#define R367TER_TIMOFF1                   0xF02F
#define F367TER_TIM_OFFSET_LOOP_OPEN_HI   0xF02F00FF

/* TIMOFF2 */
#define R367TER_TIMOFF2                   0xF030
#define F367TER_TIM_OFFSET_LOOP_OPEN_LO   0xF03000FF

/* EPQ */
#define R367TER_EPQ                       0xF031
#define F367TER_EPQ1                      0xF03100FF

/* EPQAUTO */
#define R367TER_EPQAUTO                   0xF032
#define F367TER_EPQ2                      0xF03200FF

/* SYR_UPDATE */
#define R367TER_SYR_UPDATE                0xF033
#define F367TER_SYR_PROTV                 0xF0330080
#define F367TER_SYR_PROTV_GAIN            0xF0330060
#define F367TER_SYR_FILTER                0xF0330010
#define F367TER_SYR_TRACK_THRES           0xF033000C

/* CHPFREE */
#define R367TER_CHPFREE                   0xF034
#define F367TER_CHP_FREE                  0xF03400FF

/* PPM_STATE_MAC */
#define R367TER_PPM_STATE_MAC             0xF035
#define F367TER_PPM_STATE_MACHINE_DECODER 0xF035003F

/* INR_THRESHOLD */
#define R367TER_INR_THRESHOLD             0xF036
#define F367TER_INR_THRESH                0xF03600FF

/* EPQ_TPS_ID_CELL */
#define R367TER_EPQ_TPS_ID_CELL           0xF037
#define F367TER_ENABLE_LGTH_TO_CF         0xF0370080
#define F367TER_DIS_TPS_RSVD              0xF0370040
#define F367TER_DIS_BCH                   0xF0370020
#define F367TER_DIS_ID_CEL                0xF0370010
#define F367TER_TPS_ADJUST_SYM            0xF037000F

/* EPQ_CFG */
#define R367TER_EPQ_CFG                   0xF038
#define F367TER_EPQ_RANGE                 0xF0380002
#define F367TER_EPQ_SOFT                  0xF0380001

/* EPQ_STATUS */
#define R367TER_EPQ_STATUS                0xF039
#define F367TER_SLOPE_INC                 0xF03900FC
#define F367TER_TPS_FIELD                 0xF0390003

/* AUTORELOCK */
#define R367TER_AUTORELOCK                0xF03A
#define F367TER_BYPASS_BER_TEMPO          0xF03A0080
#define F367TER_BER_TEMPO                 0xF03A0070
#define F367TER_BYPASS_COFDM_TEMPO        0xF03A0008
#define F367TER_COFDM_TEMPO               0xF03A0007

/* BER_THR_VMSB */
#define R367TER_BER_THR_VMSB              0xF03B
#define F367TER_BER_THRESHOLD_HI          0xF03B00FF

/* BER_THR_MSB */
#define R367TER_BER_THR_MSB               0xF03C
#define F367TER_BER_THRESHOLD_MID         0xF03C00FF

/* BER_THR_LSB */
#define R367TER_BER_THR_LSB               0xF03D
#define F367TER_BER_THRESHOLD_LO          0xF03D00FF

/* CCD */
#define R367TER_CCD                       0xF03E
#define F367TER_CCD_DETECTED              0xF03E0080
#define F367TER_CCD_RESET                 0xF03E0040
#define F367TER_CCD_THRESHOLD             0xF03E000F

/* SPECTR_CFG */
#define R367TER_SPECTR_CFG                0xF03F
#define F367TER_SPECT_CFG                 0xF03F0003

/* CONSTMU_MSB */
#define R367TER_CONSTMU_MSB               0xF040
#define F367TER_CONSTMU_FREEZE            0xF0400080
#define F367TER_CONSTNU_FORCE_EN          0xF0400040
#define F367TER_CONST_MU_MSB              0xF040003F

/* CONSTMU_LSB */
#define R367TER_CONSTMU_LSB               0xF041
#define F367TER_CONST_MU_LSB              0xF04100FF

/* CONSTMU_MAX_MSB */
#define R367TER_CONSTMU_MAX_MSB           0xF042
#define F367TER_CONST_MU_MAX_MSB          0xF042003F

/* CONSTMU_MAX_LSB */
#define R367TER_CONSTMU_MAX_LSB           0xF043
#define F367TER_CONST_MU_MAX_LSB          0xF04300FF

/* ALPHANOISE */
#define R367TER_ALPHANOISE                0xF044
#define F367TER_USE_ALLFILTER             0xF0440080
#define F367TER_INTER_ON                  0xF0440040
#define F367TER_ALPHA_NOISE               0xF044001F

/* MAXGP_MSB */
#define R367TER_MAXGP_MSB                 0xF045
#define F367TER_MUFILTER_LENGTH           0xF04500F0
#define F367TER_MAX_GP_MSB                0xF045000F

/* MAXGP_LSB */
#define R367TER_MAXGP_LSB                 0xF046
#define F367TER_MAX_GP_LSB                0xF04600FF

/* ALPHAMSB */
#define R367TER_ALPHAMSB                  0xF047
#define F367TER_CHC_DATARATE              0xF04700C0
#define F367TER_ALPHA_MSB                 0xF047003F

/* ALPHALSB */
#define R367TER_ALPHALSB                  0xF048
#define F367TER_ALPHA_LSB                 0xF04800FF

/* PILOT_ACCU */
#define R367TER_PILOT_ACCU                0xF049
#define F367TER_USE_SCAT4ADDAPT           0xF0490080
#define F367TER_PILOT_ACC                 0xF049001F

/* PILOTMU_ACCU */
#define R367TER_PILOTMU_ACCU              0xF04A
#define F367TER_DISCARD_BAD_SP            0xF04A0080
#define F367TER_DISCARD_BAD_CP            0xF04A0040
#define F367TER_PILOT_MU_ACCU             0xF04A001F

/* FILT_CHANNEL_EST */
#define R367TER_FILT_CHANNEL_EST          0xF04B
#define F367TER_USE_FILT_PILOT            0xF04B0080
#define F367TER_FILT_CHANNEL              0xF04B007F

/* ALPHA_NOPISE_FREQ */
#define R367TER_ALPHA_NOPISE_FREQ         0xF04C
#define F367TER_NOISE_FREQ_FILT           0xF04C0040
#define F367TER_ALPHA_NOISE_FREQ          0xF04C003F

/* RATIO_PILOT */
#define R367TER_RATIO_PILOT               0xF04D
#define F367TER_RATIO_MEAN_SP             0xF04D00F0
#define F367TER_RATIO_MEAN_CP             0xF04D000F

/* CHC_CTL */
#define R367TER_CHC_CTL                   0xF04E
#define F367TER_TRACK_EN                  0xF04E0080
#define F367TER_NOISE_NORM_EN             0xF04E0040
#define F367TER_FORCE_CHC_RESET           0xF04E0020
#define F367TER_SHORT_TIME                0xF04E0010
#define F367TER_FORCE_STATE_EN            0xF04E0008
#define F367TER_FORCE_STATE               0xF04E0007

/* EPQ_ADJUST */
#define R367TER_EPQ_ADJUST                0xF04F
#define F367TER_ADJUST_SCAT_IND           0xF04F00C0
#define F367TER_ONE_SYMBOL                0xF04F0010
#define F367TER_EPQ_DECAY                 0xF04F000E
#define F367TER_HOLD_SLOPE                0xF04F0001

/* EPQ_THRES */
#define R367TER_EPQ_THRES                 0xF050
#define F367TER_EPQ_THR                   0xF05000FF

/* OMEGA_CTL */
#define R367TER_OMEGA_CTL                 0xF051
#define F367TER_OMEGA_RST                 0xF0510080
#define F367TER_FREEZE_OMEGA              0xF0510040
#define F367TER_OMEGA_SEL                 0xF051003F

/* GP_CTL */
#define R367TER_GP_CTL                    0xF052
#define F367TER_CHC_STATE                 0xF05200E0
#define F367TER_FREEZE_GP                 0xF0520010
#define F367TER_GP_SEL                    0xF052000F

/* MUMSB */
#define R367TER_MUMSB                     0xF053
#define F367TER_MU_MSB                    0xF053007F

/* MULSB */
#define R367TER_MULSB                     0xF054
#define F367TER_MU_LSB                    0xF05400FF

/* GPMSB */
#define R367TER_GPMSB                     0xF055
#define F367TER_CSI_THRESHOLD             0xF05500E0
#define F367TER_GP_MSB                    0xF055000F

/* GPLSB */
#define R367TER_GPLSB                     0xF056
#define F367TER_GP_LSB                    0xF05600FF

/* OMEGAMSB */
#define R367TER_OMEGAMSB                  0xF057
#define F367TER_OMEGA_MSB                 0xF057007F

/* OMEGALSB */
#define R367TER_OMEGALSB                  0xF058
#define F367TER_OMEGA_LSB                 0xF05800FF

/* SCAT_NB */
#define R367TER_SCAT_NB                   0xF059
#define F367TER_CHC_TEST                  0xF05900F8
#define F367TER_SCAT_NUMB                 0xF0590003

/* CHC_DUMMY */
#define R367TER_CHC_DUMMY                 0xF05A
#define F367TER_CHC_DUM                   0xF05A00FF

/* INC_CTL */
#define R367TER_INC_CTL                   0xF05B
#define F367TER_INC_BYPASS                0xF05B0080
#define F367TER_INC_NDEPTH                0xF05B000C
#define F367TER_INC_MADEPTH               0xF05B0003

/* INCTHRES_COR1 */
#define R367TER_INCTHRES_COR1             0xF05C
#define F367TER_INC_THRES_COR1            0xF05C00FF

/* INCTHRES_COR2 */
#define R367TER_INCTHRES_COR2             0xF05D
#define F367TER_INC_THRES_COR2            0xF05D00FF

/* INCTHRES_DET1 */
#define R367TER_INCTHRES_DET1             0xF05E
#define F367TER_INC_THRES_DET1            0xF05E003F

/* INCTHRES_DET2 */
#define R367TER_INCTHRES_DET2             0xF05F
#define F367TER_INC_THRES_DET2            0xF05F003F

/* IIR_CELLNB */
#define R367TER_IIR_CELLNB                0xF060
#define F367TER_NRST_IIR                  0xF0600080
#define F367TER_IIR_CELL_NB               0xF0600007

/* IIRCX_COEFF1_MSB */
#define R367TER_IIRCX_COEFF1_MSB          0xF061
#define F367TER_IIR_CX_COEFF1_MSB         0xF06100FF

/* IIRCX_COEFF1_LSB */
#define R367TER_IIRCX_COEFF1_LSB          0xF062
#define F367TER_IIR_CX_COEFF1_LSB         0xF06200FF

/* IIRCX_COEFF2_MSB */
#define R367TER_IIRCX_COEFF2_MSB          0xF063
#define F367TER_IIR_CX_COEFF2_MSB         0xF06300FF

/* IIRCX_COEFF2_LSB */
#define R367TER_IIRCX_COEFF2_LSB          0xF064
#define F367TER_IIR_CX_COEFF2_LSB         0xF06400FF

/* IIRCX_COEFF3_MSB */
#define R367TER_IIRCX_COEFF3_MSB          0xF065
#define F367TER_IIR_CX_COEFF3_MSB         0xF06500FF

/* IIRCX_COEFF3_LSB */
#define R367TER_IIRCX_COEFF3_LSB          0xF066
#define F367TER_IIR_CX_COEFF3_LSB         0xF06600FF

/* IIRCX_COEFF4_MSB */
#define R367TER_IIRCX_COEFF4_MSB          0xF067
#define F367TER_IIR_CX_COEFF4_MSB         0xF06700FF

/* IIRCX_COEFF4_LSB */
#define R367TER_IIRCX_COEFF4_LSB          0xF068
#define F367TER_IIR_CX_COEFF4_LSB         0xF06800FF

/* IIRCX_COEFF5_MSB */
#define R367TER_IIRCX_COEFF5_MSB          0xF069
#define F367TER_IIR_CX_COEFF5_MSB         0xF06900FF

/* IIRCX_COEFF5_LSB */
#define R367TER_IIRCX_COEFF5_LSB          0xF06A
#define F367TER_IIR_CX_COEFF5_LSB         0xF06A00FF

/* FEPATH_CFG */
#define R367TER_FEPATH_CFG                0xF06B
#define F367TER_DEMUX_SWAP                0xF06B0004
#define F367TER_DIGAGC_SWAP               0xF06B0002
#define F367TER_LONGPATH_IF               0xF06B0001

/* PMC1_FUNC */
#define R367TER_PMC1_FUNC                 0xF06C
#define F367TER_SOFT_RSTN                 0xF06C0080
#define F367TER_PMC1_AVERAGE_TIME         0xF06C0078
#define F367TER_PMC1_WAIT_TIME            0xF06C0006
#define F367TER_PMC1_2N_SEL               0xF06C0001

/* PMC1_FOR */
#define R367TER_PMC1_FOR                  0xF06D
#define F367TER_PMC1_FORCE                0xF06D0080
#define F367TER_PMC1_FORCE_VALUE          0xF06D007C

/* PMC2_FUNC */
#define R367TER_PMC2_FUNC                 0xF06E
#define F367TER_PMC2_SOFT_STN             0xF06E0080
#define F367TER_PMC2_ACCU_TIME            0xF06E0070
#define F367TER_PMC2_CMDP_MN              0xF06E0008
#define F367TER_PMC2_SWAP                 0xF06E0004

/* STATUS_ERR_DA */
#define R367TER_STATUS_ERR_DA             0xF06F
#define F367TER_COM_USEGAINTRK            0xF06F0080
#define F367TER_COM_AGCLOCK               0xF06F0040
#define F367TER_AUT_AGCLOCK               0xF06F0020
#define F367TER_MIN_ERR_X_LSB             0xF06F000F

/* DIG_AGC_R */
#define R367TER_DIG_AGC_R                 0xF070
#define F367TER_COM_SOFT_RSTN             0xF0700080
#define F367TER_COM_AGC_ON                0xF0700040
#define F367TER_COM_EARLY                 0xF0700020
#define F367TER_AUT_SOFT_RESETN           0xF0700010
#define F367TER_AUT_AGC_ON                0xF0700008
#define F367TER_AUT_EARLY                 0xF0700004
#define F367TER_AUT_ROT_EN                0xF0700002
#define F367TER_LOCK_SOFT_RESETN          0xF0700001

/* COMAGC_TARMSB */
#define R367TER_COMAGC_TARMSB             0xF071
#define F367TER_COM_AGC_TARGET_MSB        0xF07100FF

/* COM_AGC_TAR_ENMODE */
#define R367TER_COM_AGC_TAR_ENMODE        0xF072
#define F367TER_COM_AGC_TARGET_LSB        0xF07200F0
#define F367TER_COM_ENMODE                0xF072000F

/* COM_AGC_CFG */
#define R367TER_COM_AGC_CFG               0xF073
#define F367TER_COM_N                     0xF07300F8
#define F367TER_COM_STABMODE              0xF0730006
#define F367TER_ERR_SEL                   0xF0730001

/* COM_AGC_GAIN1 */
#define R367TER_COM_AGC_GAIN1             0xF074
#define F367TER_COM_GAIN1ACK              0xF07400F0
#define F367TER_COM_GAIN1TRK              0xF074000F

/* AUT_AGC_TARGETMSB */
#define R367TER_AUT_AGC_TARGETMSB         0xF075
#define F367TER_AUT_AGC_TARGET_MSB        0xF07500FF

/* LOCK_DET_MSB */
#define R367TER_LOCK_DET_MSB              0xF076
#define F367TER_LOCK_DETECT_MSB           0xF07600FF

/* AGCTAR_LOCK_LSBS */
#define R367TER_AGCTAR_LOCK_LSBS          0xF077
#define F367TER_AUT_AGC_TARGET_LSB        0xF07700F0
#define F367TER_LOCK_DETECT_LSB           0xF077000F

/* AUT_GAIN_EN */
#define R367TER_AUT_GAIN_EN               0xF078
#define F367TER_AUT_ENMODE                0xF07800F0
#define F367TER_AUT_GAIN2                 0xF078000F

/* AUT_CFG */
#define R367TER_AUT_CFG                   0xF079
#define F367TER_AUT_N                     0xF07900F8
#define F367TER_INT_CHOICE                0xF0790006
#define F367TER_INT_LOAD                  0xF0790001

/* LOCKN */
#define R367TER_LOCKN                     0xF07A
#define F367TER_LOCK_N                    0xF07A00F8
#define F367TER_SEL_IQNTAR                0xF07A0004
#define F367TER_LOCK_DETECT_CHOICE        0xF07A0003

/* INT_X_3 */
#define R367TER_INT_X_3                   0xF07B
#define F367TER_INT_X3                    0xF07B00FF

/* INT_X_2 */
#define R367TER_INT_X_2                   0xF07C
#define F367TER_INT_X2                    0xF07C00FF

/* INT_X_1 */
#define R367TER_INT_X_1                   0xF07D
#define F367TER_INT_X1                    0xF07D00FF

/* INT_X_0 */
#define R367TER_INT_X_0                   0xF07E
#define F367TER_INT_X0                    0xF07E00FF

/* MIN_ERRX_MSB */
#define R367TER_MIN_ERRX_MSB              0xF07F
#define F367TER_MIN_ERR_X_MSB             0xF07F00FF

/* COR_CTL */
#define R367TER_COR_CTL                   0xF080
#define F367TER_CORE_ACTIVE               0xF0800020
#define F367TER_HOLD                      0xF0800010
#define F367TER_CORE_STATE_CTL            0xF080000F

/* COR_STAT */
#define R367TER_COR_STAT                  0xF081
#define F367TER_SCATT_LOCKED              0xF0810080
#define F367TER_TPS_LOCKED                0xF0810040
#define F367TER_SYR_LOCKED_COR            0xF0810020
#define F367TER_AGC_LOCKED_STAT           0xF0810010
#define F367TER_CORE_STATE_STAT           0xF081000F

/* COR_INTEN */
#define R367TER_COR_INTEN                 0xF082
#define F367TER_INTEN                     0xF0820080
#define F367TER_INTEN_SYR                 0xF0820020
#define F367TER_INTEN_FFT                 0xF0820010
#define F367TER_INTEN_AGC                 0xF0820008
#define F367TER_INTEN_TPS1                0xF0820004
#define F367TER_INTEN_TPS2                0xF0820002
#define F367TER_INTEN_TPS3                0xF0820001

/* COR_INTSTAT */
#define R367TER_COR_INTSTAT               0xF083
#define F367TER_INTSTAT_SYR               0xF0830020
#define F367TER_INTSTAT_FFT               0xF0830010
#define F367TER_INTSAT_AGC                0xF0830008
#define F367TER_INTSTAT_TPS1              0xF0830004
#define F367TER_INTSTAT_TPS2              0xF0830002
#define F367TER_INTSTAT_TPS3              0xF0830001

/* COR_MODEGUARD */
#define R367TER_COR_MODEGUARD             0xF084
#define F367TER_FORCE                     0xF0840010
#define F367TER_MODE                      0xF084000C
#define F367TER_GUARD                     0xF0840003

/* AGC_CTL */
#define R367TER_AGC_CTL                   0xF085
#define F367TER_AGC_TIMING_FACTOR         0xF08500E0
#define F367TER_AGC_LAST                  0xF0850010
#define F367TER_AGC_GAIN                  0xF085000C
#define F367TER_AGC_NEG                   0xF0850002
#define F367TER_AGC_SET                   0xF0850001

/* AGC_MANUAL1 */
#define R367TER_AGC_MANUAL1               0xF086
#define F367TER_AGC_VAL_LO                0xF08600FF

/* AGC_MANUAL2 */
#define R367TER_AGC_MANUAL2               0xF087
#define F367TER_AGC_VAL_HI                0xF087000F

/* AGC_TARG */
#define R367TER_AGC_TARG                  0xF088
#define F367TER_AGC_TARGET                0xF08800FF

/* AGC_GAIN1 */
#define R367TER_AGC_GAIN1                 0xF089
#define F367TER_AGC_GAIN_LO               0xF08900FF

/* AGC_GAIN2 */
#define R367TER_AGC_GAIN2                 0xF08A
#define F367TER_AGC_LOCKED_GAIN2          0xF08A0010
#define F367TER_AGC_GAIN_HI               0xF08A000F

/* RESERVED_1 */
#define R367TER_RESERVED_1                0xF08B
#define F367TER_RESERVED1                 0xF08B00FF

/* RESERVED_2 */
#define R367TER_RESERVED_2                0xF08C
#define F367TER_RESERVED2                 0xF08C00FF

/* RESERVED_3 */
#define R367TER_RESERVED_3                0xF08D
#define F367TER_RESERVED3                 0xF08D00FF

/* CAS_CTL */
#define R367TER_CAS_CTL                   0xF08E
#define F367TER_CCS_ENABLE                0xF08E0080
#define F367TER_ACS_DISABLE               0xF08E0040
#define F367TER_DAGC_DIS                  0xF08E0020
#define F367TER_DAGC_GAIN                 0xF08E0018
#define F367TER_CCSMU                     0xF08E0007

/* CAS_FREQ */
#define R367TER_CAS_FREQ                  0xF08F
#define F367TER_CCS_FREQ                  0xF08F00FF

/* CAS_DAGCGAIN */
#define R367TER_CAS_DAGCGAIN              0xF090
#define F367TER_CAS_DAGC_GAIN             0xF09000FF

/* SYR_CTL */
#define R367TER_SYR_CTL                   0xF091
#define F367TER_SICTH_ENABLE              0xF0910080
#define F367TER_LONG_ECHO                 0xF0910078
#define F367TER_AUTO_LE_EN                0xF0910004
#define F367TER_SYR_BYPASS                0xF0910002
#define F367TER_SYR_TR_DIS                0xF0910001

/* SYR_STAT */
#define R367TER_SYR_STAT                  0xF092
#define F367TER_SYR_LOCKED_STAT           0xF0920010
#define F367TER_SYR_MODE                  0xF092000C
#define F367TER_SYR_GUARD                 0xF0920003

/* SYR_NCO1 */
#define R367TER_SYR_NCO1                  0xF093
#define F367TER_SYR_NCO_LO                0xF09300FF

/* SYR_NCO2 */
#define R367TER_SYR_NCO2                  0xF094
#define F367TER_SYR_NCO_HI                0xF094003F

/* SYR_OFFSET1 */
#define R367TER_SYR_OFFSET1               0xF095
#define F367TER_SYR_OFFSET_LO             0xF09500FF

/* SYR_OFFSET2 */
#define R367TER_SYR_OFFSET2               0xF096
#define F367TER_SYR_OFFSET_HI             0xF096003F

/* FFT_CTL */
#define R367TER_FFT_CTL                   0xF097
#define F367TER_SHIFT_FFT_TRIG            0xF0970018
#define F367TER_FFT_TRIGGER               0xF0970004
#define F367TER_FFT_MANUAL                0xF0970002
#define F367TER_IFFT_MODE                 0xF0970001

/* SCR_CTL */
#define R367TER_SCR_CTL                   0xF098
#define F367TER_SYRADJDECAY               0xF0980070
#define F367TER_SCR_CPEDIS                0xF0980002
#define F367TER_SCR_DIS                   0xF0980001

/* PPM_CTL1 */
#define R367TER_PPM_CTL1                  0xF099
#define F367TER_PPM_MAXFREQ               0xF0990030
#define F367TER_PPM_MAXTIM                0xF0990008
#define F367TER_PPM_INVSEL                0xF0990004
#define F367TER_PPM_SCATDIS               0xF0990002
#define F367TER_PPM_BYP                   0xF0990001

/* TRL_CTL */
#define R367TER_TRL_CTL                   0xF09A
#define F367TER_TRL_NOMRATE_LSB           0xF09A0080
#define F367TER_TRL_GAIN_FACTOR           0xF09A0078
#define F367TER_TRL_LOOPGAIN              0xF09A0007

/* TRL_NOMRATE1 */
#define R367TER_TRL_NOMRATE1              0xF09B
#define F367TER_TRL_NOMRATE_LO            0xF09B00FF

/* TRL_NOMRATE2 */
#define R367TER_TRL_NOMRATE2              0xF09C
#define F367TER_TRL_NOMRATE_HI            0xF09C00FF

/* TRL_TIME1 */
#define R367TER_TRL_TIME1                 0xF09D
#define F367TER_TRL_TOFFSET_LO            0xF09D00FF

/* TRL_TIME2 */
#define R367TER_TRL_TIME2                 0xF09E
#define F367TER_TRL_TOFFSET_HI            0xF09E00FF

/* CRL_CTL */
#define R367TER_CRL_CTL                   0xF09F
#define F367TER_CRL_DIS                   0xF09F0080
#define F367TER_CRL_GAIN_FACTOR           0xF09F0078
#define F367TER_CRL_LOOPGAIN              0xF09F0007

/* CRL_FREQ1 */
#define R367TER_CRL_FREQ1                 0xF0A0
#define F367TER_CRL_FOFFSET_LO            0xF0A000FF

/* CRL_FREQ2 */
#define R367TER_CRL_FREQ2                 0xF0A1
#define F367TER_CRL_FOFFSET_HI            0xF0A100FF

/* CRL_FREQ3 */
#define R367TER_CRL_FREQ3                 0xF0A2
#define F367TER_CRL_FOFFSET_VHI           0xF0A200FF

/* TPS_SFRAME_CTL */
#define R367TER_TPS_SFRAME_CTL            0xF0A3
#define F367TER_TPS_SFRAME_SYNC           0xF0A30001

/* CHC_SNR */
#define R367TER_CHC_SNR                   0xF0A4
#define F367TER_CHCSNR                    0xF0A400FF

/* BDI_CTL */
#define R367TER_BDI_CTL                   0xF0A5
#define F367TER_BDI_LPSEL                 0xF0A50002
#define F367TER_BDI_SERIAL                0xF0A50001

/* DMP_CTL */
#define R367TER_DMP_CTL                   0xF0A6
#define F367TER_DMP_SCALING_FACTOR        0xF0A6001E
#define F367TER_DMP_SDDIS                 0xF0A60001

/* TPS_RCVD1 */
#define R367TER_TPS_RCVD1                 0xF0A7
#define F367TER_TPS_CHANGE                0xF0A70040
#define F367TER_BCH_OK                    0xF0A70020
#define F367TER_TPS_SYNC                  0xF0A70010
#define F367TER_TPS_FRAME                 0xF0A70003

/* TPS_RCVD2 */
#define R367TER_TPS_RCVD2                 0xF0A8
#define F367TER_TPS_HIERMODE              0xF0A80070
#define F367TER_TPS_CONST                 0xF0A80003

/* TPS_RCVD3 */
#define R367TER_TPS_RCVD3                 0xF0A9
#define F367TER_TPS_LPCODE                0xF0A90070
#define F367TER_TPS_HPCODE                0xF0A90007

/* TPS_RCVD4 */
#define R367TER_TPS_RCVD4                 0xF0AA
#define F367TER_TPS_GUARD                 0xF0AA0030
#define F367TER_TPS_MODE                  0xF0AA0003

/* TPS_ID_CELL1 */
#define R367TER_TPS_ID_CELL1              0xF0AB
#define F367TER_TPS_ID_CELL_LO            0xF0AB00FF

/* TPS_ID_CELL2 */
#define R367TER_TPS_ID_CELL2              0xF0AC
#define F367TER_TPS_ID_CELL_HI            0xF0AC00FF

/* TPS_RCVD5_SET1 */
#define R367TER_TPS_RCVD5_SET1            0xF0AD
#define F367TER_TPS_NA                    0xF0AD00FC
#define F367TER_TPS_SETFRAME              0xF0AD0003

/* TPS_SET2 */
#define R367TER_TPS_SET2                  0xF0AE
#define F367TER_TPS_SETHIERMODE           0xF0AE0070
#define F367TER_TPS_SETCONST              0xF0AE0003

/* TPS_SET3 */
#define R367TER_TPS_SET3                  0xF0AF
#define F367TER_TPS_SETLPCODE             0xF0AF0070
#define F367TER_TPS_SETHPCODE             0xF0AF0007

/* TPS_CTL */
#define R367TER_TPS_CTL                   0xF0B0
#define F367TER_TPS_IMM                   0xF0B00004
#define F367TER_TPS_BCHDIS                0xF0B00002
#define F367TER_TPS_UPDDIS                0xF0B00001

/* CTL_FFTOSNUM */
#define R367TER_CTL_FFTOSNUM              0xF0B1
#define F367TER_SYMBOL_NUMBER             0xF0B1007F

/* TESTSELECT */
#define R367TER_TESTSELECT                0xF0B2
#define F367TER_TEST_SELECT               0xF0B2001F

/* MSC_REV */
#define R367TER_MSC_REV                   0xF0B3
#define F367TER_REV_NUMBER                0xF0B300FF

/* PIR_CTL */
#define R367TER_PIR_CTL                   0xF0B4
#define F367TER_FREEZE                    0xF0B40001

/* SNR_CARRIER1 */
#define R367TER_SNR_CARRIER1              0xF0B5
#define F367TER_SNR_CARRIER_LO            0xF0B500FF

/* SNR_CARRIER2 */
#define R367TER_SNR_CARRIER2              0xF0B6
#define F367TER_MEAN                      0xF0B600C0
#define F367TER_SNR_CARRIER_HI            0xF0B6001F

/* PPM_CPAMP */
#define R367TER_PPM_CPAMP                 0xF0B7
#define F367TER_PPM_CPC                   0xF0B700FF

/* TSM_AP0 */
#define R367TER_TSM_AP0                   0xF0B8
#define F367TER_ADDRESS_BYTE_0            0xF0B800FF

/* TSM_AP1 */
#define R367TER_TSM_AP1                   0xF0B9
#define F367TER_ADDRESS_BYTE_1            0xF0B900FF

/* TSM_AP2 */
#define R367TER_TSM_AP2                   0xF0BA
#define F367TER_DATA_BYTE_0               0xF0BA00FF

/* TSM_AP3 */
#define R367TER_TSM_AP3                   0xF0BB
#define F367TER_DATA_BYTE_1               0xF0BB00FF

/* TSM_AP4 */
#define R367TER_TSM_AP4                   0xF0BC
#define F367TER_DATA_BYTE_2               0xF0BC00FF

/* TSM_AP5 */
#define R367TER_TSM_AP5                   0xF0BD
#define F367TER_DATA_BYTE_3               0xF0BD00FF

/* TSM_AP6 */
#define R367TER_TSM_AP6                   0xF0BE
#define F367TER_TSM_AP_6                  0xF0BE00FF

/* TSM_AP7 */
#define R367TER_TSM_AP7                   0xF0BF
#define F367TER_MEM_SELECT_BYTE           0xF0BF00FF

/* TSTRES */
#define R367_TSTRES                        0xF0C0
#define F367_FRES_DISPLAY                  0xF0C00080
#define F367_FRES_FIFO_AD                  0xF0C00020
#define F367_FRESRS                        0xF0C00010
#define F367_FRESACS                       0xF0C00008
#define F367_FRESFEC                       0xF0C00004
#define F367_FRES_PRIF                     0xF0C00002
#define F367_FRESCORE                      0xF0C00001

/* ANACTRL */
#define R367_ANACTRL                       0xF0C1
#define F367_BYPASS_XTAL                   0xF0C10040
#define F367_BYPASS_PLLXN                  0xF0C1000C
#define F367_DIS_PAD_OSC                   0xF0C10002
#define F367_STDBY_PLLXN                   0xF0C10001

/* TSTBUS */
#define R367_TSTBUS                        0xF0C2
#define F367_TS_BYTE_CLK_INV               0xF0C20080
#define F367_CFG_IP                        0xF0C20070
#define F367_CFG_TST                       0xF0C2000F

/* TSTRATE */
#define R367TER_TSTRATE                   0xF0C6
#define F367TER_FORCEPHA                  0xF0C60080
#define F367TER_FNEWPHA                   0xF0C60010
#define F367TER_FROT90                    0xF0C60008
#define F367TER_FR                        0xF0C60007

/* CONSTMODE */
#define R367TER_CONSTMODE                 0xF0CB
#define F367TER_TST_PRIF                  0xF0CB00E0
#define F367TER_CAR_TYPE                  0xF0CB0018
#define F367TER_CONST_MODE                0xF0CB0003

/* CONSTCARR1 */
#define R367TER_CONSTCARR1                0xF0CC
#define F367TER_CONST_CARR_LO             0xF0CC00FF

/* CONSTCARR2 */
#define R367TER_CONSTCARR2                0xF0CD
#define F367TER_CONST_CARR_HI             0xF0CD001F

/* ICONSTEL */
#define R367TER_ICONSTEL                  0xF0CE
#define F367TER_PICONSTEL                 0xF0CE00FF

/* QCONSTEL */
#define R367TER_QCONSTEL                  0xF0CF
#define F367TER_PQCONSTEL                 0xF0CF00FF

/* TSTBISTRES0 */
#define R367TER_TSTBISTRES0               0xF0D0
#define F367TER_BEND_PPM                  0xF0D00080
#define F367TER_BBAD_PPM                  0xF0D00040
#define F367TER_BEND_FFTW                 0xF0D00020
#define F367TER_BBAD_FFTW                 0xF0D00010
#define F367TER_BEND_FFT_BUF              0xF0D00008
#define F367TER_BBAD_FFT_BUF              0xF0D00004
#define F367TER_BEND_SYR                  0xF0D00002
#define F367TER_BBAD_SYR                  0xF0D00001

/* TSTBISTRES1 */
#define R367TER_TSTBISTRES1               0xF0D1
#define F367TER_BEND_CHC_CP               0xF0D10080
#define F367TER_BBAD_CHC_CP               0xF0D10040
#define F367TER_BEND_CHCI                 0xF0D10020
#define F367TER_BBAD_CHCI                 0xF0D10010
#define F367TER_BEND_BDI                  0xF0D10008
#define F367TER_BBAD_BDI                  0xF0D10004
#define F367TER_BEND_SDI                  0xF0D10002
#define F367TER_BBAD_SDI                  0xF0D10001

/* TSTBISTRES2 */
#define R367TER_TSTBISTRES2               0xF0D2
#define F367TER_BEND_CHC_INC              0xF0D20080
#define F367TER_BBAD_CHC_INC              0xF0D20040
#define F367TER_BEND_CHC_SPP              0xF0D20020
#define F367TER_BBAD_CHC_SPP              0xF0D20010
#define F367TER_BEND_CHC_CPP              0xF0D20008
#define F367TER_BBAD_CHC_CPP              0xF0D20004
#define F367TER_BEND_CHC_SP               0xF0D20002
#define F367TER_BBAD_CHC_SP               0xF0D20001

/* TSTBISTRES3 */
#define R367TER_TSTBISTRES3               0xF0D3
#define F367TER_BEND_QAM                  0xF0D30080
#define F367TER_BBAD_QAM                  0xF0D30040
#define F367TER_BEND_SFEC_VIT             0xF0D30020
#define F367TER_BBAD_SFEC_VIT             0xF0D30010
#define F367TER_BEND_SFEC_DLINE           0xF0D30008
#define F367TER_BBAD_SFEC_DLINE           0xF0D30004
#define F367TER_BEND_SFEC_HW              0xF0D30002
#define F367TER_BBAD_SFEC_HW              0xF0D30001

/* RF_AGC1 */
#define R367_RF_AGC1                       0xF0D4
#define F367_RF_AGC1_LEVEL_HI              0xF0D400FF

/* RF_AGC2 */
#define R367_RF_AGC2                       0xF0D5
#define F367_REF_ADGP                      0xF0D50080
#define F367_STDBY_ADCGP                   0xF0D50020
#define F367_CHANNEL_SEL                   0xF0D5001C
#define F367_RF_AGC1_LEVEL_LO              0xF0D50003

/* ANADIGCTRL */
#define R367_ANADIGCTRL                    0xF0D7
#define F367_SEL_CLKDEM                    0xF0D70020
#define F367_EN_BUFFER_Q                   0xF0D70010
#define F367_EN_BUFFER_I                   0xF0D70008
#define F367_ADC_RIS_EGDE                  0xF0D70004
#define F367_SGN_ADC                       0xF0D70002
#define F367_SEL_AD12_SYNC                 0xF0D70001

/* PLLMDIV */
#define R367_PLLMDIV                       0xF0D8
#define F367_PLL_MDIV                      0xF0D800FF

/* PLLNDIV */
#define R367_PLLNDIV                       0xF0D9
#define F367_PLL_NDIV                      0xF0D900FF

/* PLLSETUP */
#define R367_PLLSETUP                      0xF0DA
#define F367_PLL_PDIV                      0xF0DA0070
#define F367_PLL_KDIV                      0xF0DA000F

/* DUAL_AD12 */
#define R367_DUAL_AD12                     0xF0DB
#define F367_FS20M                         0xF0DB0020
#define F367_FS50M                         0xF0DB0010
#define F367_INMODE0                       0xF0DB0008
#define F367_POFFQ                         0xF0DB0004
#define F367_POFFI                         0xF0DB0002
#define F367_INMODE1                       0xF0DB0001

/* TSTBIST */
#define R367_TSTBIST                       0xF0DC
#define F367_TST_BYP_CLK                   0xF0DC0080
#define F367_TST_GCLKENA_STD               0xF0DC0040
#define F367_TST_GCLKENA                   0xF0DC0020
#define F367_TST_MEMBIST                   0xF0DC001F

/* PAD_COMP_CTRL */
#define R367TER_PAD_COMP_CTRL             0xF0DD
#define F367TER_COMPTQ                    0xF0DD0010
#define F367TER_COMPEN                    0xF0DD0008
#define F367TER_FREEZE2                   0xF0DD0004
#define F367TER_SLEEP_INHBT               0xF0DD0002
#define F367TER_CHIP_SLEEP                0xF0DD0001

/* PAD_COMP_WR */
#define R367TER_PAD_COMP_WR               0xF0DE
#define F367TER_WR_ASRC                   0xF0DE007F

/* PAD_COMP_RD */
#define R367TER_PAD_COMP_RD               0xF0DF
#define F367TER_COMPOK                    0xF0DF0080
#define F367TER_RD_ASRC                   0xF0DF007F

/* SYR_TARGET_FFTADJT_MSB */
#define R367TER_SYR_TARGET_FFTADJT_MSB    0xF100
#define F367TER_SYR_START                 0xF1000080
#define F367TER_SYR_TARGET_FFTADJ_HI      0xF100000F

/* SYR_TARGET_FFTADJT_LSB */
#define R367TER_SYR_TARGET_FFTADJT_LSB    0xF101
#define F367TER_SYR_TARGET_FFTADJ_LO      0xF10100FF

/* SYR_TARGET_CHCADJT_MSB */
#define R367TER_SYR_TARGET_CHCADJT_MSB    0xF102
#define F367TER_SYR_TARGET_CHCADJ_HI      0xF102000F

/* SYR_TARGET_CHCADJT_LSB */
#define R367TER_SYR_TARGET_CHCADJT_LSB    0xF103
#define F367TER_SYR_TARGET_CHCADJ_LO      0xF10300FF

/* SYR_FLAG */
#define R367TER_SYR_FLAG                  0xF104
#define F367TER_TRIG_FLG1                 0xF1040080
#define F367TER_TRIG_FLG0                 0xF1040040
#define F367TER_FFT_FLG1                  0xF1040008
#define F367TER_FFT_FLG0                  0xF1040004
#define F367TER_CHC_FLG1                  0xF1040002
#define F367TER_CHC_FLG0                  0xF1040001

/* CRL_TARGET1 */
#define R367TER_CRL_TARGET1               0xF105
#define F367TER_CRL_START                 0xF1050080
#define F367TER_CRL_TARGET_VHI            0xF105000F

/* CRL_TARGET2 */
#define R367TER_CRL_TARGET2               0xF106
#define F367TER_CRL_TARGET_HI             0xF10600FF

/* CRL_TARGET3 */
#define R367TER_CRL_TARGET3               0xF107
#define F367TER_CRL_TARGET_LO             0xF10700FF

/* CRL_TARGET4 */
#define R367TER_CRL_TARGET4               0xF108
#define F367TER_CRL_TARGET_VLO            0xF10800FF

/* CRL_FLAG */
#define R367TER_CRL_FLAG                  0xF109
#define F367TER_CRL_FLAG1                 0xF1090002
#define F367TER_CRL_FLAG0                 0xF1090001

/* TRL_TARGET1 */
#define R367TER_TRL_TARGET1               0xF10A
#define F367TER_TRL_TARGET_HI             0xF10A00FF

/* TRL_TARGET2 */
#define R367TER_TRL_TARGET2               0xF10B
#define F367TER_TRL_TARGET_LO             0xF10B00FF

/* TRL_CHC */
#define R367TER_TRL_CHC                   0xF10C
#define F367TER_TRL_START                 0xF10C0080
#define F367TER_CHC_START                 0xF10C0040
#define F367TER_TRL_FLAG1                 0xF10C0002
#define F367TER_TRL_FLAG0                 0xF10C0001

/* CHC_SNR_TARG */
#define R367TER_CHC_SNR_TARG              0xF10D
#define F367TER_CHC_SNR_TARGET            0xF10D00FF

/* TOP_TRACK */
#define R367TER_TOP_TRACK                 0xF10E
#define F367TER_TOP_START                 0xF10E0080
#define F367TER_FIRST_FLAG                0xF10E0070
#define F367TER_TOP_FLAG1                 0xF10E0008
#define F367TER_TOP_FLAG0                 0xF10E0004
#define F367TER_CHC_FLAG1                 0xF10E0002
#define F367TER_CHC_FLAG0                 0xF10E0001

/* TRACKER_FREE1 */
#define R367TER_TRACKER_FREE1             0xF10F
#define F367TER_TRACKER_FREE_1            0xF10F00FF

/* ERROR_CRL1 */
#define R367TER_ERROR_CRL1                0xF110
#define F367TER_ERROR_CRL_VHI             0xF11000FF

/* ERROR_CRL2 */
#define R367TER_ERROR_CRL2                0xF111
#define F367TER_ERROR_CRL_HI              0xF11100FF

/* ERROR_CRL3 */
#define R367TER_ERROR_CRL3                0xF112
#define F367TER_ERROR_CRL_LOI             0xF11200FF

/* ERROR_CRL4 */
#define R367TER_ERROR_CRL4                0xF113
#define F367TER_ERROR_CRL_VLO             0xF11300FF

/* DEC_NCO1 */
#define R367TER_DEC_NCO1                  0xF114
#define F367TER_DEC_NCO_VHI               0xF11400FF

/* DEC_NCO2 */
#define R367TER_DEC_NCO2                  0xF115
#define F367TER_DEC_NCO_HI                0xF11500FF

/* DEC_NCO3 */
#define R367TER_DEC_NCO3                  0xF116
#define F367TER_DEC_NCO_LO                0xF11600FF

/* SNR */
#define R367TER_SNR                       0xF117
#define F367TER_SNRATIO                   0xF11700FF

/* SYR_FFTADJ1 */
#define R367TER_SYR_FFTADJ1               0xF118
#define F367TER_SYR_FFTADJ_HI             0xF11800FF

/* SYR_FFTADJ2 */
#define R367TER_SYR_FFTADJ2               0xF119
#define F367TER_SYR_FFTADJ_LO             0xF11900FF

/* SYR_CHCADJ1 */
#define R367TER_SYR_CHCADJ1               0xF11A
#define F367TER_SYR_CHCADJ_HI             0xF11A00FF

/* SYR_CHCADJ2 */
#define R367TER_SYR_CHCADJ2               0xF11B
#define F367TER_SYR_CHCADJ_LO             0xF11B00FF

/* SYR_OFF */
#define R367TER_SYR_OFF                   0xF11C
#define F367TER_SYR_OFFSET                0xF11C00FF

/* PPM_OFFSET1 */
#define R367TER_PPM_OFFSET1               0xF11D
#define F367TER_PPM_OFFSET_HI             0xF11D00FF

/* PPM_OFFSET2 */
#define R367TER_PPM_OFFSET2               0xF11E
#define F367TER_PPM_OFFSET_LO             0xF11E00FF

/* TRACKER_FREE2 */
#define R367TER_TRACKER_FREE2             0xF11F
#define F367TER_TRACKER_FREE_2            0xF11F00FF

/* DEBG_LT10 */
#define R367TER_DEBG_LT10                 0xF120
#define F367TER_DEBUG_LT10                0xF12000FF

/* DEBG_LT11 */
#define R367TER_DEBG_LT11                 0xF121
#define F367TER_DEBUG_LT11                0xF12100FF

/* DEBG_LT12 */
#define R367TER_DEBG_LT12                 0xF122
#define F367TER_DEBUG_LT12                0xF12200FF

/* DEBG_LT13 */
#define R367TER_DEBG_LT13                 0xF123
#define F367TER_DEBUG_LT13                0xF12300FF

/* DEBG_LT14 */
#define R367TER_DEBG_LT14                 0xF124
#define F367TER_DEBUG_LT14                0xF12400FF

/* DEBG_LT15 */
#define R367TER_DEBG_LT15                 0xF125
#define F367TER_DEBUG_LT15                0xF12500FF

/* DEBG_LT16 */
#define R367TER_DEBG_LT16                 0xF126
#define F367TER_DEBUG_LT16                0xF12600FF

/* DEBG_LT17 */
#define R367TER_DEBG_LT17                 0xF127
#define F367TER_DEBUG_LT17                0xF12700FF

/* DEBG_LT18 */
#define R367TER_DEBG_LT18                 0xF128
#define F367TER_DEBUG_LT18                0xF12800FF

/* DEBG_LT19 */
#define R367TER_DEBG_LT19                 0xF129
#define F367TER_DEBUG_LT19                0xF12900FF

/* DEBG_LT1A */
#define R367TER_DEBG_LT1A                 0xF12A
#define F367TER_DEBUG_LT1A                0xF12A00FF

/* DEBG_LT1B */
#define R367TER_DEBG_LT1B                 0xF12B
#define F367TER_DEBUG_LT1B                0xF12B00FF

/* DEBG_LT1C */
#define R367TER_DEBG_LT1C                 0xF12C
#define F367TER_DEBUG_LT1C                0xF12C00FF

/* DEBG_LT1D */
#define R367TER_DEBG_LT1D                 0xF12D
#define F367TER_DEBUG_LT1D                0xF12D00FF

/* DEBG_LT1E */
#define R367TER_DEBG_LT1E                 0xF12E
#define F367TER_DEBUG_LT1E                0xF12E00FF

/* DEBG_LT1F */
#define R367TER_DEBG_LT1F                 0xF12F
#define F367TER_DEBUG_LT1F                0xF12F00FF

/* RCCFGH */
#define R367TER_RCCFGH                    0xF200
#define F367TER_TSRCFIFO_DVBCI            0xF2000080
#define F367TER_TSRCFIFO_SERIAL           0xF2000040
#define F367TER_TSRCFIFO_DISABLE          0xF2000020
#define F367TER_TSFIFO_2TORC              0xF2000010
#define F367TER_TSRCFIFO_HSGNLOUT         0xF2000008
#define F367TER_TSRCFIFO_ERRMODE          0xF2000006
#define F367TER_RCCFGH_0                  0xF2000001

/* RCCFGM */
#define R367TER_RCCFGM                    0xF201
#define F367TER_TSRCFIFO_MANSPEED         0xF20100C0
#define F367TER_TSRCFIFO_PERMDATA         0xF2010020
#define F367TER_TSRCFIFO_NONEWSGNL        0xF2010010
#define F367TER_RCBYTE_OVERSAMPLING       0xF201000E
#define F367TER_TSRCFIFO_INVDATA          0xF2010001

/* RCCFGL */
#define R367TER_RCCFGL                    0xF202
#define F367TER_TSRCFIFO_BCLKDEL1CK       0xF20200C0
#define F367TER_RCCFGL_5                  0xF2020020
#define F367TER_TSRCFIFO_DUTY50           0xF2020010
#define F367TER_TSRCFIFO_NSGNL2DATA       0xF2020008
#define F367TER_TSRCFIFO_DISSERMUX        0xF2020004
#define F367TER_RCCFGL_1                  0xF2020002
#define F367TER_TSRCFIFO_STOPCKDIS        0xF2020001

/* RCINSDELH */
#define R367TER_RCINSDELH                 0xF203
#define F367TER_TSRCDEL_SYNCBYTE          0xF2030080
#define F367TER_TSRCDEL_XXHEADER          0xF2030040
#define F367TER_TSRCDEL_BBHEADER          0xF2030020
#define F367TER_TSRCDEL_DATAFIELD         0xF2030010
#define F367TER_TSRCINSDEL_ISCR           0xF2030008
#define F367TER_TSRCINSDEL_NPD            0xF2030004
#define F367TER_TSRCINSDEL_RSPARITY       0xF2030002
#define F367TER_TSRCINSDEL_CRC8           0xF2030001

/* RCINSDELM */
#define R367TER_RCINSDELM                 0xF204
#define F367TER_TSRCINS_BBPADDING         0xF2040080
#define F367TER_TSRCINS_BCHFEC            0xF2040040
#define F367TER_TSRCINS_LDPCFEC           0xF2040020
#define F367TER_TSRCINS_EMODCOD           0xF2040010
#define F367TER_TSRCINS_TOKEN             0xF2040008
#define F367TER_TSRCINS_XXXERR            0xF2040004
#define F367TER_TSRCINS_MATYPE            0xF2040002
#define F367TER_TSRCINS_UPL               0xF2040001

/* RCINSDELL */
#define R367TER_RCINSDELL                 0xF205
#define F367TER_TSRCINS_DFL               0xF2050080
#define F367TER_TSRCINS_SYNCD             0xF2050040
#define F367TER_TSRCINS_BLOCLEN           0xF2050020
#define F367TER_TSRCINS_SIGPCOUNT         0xF2050010
#define F367TER_TSRCINS_FIFO              0xF2050008
#define F367TER_TSRCINS_REALPACK          0xF2050004
#define F367TER_TSRCINS_TSCONFIG          0xF2050002
#define F367TER_TSRCINS_LATENCY           0xF2050001

/* RCSTATUS */
#define R367TER_RCSTATUS                  0xF206
#define F367TER_TSRCFIFO_LINEOK           0xF2060080
#define F367TER_TSRCFIFO_ERROR            0xF2060040
#define F367TER_TSRCFIFO_DATA7            0xF2060020
#define F367TER_RCSTATUS_4                0xF2060010
#define F367TER_TSRCFIFO_DEMODSEL         0xF2060008
#define F367TER_TSRC1FIFOSPEED_STORE      0xF2060004
#define F367TER_RCSTATUS_1                0xF2060002
#define F367TER_TSRCSERIAL_IMPOSSIBLE     0xF2060001

/* RCSPEED */
#define R367TER_RCSPEED                   0xF207
#define F367TER_TSRCFIFO_OUTSPEED         0xF20700FF

/* RCDEBUGM */
#define R367TER_RCDEBUGM                  0xF208
#define F367TER_SD_UNSYNC                 0xF2080080
#define F367TER_ULFLOCK_DETECTM           0xF2080040
#define F367TER_SUL_SELECTOS              0xF2080020
#define F367TER_DILUL_NOSCRBLE            0xF2080010
#define F367TER_NUL_SCRB                  0xF2080008
#define F367TER_UL_SCRB                   0xF2080004
#define F367TER_SCRAULBAD                 0xF2080002
#define F367TER_SCRAUL_UNSYNC             0xF2080001

/* RCDEBUGL */
#define R367TER_RCDEBUGL                  0xF209
#define F367TER_RS_ERR                    0xF2090080
#define F367TER_LLFLOCK_DETECTM           0xF2090040
#define F367TER_NOT_SUL_SELECTOS          0xF2090020
#define F367TER_DILLL_NOSCRBLE            0xF2090010
#define F367TER_NLL_SCRB                  0xF2090008
#define F367TER_LL_SCRB                   0xF2090004
#define F367TER_SCRALLBAD                 0xF2090002
#define F367TER_SCRALL_UNSYNC             0xF2090001

/* RCOBSCFG */
#define R367TER_RCOBSCFG                  0xF20A
#define F367TER_TSRCFIFO_OBSCFG           0xF20A00FF

/* RCOBSM */
#define R367TER_RCOBSM                    0xF20B
#define F367TER_TSRCFIFO_OBSDATA_HI       0xF20B00FF

/* RCOBSL */
#define R367TER_RCOBSL                    0xF20C
#define F367TER_TSRCFIFO_OBSDATA_LO       0xF20C00FF

/* RCFECSPY */
#define R367TER_RCFECSPY                  0xF210
#define F367TER_SPYRC_ENABLE              0xF2100080
#define F367TER_RCNO_SYNCBYTE             0xF2100040
#define F367TER_RCSERIAL_MODE             0xF2100020
#define F367TER_RCUNUSUAL_PACKET          0xF2100010
#define F367TER_BERRCMETER_DATAMODE       0xF210000C
#define F367TER_BERRCMETER_LMODE          0xF2100002
#define F367TER_BERRCMETER_RESET          0xF2100001

/* RCFSPYCFG */
#define R367TER_RCFSPYCFG                 0xF211
#define F367TER_FECSPYRC_INPUT            0xF21100C0
#define F367TER_RCRST_ON_ERROR            0xF2110020
#define F367TER_RCONE_SHOT                0xF2110010
#define F367TER_RCI2C_MODE                0xF211000C
#define F367TER_SPYRC_HSTERESIS           0xF2110003

/* RCFSPYDATA */
#define R367TER_RCFSPYDATA                0xF212
#define F367TER_SPYRC_STUFFING            0xF2120080
#define F367TER_RCNOERR_PKTJITTER         0xF2120040
#define F367TER_SPYRC_CNULLPKT            0xF2120020
#define F367TER_SPYRC_OUTDATA_MODE        0xF212001F

/* RCFSPYOUT */
#define R367TER_RCFSPYOUT                 0xF213
#define F367TER_FSPYRC_DIRECT             0xF2130080
#define F367TER_RCFSPYOUT_6               0xF2130040
#define F367TER_SPYRC_OUTDATA_BUS         0xF2130038
#define F367TER_RCSTUFF_MODE              0xF2130007

/* RCFSTATUS */
#define R367TER_RCFSTATUS                 0xF214
#define F367TER_SPYRC_ENDSIM              0xF2140080
#define F367TER_RCVALID_SIM               0xF2140040
#define F367TER_RCFOUND_SIGNAL            0xF2140020
#define F367TER_RCDSS_SYNCBYTE            0xF2140010
#define F367TER_RCRESULT_STATE            0xF214000F

/* RCFGOODPACK */
#define R367TER_RCFGOODPACK               0xF215
#define F367TER_RCGOOD_PACKET             0xF21500FF

/* RCFPACKCNT */
#define R367TER_RCFPACKCNT                0xF216
#define F367TER_RCPACKET_COUNTER          0xF21600FF

/* RCFSPYMISC */
#define R367TER_RCFSPYMISC                0xF217
#define F367TER_RCLABEL_COUNTER           0xF21700FF

/* RCFBERCPT4 */
#define R367TER_RCFBERCPT4                0xF218
#define F367TER_FBERRCMETER_CPT_MMMMSB    0xF21800FF

/* RCFBERCPT3 */
#define R367TER_RCFBERCPT3                0xF219
#define F367TER_FBERRCMETER_CPT_MMMSB     0xF21900FF

/* RCFBERCPT2 */
#define R367TER_RCFBERCPT2                0xF21A
#define F367TER_FBERRCMETER_CPT_MMSB      0xF21A00FF

/* RCFBERCPT1 */
#define R367TER_RCFBERCPT1                0xF21B
#define F367TER_FBERRCMETER_CPT_MSB       0xF21B00FF

/* RCFBERCPT0 */
#define R367TER_RCFBERCPT0                0xF21C
#define F367TER_FBERRCMETER_CPT_LSB       0xF21C00FF

/* RCFBERERR2 */
#define R367TER_RCFBERERR2                0xF21D
#define F367TER_FBERRCMETER_ERR_HI        0xF21D00FF

/* RCFBERERR1 */
#define R367TER_RCFBERERR1                0xF21E
#define F367TER_FBERRCMETER_ERR           0xF21E00FF

/* RCFBERERR0 */
#define R367TER_RCFBERERR0                0xF21F
#define F367TER_FBERRCMETER_ERR_LO        0xF21F00FF

/* RCFSTATESM */
#define R367TER_RCFSTATESM                0xF220
#define F367TER_RCRSTATE_F                0xF2200080
#define F367TER_RCRSTATE_E                0xF2200040
#define F367TER_RCRSTATE_D                0xF2200020
#define F367TER_RCRSTATE_C                0xF2200010
#define F367TER_RCRSTATE_B                0xF2200008
#define F367TER_RCRSTATE_A                0xF2200004
#define F367TER_RCRSTATE_9                0xF2200002
#define F367TER_RCRSTATE_8                0xF2200001

/* RCFSTATESL */
#define R367TER_RCFSTATESL                0xF221
#define F367TER_RCRSTATE_7                0xF2210080
#define F367TER_RCRSTATE_6                0xF2210040
#define F367TER_RCRSTATE_5                0xF2210020
#define F367TER_RCRSTATE_4                0xF2210010
#define F367TER_RCRSTATE_3                0xF2210008
#define F367TER_RCRSTATE_2                0xF2210004
#define F367TER_RCRSTATE_1                0xF2210002
#define F367TER_RCRSTATE_0                0xF2210001

/* RCFSPYBER */
#define R367TER_RCFSPYBER                 0xF222
#define F367TER_RCFSPYBER_7               0xF2220080
#define F367TER_SPYRCOBS_XORREAD          0xF2220040
#define F367TER_FSPYRCBER_OBSMODE         0xF2220020
#define F367TER_FSPYRCBER_SYNCBYT         0xF2220010
#define F367TER_FSPYRCBER_UNSYNC          0xF2220008
#define F367TER_FSPYRCBER_CTIME           0xF2220007

/* RCFSPYDISTM */
#define R367TER_RCFSPYDISTM               0xF223
#define F367TER_RCPKTTIME_DISTANCE_HI     0xF22300FF

/* RCFSPYDISTL */
#define R367TER_RCFSPYDISTL               0xF224
#define F367TER_RCPKTTIME_DISTANCE_LO     0xF22400FF

/* RCFSPYOBS7 */
#define R367TER_RCFSPYOBS7                0xF228
#define F367TER_RCSPYOBS_SPYFAIL          0xF2280080
#define F367TER_RCSPYOBS_SPYFAIL1         0xF2280040
#define F367TER_RCSPYOBS_ERROR            0xF2280020
#define F367TER_RCSPYOBS_STROUT           0xF2280010
#define F367TER_RCSPYOBS_RESULTSTATE1     0xF228000F

/* RCFSPYOBS6 */
#define R367TER_RCFSPYOBS6                0xF229
#define F367TER_RCSPYOBS_RESULTSTATE0     0xF22900F0
#define F367TER_RCSPYOBS_RESULTSTATEM1    0xF229000F

/* RCFSPYOBS5 */
#define R367TER_RCFSPYOBS5                0xF22A
#define F367TER_RCSPYOBS_BYTEOFPACKET1    0xF22A00FF

/* RCFSPYOBS4 */
#define R367TER_RCFSPYOBS4                0xF22B
#define F367TER_RCSPYOBS_BYTEVALUE1       0xF22B00FF

/* RCFSPYOBS3 */
#define R367TER_RCFSPYOBS3                0xF22C
#define F367TER_RCSPYOBS_DATA1            0xF22C00FF

/* RCFSPYOBS2 */
#define R367TER_RCFSPYOBS2                0xF22D
#define F367TER_RCSPYOBS_DATA0            0xF22D00FF

/* RCFSPYOBS1 */
#define R367TER_RCFSPYOBS1                0xF22E
#define F367TER_RCSPYOBS_DATAM1           0xF22E00FF

/* RCFSPYOBS0 */
#define R367TER_RCFSPYOBS0                0xF22F
#define F367TER_RCSPYOBS_DATAM2           0xF22F00FF

/* TSGENERAL */
#define R367TER_TSGENERAL                 0xF230
#define F367TER_TSGENERAL_7               0xF2300080
#define F367TER_TSGENERAL_6               0xF2300040
#define F367TER_TSFIFO_BCLK1ALL           0xF2300020
#define F367TER_TSGENERAL_4               0xF2300010
#define F367TER_MUXSTREAM_OUTMODE         0xF2300008
#define F367TER_TSFIFO_PERMPARAL          0xF2300006
#define F367TER_RST_REEDSOLO              0xF2300001

/* RC1SPEED */
#define R367TER_RC1SPEED                  0xF231
#define F367TER_TSRCFIFO1_OUTSPEED        0xF23100FF

/* TSGSTATUS */
#define R367TER_TSGSTATUS                 0xF232
#define F367TER_TSGSTATUS_7               0xF2320080
#define F367TER_TSGSTATUS_6               0xF2320040
#define F367TER_RSMEM_FULL                0xF2320020
#define F367TER_RS_MULTCALC               0xF2320010
#define F367TER_RSIN_OVERTIME             0xF2320008
#define F367TER_TSFIFO3_DEMODSEL          0xF2320004
#define F367TER_TSFIFO2_DEMODSEL          0xF2320002
#define F367TER_TSFIFO1_DEMODSEL          0xF2320001

/* FECM */
#define R367TER_FECM                      0xF233
#define F367TER_DSS_DVB                   0xF2330080
#define F367TER_DEMOD_BYPASS              0xF2330040
#define F367TER_CMP_SLOWMODE              0xF2330020
#define F367TER_DSS_SRCH                  0xF2330010
#define F367TER_FECM_3                    0xF2330008
#define F367TER_DIFF_MODEVIT              0xF2330004
#define F367TER_SYNCVIT                   0xF2330002
#define F367TER_I2CSYM                    0xF2330001

/* VTH12 */
#define R367TER_VTH12                     0xF234
#define F367TER_VTH_12                    0xF23400FF

/* VTH23 */
#define R367TER_VTH23                     0xF235
#define F367TER_VTH_23                    0xF23500FF

/* VTH34 */
#define R367TER_VTH34                     0xF236
#define F367TER_VTH_34                    0xF23600FF

/* VTH56 */
#define R367TER_VTH56                     0xF237
#define F367TER_VTH_56                    0xF23700FF

/* VTH67 */
#define R367TER_VTH67                     0xF238
#define F367TER_VTH_67                    0xF23800FF

/* VTH78 */
#define R367TER_VTH78                     0xF239
#define F367TER_VTH_78                    0xF23900FF

/* VITCURPUN */
#define R367TER_VITCURPUN                 0xF23A
#define F367TER_VIT_MAPPING               0xF23A00E0
#define F367TER_VIT_CURPUN                0xF23A001F

/* VERROR */
#define R367TER_VERROR                    0xF23B
#define F367TER_REGERR_VIT                0xF23B00FF

/* PRVIT */
#define R367TER_PRVIT                     0xF23C
#define F367TER_PRVIT_7                   0xF23C0080
#define F367TER_DIS_VTHLOCK               0xF23C0040
#define F367TER_E7_8VIT                   0xF23C0020
#define F367TER_E6_7VIT                   0xF23C0010
#define F367TER_E5_6VIT                   0xF23C0008
#define F367TER_E3_4VIT                   0xF23C0004
#define F367TER_E2_3VIT                   0xF23C0002
#define F367TER_E1_2VIT                   0xF23C0001

/* VAVSRVIT */
#define R367TER_VAVSRVIT                  0xF23D
#define F367TER_AMVIT                     0xF23D0080
#define F367TER_FROZENVIT                 0xF23D0040
#define F367TER_SNVIT                     0xF23D0030
#define F367TER_TOVVIT                    0xF23D000C
#define F367TER_HYPVIT                    0xF23D0003

/* VSTATUSVIT */
#define R367TER_VSTATUSVIT                0xF23E
#define F367TER_VITERBI_ON                0xF23E0080
#define F367TER_END_LOOPVIT               0xF23E0040
#define F367TER_VITERBI_DEPRF             0xF23E0020
#define F367TER_PRFVIT                    0xF23E0010
#define F367TER_LOCKEDVIT                 0xF23E0008
#define F367TER_VITERBI_DELOCK            0xF23E0004
#define F367TER_VIT_DEMODSEL              0xF23E0002
#define F367TER_VITERBI_COMPOUT           0xF23E0001

/* VTHINUSE */
#define R367TER_VTHINUSE                  0xF23F
#define F367TER_VIT_INUSE                 0xF23F00FF

/* KDIV12 */
#define R367TER_KDIV12                    0xF240
#define F367TER_KDIV12_MANUAL             0xF2400080
#define F367TER_K_DIVIDER_12              0xF240007F

/* KDIV23 */
#define R367TER_KDIV23                    0xF241
#define F367TER_KDIV23_MANUAL             0xF2410080
#define F367TER_K_DIVIDER_23              0xF241007F

/* KDIV34 */
#define R367TER_KDIV34                    0xF242
#define F367TER_KDIV34_MANUAL             0xF2420080
#define F367TER_K_DIVIDER_34              0xF242007F

/* KDIV56 */
#define R367TER_KDIV56                    0xF243
#define F367TER_KDIV56_MANUAL             0xF2430080
#define F367TER_K_DIVIDER_56              0xF243007F

/* KDIV67 */
#define R367TER_KDIV67                    0xF244
#define F367TER_KDIV67_MANUAL             0xF2440080
#define F367TER_K_DIVIDER_67              0xF244007F

/* KDIV78 */
#define R367TER_KDIV78                    0xF245
#define F367TER_KDIV78_MANUAL             0xF2450080
#define F367TER_K_DIVIDER_78              0xF245007F

/* SIGPOWER */
#define R367TER_SIGPOWER                  0xF246
#define F367TER_SIGPOWER_MANUAL           0xF2460080
#define F367TER_SIG_POWER                 0xF246007F

/* DEMAPVIT */
#define R367TER_DEMAPVIT                  0xF247
#define F367TER_DEMAPVIT_7                0xF2470080
#define F367TER_K_DIVIDER_VIT             0xF247007F

/* VITSCALE */
#define R367TER_VITSCALE                  0xF248
#define F367TER_NVTH_NOSRANGE             0xF2480080
#define F367TER_VERROR_MAXMODE            0xF2480040
#define F367TER_KDIV_MODE                 0xF2480030
#define F367TER_NSLOWSN_LOCKED            0xF2480008
#define F367TER_DELOCK_PRFLOSS            0xF2480004
#define F367TER_DIS_RSFLOCK               0xF2480002
#define F367TER_VITSCALE_0                0xF2480001

/* FFEC1PRG */
#define R367TER_FFEC1PRG                  0xF249
#define F367TER_FDSS_DVB                  0xF2490080
#define F367TER_FDSS_SRCH                 0xF2490040
#define F367TER_FFECPROG_5                0xF2490020
#define F367TER_FFECPROG_4                0xF2490010
#define F367TER_FFECPROG_3                0xF2490008
#define F367TER_FFECPROG_2                0xF2490004
#define F367TER_FTS1_DISABLE              0xF2490002
#define F367TER_FTS2_DISABLE              0xF2490001

/* FVITCURPUN */
#define R367TER_FVITCURPUN                0xF24A
#define F367TER_FVIT_MAPPING              0xF24A00E0
#define F367TER_FVIT_CURPUN               0xF24A001F

/* FVERROR */
#define R367TER_FVERROR                   0xF24B
#define F367TER_FREGERR_VIT               0xF24B00FF

/* FVSTATUSVIT */
#define R367TER_FVSTATUSVIT               0xF24C
#define F367TER_FVITERBI_ON               0xF24C0080
#define F367TER_F1END_LOOPVIT             0xF24C0040
#define F367TER_FVITERBI_DEPRF            0xF24C0020
#define F367TER_FPRFVIT                   0xF24C0010
#define F367TER_FLOCKEDVIT                0xF24C0008
#define F367TER_FVITERBI_DELOCK           0xF24C0004
#define F367TER_FVIT_DEMODSEL             0xF24C0002
#define F367TER_FVITERBI_COMPOUT          0xF24C0001

/* DEBUG_LT1 */
#define R367TER_DEBUG_LT1                 0xF24D
#define F367TER_DBG_LT1                   0xF24D00FF

/* DEBUG_LT2 */
#define R367TER_DEBUG_LT2                 0xF24E
#define F367TER_DBG_LT2                   0xF24E00FF

/* DEBUG_LT3 */
#define R367TER_DEBUG_LT3                 0xF24F
#define F367TER_DBG_LT3                   0xF24F00FF

/* TSTSFMET */
#define R367TER_TSTSFMET                  0xF250
#define F367TER_TSTSFEC_METRIQUES         0xF25000FF

/* SELOUT */
#define R367TER_SELOUT                    0xF252
#define F367TER_EN_SYNC                   0xF2520080
#define F367TER_EN_TBUSDEMAP              0xF2520040
#define F367TER_SELOUT_5                  0xF2520020
#define F367TER_SELOUT_4                  0xF2520010
#define F367TER_TSTSYNCHRO_MODE           0xF2520002

/* TSYNC */
#define R367TER_TSYNC                     0xF253
#define F367TER_CURPUN_INCMODE            0xF2530080
#define F367TER_CERR_TSTMODE              0xF2530040
#define F367TER_SHIFTSOF_MODE             0xF2530030
#define F367TER_SLOWPHA_MODE              0xF2530008
#define F367TER_PXX_BYPALL                0xF2530004
#define F367TER_FROTA45_FIRST             0xF2530002
#define F367TER_TST_BCHERROR              0xF2530001

/* TSTERR */
#define R367TER_TSTERR                    0xF254
#define F367TER_TST_LONGPKT               0xF2540080
#define F367TER_TST_ISSYION               0xF2540040
#define F367TER_TST_NPDON                 0xF2540020
#define F367TER_TSTERR_4                  0xF2540010
#define F367TER_TRACEBACK_MODE            0xF2540008
#define F367TER_TST_RSPARITY              0xF2540004
#define F367TER_METRIQUE_MODE             0xF2540003

/* TSFSYNC */
#define R367TER_TSFSYNC                   0xF255
#define F367TER_EN_SFECSYNC               0xF2550080
#define F367TER_EN_SFECDEMAP              0xF2550040
#define F367TER_SFCERR_TSTMODE            0xF2550020
#define F367TER_SFECPXX_BYPALL            0xF2550010
#define F367TER_SFECTSTSYNCHRO_MODE       0xF255000F

/* TSTSFERR */
#define R367TER_TSTSFERR                  0xF256
#define F367TER_TSTSTERR_7                0xF2560080
#define F367TER_TSTSTERR_6                0xF2560040
#define F367TER_TSTSTERR_5                0xF2560020
#define F367TER_TSTSTERR_4                0xF2560010
#define F367TER_SFECTRACEBACK_MODE        0xF2560008
#define F367TER_SFEC_NCONVPROG            0xF2560004
#define F367TER_SFECMETRIQUE_MODE         0xF2560003

/* TSTTSSF1 */
#define R367TER_TSTTSSF1                  0xF258
#define F367TER_TSTERSSF                  0xF2580080
#define F367TER_TSTTSSFEN                 0xF2580040
#define F367TER_SFEC_OUTMODE              0xF2580030
#define F367TER_XLSF_NOFTHRESHOLD         0xF2580008
#define F367TER_TSTTSSF_STACKSEL          0xF2580007

/* TSTTSSF2 */
#define R367TER_TSTTSSF2                  0xF259
#define F367TER_DILSF_DBBHEADER           0xF2590080
#define F367TER_TSTTSSF_DISBUG            0xF2590040
#define F367TER_TSTTSSF_NOBADSTART        0xF2590020
#define F367TER_TSTTSSF_SELECT            0xF259001F

/* TSTTSSF3 */
#define R367TER_TSTTSSF3                  0xF25A
#define F367TER_TSTTSSF3_7                0xF25A0080
#define F367TER_TSTTSSF3_6                0xF25A0040
#define F367TER_TSTTSSF3_5                0xF25A0020
#define F367TER_TSTTSSF3_4                0xF25A0010
#define F367TER_TSTTSSF3_3                0xF25A0008
#define F367TER_TSTTSSF3_2                0xF25A0004
#define F367TER_TSTTSSF3_1                0xF25A0002
#define F367TER_DISSF_CLKENABLE           0xF25A0001

/* TSTTS1 */
#define R367TER_TSTTS1                    0xF25C
#define F367TER_TSTERS                    0xF25C0080
#define F367TER_TSFIFO_DSSSYNCB           0xF25C0040
#define F367TER_TSTTS_FSPYBEFRS           0xF25C0020
#define F367TER_NFORCE_SYNCBYTE           0xF25C0010
#define F367TER_XL_NOFTHRESHOLD           0xF25C0008
#define F367TER_TSTTS_FRFORCEPKT          0xF25C0004
#define F367TER_DESCR_NOTAUTO             0xF25C0002
#define F367TER_TSTTSEN                   0xF25C0001

/* TSTTS2 */
#define R367TER_TSTTS2                    0xF25D
#define F367TER_DIL_DBBHEADER             0xF25D0080
#define F367TER_TSTTS_NOBADXXX            0xF25D0040
#define F367TER_TSFIFO_DELSPEEDUP         0xF25D0020
#define F367TER_TSTTS_SELECT              0xF25D001F

/* TSTTS3 */
#define R367TER_TSTTS3                    0xF25E
#define F367TER_TSTTS_NOPKTGAIN           0xF25E0080
#define F367TER_TSTTS_NOPKTENE            0xF25E0040
#define F367TER_TSTTS_ISOLATION           0xF25E0020
#define F367TER_TSTTS_DISBUG              0xF25E0010
#define F367TER_TSTTS_NOBADSTART          0xF25E0008
#define F367TER_TSTTS_STACKSEL            0xF25E0007

/* TSTTS4 */
#define R367TER_TSTTS4                    0xF25F
#define F367TER_TSTTS4_7                  0xF25F0080
#define F367TER_TSTTS4_6                  0xF25F0040
#define F367TER_TSTTS4_5                  0xF25F0020
#define F367TER_TSTTS_DISDSTATE           0xF25F0010
#define F367TER_TSTTS_FASTNOSYNC          0xF25F0008
#define F367TER_EXT_FECSPYIN              0xF25F0004
#define F367TER_TSTTS_NODPZERO            0xF25F0002
#define F367TER_TSTTS_NODIV3              0xF25F0001

/* TSTTSRC */
#define R367TER_TSTTSRC                   0xF26C
#define F367TER_TSTTSRC_7                 0xF26C0080
#define F367TER_TSRCFIFO_DSSSYNCB         0xF26C0040
#define F367TER_TSRCFIFO_DPUNACTIVE       0xF26C0020
#define F367TER_TSRCFIFO_DELSPEEDUP       0xF26C0010
#define F367TER_TSTTSRC_NODIV3            0xF26C0008
#define F367TER_TSTTSRC_FRFORCEPKT        0xF26C0004
#define F367TER_SAT25_SDDORIGINE          0xF26C0002
#define F367TER_TSTTSRC_INACTIVE          0xF26C0001

/* TSTTSRS */
#define R367TER_TSTTSRS                   0xF26D
#define F367TER_TSTTSRS_7                 0xF26D0080
#define F367TER_TSTTSRS_6                 0xF26D0040
#define F367TER_TSTTSRS_5                 0xF26D0020
#define F367TER_TSTTSRS_4                 0xF26D0010
#define F367TER_TSTTSRS_3                 0xF26D0008
#define F367TER_TSTTSRS_2                 0xF26D0004
#define F367TER_TSTRS_DISRS2              0xF26D0002
#define F367TER_TSTRS_DISRS1              0xF26D0001

/* TSSTATEM */
#define R367TER_TSSTATEM                  0xF270
#define F367TER_TSDIL_ON                  0xF2700080
#define F367TER_TSSKIPRS_ON               0xF2700040
#define F367TER_TSRS_ON                   0xF2700020
#define F367TER_TSDESCRAMB_ON             0xF2700010
#define F367TER_TSFRAME_MODE              0xF2700008
#define F367TER_TS_DISABLE                0xF2700004
#define F367TER_TSACM_MODE                0xF2700002
#define F367TER_TSOUT_NOSYNC              0xF2700001

/* TSSTATEL */
#define R367TER_TSSTATEL                  0xF271
#define F367TER_TSNOSYNCBYTE              0xF2710080
#define F367TER_TSPARITY_ON               0xF2710040
#define F367TER_TSSYNCOUTRS_ON            0xF2710020
#define F367TER_TSDVBS2_MODE              0xF2710010
#define F367TER_TSISSYI_ON                0xF2710008
#define F367TER_TSNPD_ON                  0xF2710004
#define F367TER_TSCRC8_ON                 0xF2710002
#define F367TER_TSDSS_PACKET              0xF2710001

/* TSCFGH */
#define R367TER_TSCFGH                    0xF272
#define F367TER_TSFIFO_DVBCI              0xF2720080
#define F367TER_TSFIFO_SERIAL             0xF2720040
#define F367TER_TSFIFO_TEIUPDATE          0xF2720020
#define F367TER_TSFIFO_DUTY50             0xF2720010
#define F367TER_TSFIFO_HSGNLOUT           0xF2720008
#define F367TER_TSFIFO_ERRMODE            0xF2720006
#define F367TER_RST_HWARE                 0xF2720001

/* TSCFGM */
#define R367TER_TSCFGM                    0xF273
#define F367TER_TSFIFO_MANSPEED           0xF27300C0
#define F367TER_TSFIFO_PERMDATA           0xF2730020
#define F367TER_TSFIFO_NONEWSGNL          0xF2730010
#define F367TER_TSFIFO_BITSPEED           0xF2730008
#define F367TER_NPD_SPECDVBS2             0xF2730004
#define F367TER_TSFIFO_STOPCKDIS          0xF2730002
#define F367TER_TSFIFO_INVDATA            0xF2730001

/* TSCFGL */
#define R367TER_TSCFGL                    0xF274
#define F367TER_TSFIFO_BCLKDEL1CK         0xF27400C0
#define F367TER_BCHERROR_MODE             0xF2740030
#define F367TER_TSFIFO_NSGNL2DATA         0xF2740008
#define F367TER_TSFIFO_EMBINDVB           0xF2740004
#define F367TER_TSFIFO_DPUNACT            0xF2740002
#define F367TER_TSFIFO_NPDOFF             0xF2740001

/* TSSYNC */
#define R367TER_TSSYNC                    0xF275
#define F367TER_TSFIFO_PERMUTE            0xF2750080
#define F367TER_TSFIFO_FISCR3B            0xF2750060
#define F367TER_TSFIFO_SYNCMODE           0xF2750018
#define F367TER_TSFIFO_SYNCSEL            0xF2750007

/* TSINSDELH */
#define R367TER_TSINSDELH                 0xF276
#define F367TER_TSDEL_SYNCBYTE            0xF2760080
#define F367TER_TSDEL_XXHEADER            0xF2760040
#define F367TER_TSDEL_BBHEADER            0xF2760020
#define F367TER_TSDEL_DATAFIELD           0xF2760010
#define F367TER_TSINSDEL_ISCR             0xF2760008
#define F367TER_TSINSDEL_NPD              0xF2760004
#define F367TER_TSINSDEL_RSPARITY         0xF2760002
#define F367TER_TSINSDEL_CRC8             0xF2760001

/* TSINSDELM */
#define R367TER_TSINSDELM                 0xF277
#define F367TER_TSINS_BBPADDING           0xF2770080
#define F367TER_TSINS_BCHFEC              0xF2770040
#define F367TER_TSINS_LDPCFEC             0xF2770020
#define F367TER_TSINS_EMODCOD             0xF2770010
#define F367TER_TSINS_TOKEN               0xF2770008
#define F367TER_TSINS_XXXERR              0xF2770004
#define F367TER_TSINS_MATYPE              0xF2770002
#define F367TER_TSINS_UPL                 0xF2770001

/* TSINSDELL */
#define R367TER_TSINSDELL                 0xF278
#define F367TER_TSINS_DFL                 0xF2780080
#define F367TER_TSINS_SYNCD               0xF2780040
#define F367TER_TSINS_BLOCLEN             0xF2780020
#define F367TER_TSINS_SIGPCOUNT           0xF2780010
#define F367TER_TSINS_FIFO                0xF2780008
#define F367TER_TSINS_REALPACK            0xF2780004
#define F367TER_TSINS_TSCONFIG            0xF2780002
#define F367TER_TSINS_LATENCY             0xF2780001

/* TSDIVN */
#define R367TER_TSDIVN                    0xF279
#define F367TER_TSFIFO_LOWSPEED           0xF2790080
#define F367TER_BYTE_OVERSAMPLING         0xF2790070
#define F367TER_TSMANUAL_PACKETNBR        0xF279000F

/* TSDIVPM */
#define R367TER_TSDIVPM                   0xF27A
#define F367TER_TSMANUAL_P_HI             0xF27A00FF

/* TSDIVPL */
#define R367TER_TSDIVPL                   0xF27B
#define F367TER_TSMANUAL_P_LO             0xF27B00FF

/* TSDIVQM */
#define R367TER_TSDIVQM                   0xF27C
#define F367TER_TSMANUAL_Q_HI             0xF27C00FF

/* TSDIVQL */
#define R367TER_TSDIVQL                   0xF27D
#define F367TER_TSMANUAL_Q_LO             0xF27D00FF

/* TSDILSTKM */
#define R367TER_TSDILSTKM                 0xF27E
#define F367TER_TSFIFO_DILSTK_HI          0xF27E00FF

/* TSDILSTKL */
#define R367TER_TSDILSTKL                 0xF27F
#define F367TER_TSFIFO_DILSTK_LO          0xF27F00FF

/* TSSPEED */
#define R367TER_TSSPEED                   0xF280
#define F367TER_TSFIFO_OUTSPEED           0xF28000FF

/* TSSTATUS */
#define R367TER_TSSTATUS                  0xF281
#define F367TER_TSFIFO_LINEOK             0xF2810080
#define F367TER_TSFIFO_ERROR              0xF2810040
#define F367TER_TSFIFO_DATA7              0xF2810020
#define F367TER_TSFIFO_NOSYNC             0xF2810010
#define F367TER_ISCR_INITIALIZED          0xF2810008
#define F367TER_ISCR_UPDATED              0xF2810004
#define F367TER_SOFFIFO_UNREGUL           0xF2810002
#define F367TER_DIL_READY                 0xF2810001

/* TSSTATUS2 */
#define R367TER_TSSTATUS2                 0xF282
#define F367TER_TSFIFO_DEMODSEL           0xF2820080
#define F367TER_TSFIFOSPEED_STORE         0xF2820040
#define F367TER_DILXX_RESET               0xF2820020
#define F367TER_TSSERIAL_IMPOSSIBLE       0xF2820010
#define F367TER_TSFIFO_UNDERSPEED         0xF2820008
#define F367TER_BITSPEED_EVENT            0xF2820004
#define F367TER_UL_SCRAMBDETECT           0xF2820002
#define F367TER_ULDTV67_FALSELOCK         0xF2820001

/* TSBITRATEM */
#define R367TER_TSBITRATEM                0xF283
#define F367TER_TSFIFO_BITRATE_HI         0xF28300FF

/* TSBITRATEL */
#define R367TER_TSBITRATEL                0xF284
#define F367TER_TSFIFO_BITRATE_LO         0xF28400FF

/* TSPACKLENM */
#define R367TER_TSPACKLENM                0xF285
#define F367TER_TSFIFO_PACKCPT            0xF28500E0
#define F367TER_DIL_RPLEN_HI              0xF285001F

/* TSPACKLENL */
#define R367TER_TSPACKLENL                0xF286
#define F367TER_DIL_RPLEN_LO              0xF28600FF

/* TSBLOCLENM */
#define R367TER_TSBLOCLENM                0xF287
#define F367TER_TSFIFO_PFLEN_HI           0xF28700FF

/* TSBLOCLENL */
#define R367TER_TSBLOCLENL                0xF288
#define F367TER_TSFIFO_PFLEN_LO           0xF28800FF

/* TSDLYH */
#define R367TER_TSDLYH                    0xF289
#define F367TER_SOFFIFO_TSTIMEVALID       0xF2890080
#define F367TER_SOFFIFO_SPEEDUP           0xF2890040
#define F367TER_SOFFIFO_STOP              0xF2890020
#define F367TER_SOFFIFO_REGULATED         0xF2890010
#define F367TER_SOFFIFO_REALSBOFF_HI      0xF289000F

/* TSDLYM */
#define R367TER_TSDLYM                    0xF28A
#define F367TER_SOFFIFO_REALSBOFF_MED     0xF28A00FF

/* TSDLYL */
#define R367TER_TSDLYL                    0xF28B
#define F367TER_SOFFIFO_REALSBOFF_LO      0xF28B00FF

/* TSNPDAV */
#define R367TER_TSNPDAV                   0xF28C
#define F367TER_TSNPD_AVERAGE             0xF28C00FF

/* TSBUFSTATH */
#define R367TER_TSBUFSTATH                0xF28D
#define F367TER_TSISCR_3BYTES             0xF28D0080
#define F367TER_TSISCR_NEWDATA            0xF28D0040
#define F367TER_TSISCR_BUFSTAT_HI         0xF28D003F

/* TSBUFSTATM */
#define R367TER_TSBUFSTATM                0xF28E
#define F367TER_TSISCR_BUFSTAT_MED        0xF28E00FF

/* TSBUFSTATL */
#define R367TER_TSBUFSTATL                0xF28F
#define F367TER_TSISCR_BUFSTAT_LO         0xF28F00FF

/* TSDEBUGM */
#define R367TER_TSDEBUGM                  0xF290
#define F367TER_TSFIFO_ILLPACKET          0xF2900080
#define F367TER_DIL_NOSYNC                0xF2900040
#define F367TER_DIL_ISCR                  0xF2900020
#define F367TER_DILOUT_BSYNCB             0xF2900010
#define F367TER_TSFIFO_EMPTYPKT           0xF2900008
#define F367TER_TSFIFO_EMPTYRD            0xF2900004
#define F367TER_SOFFIFO_STOPM             0xF2900002
#define F367TER_SOFFIFO_SPEEDUPM          0xF2900001

/* TSDEBUGL */
#define R367TER_TSDEBUGL                  0xF291
#define F367TER_TSFIFO_PACKLENFAIL        0xF2910080
#define F367TER_TSFIFO_SYNCBFAIL          0xF2910040
#define F367TER_TSFIFO_VITLIBRE           0xF2910020
#define F367TER_TSFIFO_BOOSTSPEEDM        0xF2910010
#define F367TER_TSFIFO_UNDERSPEEDM        0xF2910008
#define F367TER_TSFIFO_ERROR_EVNT         0xF2910004
#define F367TER_TSFIFO_FULL               0xF2910002
#define F367TER_TSFIFO_OVERFLOWM          0xF2910001

/* TSDLYSETH */
#define R367TER_TSDLYSETH                 0xF292
#define F367TER_SOFFIFO_OFFSET            0xF29200E0
#define F367TER_SOFFIFO_SYMBOFFSET_HI     0xF292001F

/* TSDLYSETM */
#define R367TER_TSDLYSETM                 0xF293
#define F367TER_SOFFIFO_SYMBOFFSET_MED    0xF29300FF

/* TSDLYSETL */
#define R367TER_TSDLYSETL                 0xF294
#define F367TER_SOFFIFO_SYMBOFFSET_LO     0xF29400FF

/* TSOBSCFG */
#define R367TER_TSOBSCFG                  0xF295
#define F367TER_TSFIFO_OBSCFG             0xF29500FF

/* TSOBSM */
#define R367TER_TSOBSM                    0xF296
#define F367TER_TSFIFO_OBSDATA_HI         0xF29600FF

/* TSOBSL */
#define R367TER_TSOBSL                    0xF297
#define F367TER_TSFIFO_OBSDATA_LO         0xF29700FF

/* ERRCTRL1 */
#define R367TER_ERRCTRL1                  0xF298
#define F367TER_ERR_SRC1                  0xF29800F0
#define F367TER_ERRCTRL1_3                0xF2980008
#define F367TER_NUM_EVT1                  0xF2980007

/* ERRCNT1H */
#define R367TER_ERRCNT1H                  0xF299
#define F367TER_ERRCNT1_OLDVALUE          0xF2990080
#define F367TER_ERR_CNT1                  0xF299007F

/* ERRCNT1M */
#define R367TER_ERRCNT1M                  0xF29A
#define F367TER_ERR_CNT1_HI               0xF29A00FF

/* ERRCNT1L */
#define R367TER_ERRCNT1L                  0xF29B
#define F367TER_ERR_CNT1_LO               0xF29B00FF

/* ERRCTRL2 */
#define R367TER_ERRCTRL2                  0xF29C
#define F367TER_ERR_SRC2                  0xF29C00F0
#define F367TER_ERRCTRL2_3                0xF29C0008
#define F367TER_NUM_EVT2                  0xF29C0007

/* ERRCNT2H */
#define R367TER_ERRCNT2H                  0xF29D
#define F367TER_ERRCNT2_OLDVALUE          0xF29D0080
#define F367TER_ERR_CNT2_HI               0xF29D007F

/* ERRCNT2M */
#define R367TER_ERRCNT2M                  0xF29E
#define F367TER_ERR_CNT2_MED              0xF29E00FF

/* ERRCNT2L */
#define R367TER_ERRCNT2L                  0xF29F
#define F367TER_ERR_CNT2_LO               0xF29F00FF

/* FECSPY */
#define R367TER_FECSPY                    0xF2A0
#define F367TER_SPY_ENABLE                0xF2A00080
#define F367TER_NO_SYNCBYTE               0xF2A00040
#define F367TER_SERIAL_MODE               0xF2A00020
#define F367TER_UNUSUAL_PACKET            0xF2A00010
#define F367TER_BERMETER_DATAMODE         0xF2A0000C
#define F367TER_BERMETER_LMODE            0xF2A00002
#define F367TER_BERMETER_RESET            0xF2A00001

/* FSPYCFG */
#define R367TER_FSPYCFG                   0xF2A1
#define F367TER_FECSPY_INPUT              0xF2A100C0
#define F367TER_RST_ON_ERROR              0xF2A10020
#define F367TER_ONE_SHOT                  0xF2A10010
#define F367TER_I2C_MOD                   0xF2A1000C
#define F367TER_SPY_HYSTERESIS            0xF2A10003

/* FSPYDATA */
#define R367TER_FSPYDATA                  0xF2A2
#define F367TER_SPY_STUFFING              0xF2A20080
#define F367TER_NOERROR_PKTJITTER         0xF2A20040
#define F367TER_SPY_CNULLPKT              0xF2A20020
#define F367TER_SPY_OUTDATA_MODE          0xF2A2001F

/* FSPYOUT */
#define R367TER_FSPYOUT                   0xF2A3
#define F367TER_FSPY_DIRECT               0xF2A30080
#define F367TER_FSPYOUT_6                 0xF2A30040
#define F367TER_SPY_OUTDATA_BUS           0xF2A30038
#define F367TER_STUFF_MODE                0xF2A30007

/* FSTATUS */
#define R367TER_FSTATUS                   0xF2A4
#define F367TER_SPY_ENDSIM                0xF2A40080
#define F367TER_VALID_SIM                 0xF2A40040
#define F367TER_FOUND_SIGNAL              0xF2A40020
#define F367TER_DSS_SYNCBYTE              0xF2A40010
#define F367TER_RESULT_STATE              0xF2A4000F

/* FGOODPACK */
#define R367TER_FGOODPACK                 0xF2A5
#define F367TER_FGOOD_PACKET              0xF2A500FF

/* FPACKCNT */
#define R367TER_FPACKCNT                  0xF2A6
#define F367TER_FPACKET_COUNTER           0xF2A600FF

/* FSPYMISC */
#define R367TER_FSPYMISC                  0xF2A7
#define F367TER_FLABEL_COUNTER            0xF2A700FF

/* FBERCPT4 */
#define R367TER_FBERCPT4                  0xF2A8
#define F367TER_FBERMETER_CPT5            0xF2A800FF

/* FBERCPT3 */
#define R367TER_FBERCPT3                  0xF2A9
#define F367TER_FBERMETER_CPT4            0xF2A900FF

/* FBERCPT2 */
#define R367TER_FBERCPT2                  0xF2AA
#define F367TER_FBERMETER_CPT3            0xF2AA00FF

/* FBERCPT1 */
#define R367TER_FBERCPT1                  0xF2AB
#define F367TER_FBERMETER_CPT2            0xF2AB00FF

/* FBERCPT0 */
#define R367TER_FBERCPT0                  0xF2AC
#define F367TER_FBERMETER_CPT1            0xF2AC00FF

/* FBERERR2 */
#define R367TER_FBERERR2                  0xF2AD
#define F367TER_FBERMETER_ERR_HI          0xF2AD00FF

/* FBERERR1 */
#define R367TER_FBERERR1                  0xF2AE
#define F367TER_FBERMETER_ERR_MED         0xF2AE00FF

/* FBERERR0 */
#define R367TER_FBERERR0                  0xF2AF
#define F367TER_FBERMETER_ERR_LO          0xF2AF00FF

/* FSTATESM */
#define R367TER_FSTATESM                  0xF2B0
#define F367TER_RSTATE_F                  0xF2B00080
#define F367TER_RSTATE_E                  0xF2B00040
#define F367TER_RSTATE_D                  0xF2B00020
#define F367TER_RSTATE_C                  0xF2B00010
#define F367TER_RSTATE_B                  0xF2B00008
#define F367TER_RSTATE_A                  0xF2B00004
#define F367TER_RSTATE_9                  0xF2B00002
#define F367TER_RSTATE_8                  0xF2B00001

/* FSTATESL */
#define R367TER_FSTATESL                  0xF2B1
#define F367TER_RSTATE_7                  0xF2B10080
#define F367TER_RSTATE_6                  0xF2B10040
#define F367TER_RSTATE_5                  0xF2B10020
#define F367TER_RSTATE_4                  0xF2B10010
#define F367TER_RSTATE_3                  0xF2B10008
#define F367TER_RSTATE_2                  0xF2B10004
#define F367TER_RSTATE_1                  0xF2B10002
#define F367TER_RSTATE_0                  0xF2B10001

/* FSPYBER */
#define R367TER_FSPYBER                   0xF2B2
#define F367TER_FSPYBER_7                 0xF2B20080
#define F367TER_FSPYOBS_XORREAD           0xF2B20040
#define F367TER_FSPYBER_OBSMODE           0xF2B20020
#define F367TER_FSPYBER_SYNCBYTE          0xF2B20010
#define F367TER_FSPYBER_UNSYNC            0xF2B20008
#define F367TER_FSPYBER_CTIME             0xF2B20007

/* FSPYDISTM */
#define R367TER_FSPYDISTM                 0xF2B3
#define F367TER_PKTTIME_DISTANCE_HI       0xF2B300FF

/* FSPYDISTL */
#define R367TER_FSPYDISTL                 0xF2B4
#define F367TER_PKTTIME_DISTANCE_LO       0xF2B400FF

/* FSPYOBS7 */
#define R367TER_FSPYOBS7                  0xF2B8
#define F367TER_FSPYOBS_SPYFAIL           0xF2B80080
#define F367TER_FSPYOBS_SPYFAIL1          0xF2B80040
#define F367TER_FSPYOBS_ERROR             0xF2B80020
#define F367TER_FSPYOBS_STROUT            0xF2B80010
#define F367TER_FSPYOBS_RESULTSTATE1      0xF2B8000F

/* FSPYOBS6 */
#define R367TER_FSPYOBS6                  0xF2B9
#define F367TER_FSPYOBS_RESULTSTATE0      0xF2B900F0
#define F367TER_FSPYOBS_RESULTSTATEM1     0xF2B9000F

/* FSPYOBS5 */
#define R367TER_FSPYOBS5                  0xF2BA
#define F367TER_FSPYOBS_BYTEOFPACKET1     0xF2BA00FF

/* FSPYOBS4 */
#define R367TER_FSPYOBS4                  0xF2BB
#define F367TER_FSPYOBS_BYTEVALUE1        0xF2BB00FF

/* FSPYOBS3 */
#define R367TER_FSPYOBS3                  0xF2BC
#define F367TER_FSPYOBS_DATA1             0xF2BC00FF

/* FSPYOBS2 */
#define R367TER_FSPYOBS2                  0xF2BD
#define F367TER_FSPYOBS_DATA0             0xF2BD00FF

/* FSPYOBS1 */
#define R367TER_FSPYOBS1                  0xF2BE
#define F367TER_FSPYOBS_DATAM1            0xF2BE00FF

/* FSPYOBS0 */
#define R367TER_FSPYOBS0                  0xF2BF
#define F367TER_FSPYOBS_DATAM2            0xF2BF00FF

/* SFDEMAP */
#define R367TER_SFDEMAP                   0xF2C0
#define F367TER_SFDEMAP_7                 0xF2C00080
#define F367TER_SFEC_K_DIVIDER_VIT        0xF2C0007F

/* SFERROR */
#define R367TER_SFERROR                   0xF2C1
#define F367TER_SFEC_REGERR_VIT           0xF2C100FF

/* SFAVSR */
#define R367TER_SFAVSR                    0xF2C2
#define F367TER_SFEC_SUMERRORS            0xF2C20080
#define F367TER_SERROR_MAXMODE            0xF2C20040
#define F367TER_SN_SFEC                   0xF2C20030
#define F367TER_KDIV_MODE_SFEC            0xF2C2000C
#define F367TER_SFAVSR_1                  0xF2C20002
#define F367TER_SFAVSR_0                  0xF2C20001

/* SFECSTATUS */
#define R367TER_SFECSTATUS                0xF2C3
#define F367TER_SFEC_ON                   0xF2C30080
#define F367TER_SFSTATUS_6                0xF2C30040
#define F367TER_SFSTATUS_5                0xF2C30020
#define F367TER_SFSTATUS_4                0xF2C30010
#define F367TER_LOCKEDSFEC                0xF2C30008
#define F367TER_SFEC_DELOCK               0xF2C30004
#define F367TER_SFEC_DEMODSEL1            0xF2C30002
#define F367TER_SFEC_OVFON                0xF2C30001

/* SFKDIV12 */
#define R367TER_SFKDIV12                  0xF2C4
#define F367TER_SFECKDIV12_MAN            0xF2C40080
#define F367TER_SFEC_K_DIVIDER_12         0xF2C4007F

/* SFKDIV23 */
#define R367TER_SFKDIV23                  0xF2C5
#define F367TER_SFECKDIV23_MAN            0xF2C50080
#define F367TER_SFEC_K_DIVIDER_23         0xF2C5007F

/* SFKDIV34 */
#define R367TER_SFKDIV34                  0xF2C6
#define F367TER_SFECKDIV34_MAN            0xF2C60080
#define F367TER_SFEC_K_DIVIDER_34         0xF2C6007F

/* SFKDIV56 */
#define R367TER_SFKDIV56                  0xF2C7
#define F367TER_SFECKDIV56_MAN            0xF2C70080
#define F367TER_SFEC_K_DIVIDER_56         0xF2C7007F

/* SFKDIV67 */
#define R367TER_SFKDIV67                  0xF2C8
#define F367TER_SFECKDIV67_MAN            0xF2C80080
#define F367TER_SFEC_K_DIVIDER_67         0xF2C8007F

/* SFKDIV78 */
#define R367TER_SFKDIV78                  0xF2C9
#define F367TER_SFECKDIV78_MAN            0xF2C90080
#define F367TER_SFEC_K_DIVIDER_78         0xF2C9007F

/* SFDILSTKM */
#define R367TER_SFDILSTKM                 0xF2CA
#define F367TER_SFEC_PACKCPT              0xF2CA00E0
#define F367TER_SFEC_DILSTK_HI            0xF2CA001F

/* SFDILSTKL */
#define R367TER_SFDILSTKL                 0xF2CB
#define F367TER_SFEC_DILSTK_LO            0xF2CB00FF

/* SFSTATUS */
#define R367TER_SFSTATUS                  0xF2CC
#define F367TER_SFEC_LINEOK               0xF2CC0080
#define F367TER_SFEC_ERROR                0xF2CC0040
#define F367TER_SFEC_DATA7                0xF2CC0020
#define F367TER_SFEC_OVERFLOW             0xF2CC0010
#define F367TER_SFEC_DEMODSEL2            0xF2CC0008
#define F367TER_SFEC_NOSYNC               0xF2CC0004
#define F367TER_SFEC_UNREGULA             0xF2CC0002
#define F367TER_SFEC_READY                0xF2CC0001

/* SFDLYH */
#define R367TER_SFDLYH                    0xF2CD
#define F367TER_SFEC_TSTIMEVALID          0xF2CD0080
#define F367TER_SFEC_SPEEDUP              0xF2CD0040
#define F367TER_SFEC_STOP                 0xF2CD0020
#define F367TER_SFEC_REGULATED            0xF2CD0010
#define F367TER_SFEC_REALSYMBOFFSET       0xF2CD000F

/* SFDLYM */
#define R367TER_SFDLYM                    0xF2CE
#define F367TER_SFEC_REALSYMBOFFSET_HI    0xF2CE00FF

/* SFDLYL */
#define R367TER_SFDLYL                    0xF2CF
#define F367TER_SFEC_REALSYMBOFFSET_LO    0xF2CF00FF

/* SFDLYSETH */
#define R367TER_SFDLYSETH                 0xF2D0
#define F367TER_SFEC_OFFSET               0xF2D000E0
#define F367TER_SFECDLYSETH_4             0xF2D00010
#define F367TER_RST_SFEC                  0xF2D00008
#define F367TER_SFECDLYSETH_2             0xF2D00004
#define F367TER_SFEC_DISABLE              0xF2D00002
#define F367TER_SFEC_UNREGUL              0xF2D00001

/* SFDLYSETM */
#define R367TER_SFDLYSETM                 0xF2D1
#define F367TER_SFECDLYSETM_7             0xF2D10080
#define F367TER_SFEC_SYMBOFFSET_HI        0xF2D1007F

/* SFDLYSETL */
#define R367TER_SFDLYSETL                 0xF2D2
#define F367TER_SFEC_SYMBOFFSET_LO        0xF2D200FF

/* SFOBSCFG */
#define R367TER_SFOBSCFG                  0xF2D3
#define F367TER_SFEC_OBSCFG               0xF2D300FF

/* SFOBSM */
#define R367TER_SFOBSM                    0xF2D4
#define F367TER_SFEC_OBSDATA_HI           0xF2D400FF

/* SFOBSL */
#define R367TER_SFOBSL                    0xF2D5
#define F367TER_SFEC_OBSDATA_LO           0xF2D500FF

/* SFECINFO */
#define R367TER_SFECINFO                  0xF2D6
#define F367TER_SFECINFO_7                0xF2D60080
#define F367TER_SFEC_SYNCDLSB             0xF2D60070
#define F367TER_SFCE_S1CPHASE             0xF2D6000F

/* SFERRCTRL */
#define R367TER_SFERRCTRL                 0xF2D8
#define F367TER_SFEC_ERR_SOURCE           0xF2D800F0
#define F367TER_SFERRCTRL_3               0xF2D80008
#define F367TER_SFEC_NUM_EVENT            0xF2D80007

/* SFERRCNTH */
#define R367TER_SFERRCNTH                 0xF2D9
#define F367TER_SFERRC_OLDVALUE           0xF2D90080
#define F367TER_SFEC_ERR_CNT              0xF2D9007F

/* SFERRCNTM */
#define R367TER_SFERRCNTM                 0xF2DA
#define F367TER_SFEC_ERR_CNT_HI           0xF2DA00FF

/* SFERRCNTL */
#define R367TER_SFERRCNTL                 0xF2DB
#define F367TER_SFEC_ERR_CNT_LO           0xF2DB00FF

/* SYMBRATEM */
#define R367TER_SYMBRATEM                 0xF2E0
#define F367TER_DEFGEN_SYMBRATE_HI        0xF2E000FF

/* SYMBRATEL */
#define R367TER_SYMBRATEL                 0xF2E1
#define F367TER_DEFGEN_SYMBRATE_LO        0xF2E100FF

/* SYMBSTATUS */
#define R367TER_SYMBSTATUS                0xF2E2
#define F367TER_SYMBDLINE2_OFF            0xF2E20080
#define F367TER_SDDL_REINIT1              0xF2E20040
#define F367TER_SDD_REINIT1               0xF2E20020
#define F367TER_TOKENID_ERROR             0xF2E20010
#define F367TER_SYMBRATE_OVERFLOW         0xF2E20008
#define F367TER_SYMBRATE_UNDERFLOW        0xF2E20004
#define F367TER_TOKENID_RSTEVENT          0xF2E20002
#define F367TER_TOKENID_RESET1            0xF2E20001

/* SYMBCFG */
#define R367TER_SYMBCFG                   0xF2E3
#define F367TER_SYMBCFG_7                 0xF2E30080
#define F367TER_SYMBCFG_6                 0xF2E30040
#define F367TER_SYMBCFG_5                 0xF2E30020
#define F367TER_SYMBCFG_4                 0xF2E30010
#define F367TER_SYMRATE_FSPEED            0xF2E3000C
#define F367TER_SYMRATE_SSPEED            0xF2E30003

/* SYMBFIFOM */
#define R367TER_SYMBFIFOM                 0xF2E4
#define F367TER_SYMBFIFOM_7               0xF2E40080
#define F367TER_SYMBFIFOM_6               0xF2E40040
#define F367TER_DEFGEN_SYMFIFO_HI         0xF2E4003F

/* SYMBFIFOL */
#define R367TER_SYMBFIFOL                 0xF2E5
#define F367TER_DEFGEN_SYMFIFO_LO         0xF2E500FF

/* SYMBOFFSM */
#define R367TER_SYMBOFFSM                 0xF2E6
#define F367TER_TOKENID_RESET2            0xF2E60080
#define F367TER_SDDL_REINIT2              0xF2E60040
#define F367TER_SDD_REINIT2               0xF2E60020
#define F367TER_SYMBOFFSM_4               0xF2E60010
#define F367TER_SYMBOFFSM_3               0xF2E60008
#define F367TER_DEFGEN_SYMBOFFSET_HI      0xF2E60007

/* SYMBOFFSL */
#define R367TER_SYMBOFFSL                 0xF2E7
#define F367TER_DEFGEN_SYMBOFFSET_LO      0xF2E700FF

/* DEBUG_LT4 */
#define R367TER_DEBUG_LT4                 0xF400
#define F367TER_F_DEBUG_LT4               0xF40000FF

/* DEBUG_LT5 */
#define R367TER_DEBUG_LT5                 0xF401
#define F367TER_F_DEBUG_LT5               0xF40100FF

/* DEBUG_LT6 */
#define R367TER_DEBUG_LT6                 0xF402
#define F367TER_F_DEBUG_LT6               0xF40200FF

/* DEBUG_LT7 */
#define R367TER_DEBUG_LT7                 0xF403
#define F367TER_F_DEBUG_LT7               0xF40300FF

/* DEBUG_LT8 */
#define R367TER_DEBUG_LT8                 0xF404
#define F367TER_F_DEBUG_LT8               0xF40400FF

/* DEBUG_LT9 */
#define R367TER_DEBUG_LT9                 0xF405
#define F367TER_F_DEBUG_LT9               0xF40500FF

#define STV0367TER_NBREGS 445
#define STV0367TER_NBFIELDS 1166

#endif  // _STV0367TER_INIT_H
// vim:ts=4
