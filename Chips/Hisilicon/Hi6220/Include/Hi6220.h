/** @file
*
*  Copyright (c) 2014-2017, Linaro Limited. All rights reserved.
*
*  This program and the accompanying materials
*  are licensed and made available under the terms and conditions of the BSD License
*  which accompanies this distribution.  The full text of the license may be found at
*  http://opensource.org/licenses/bsd-license.php
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
**/

#ifndef __HI6220_H__
#define __HI6220_H__

/***********************************************************************************
// Platform Memory Map
************************************************************************************/

// SOC peripherals (UART, I2C, I2S, USB, etc)
#define HI6220_PERIPH_BASE                      0xF4000000
#define HI6220_PERIPH_SZ                        0x05800000

#define PERI_CTRL_BASE                          0xF7030000
#define SC_PERIPH_CTRL4                         0x00C
#define CTRL4_FPGA_EXT_PHY_SEL                  BIT3
#define CTRL4_PICO_SIDDQ                        BIT6
#define CTRL4_PICO_OGDISABLE                    BIT8
#define CTRL4_PICO_VBUSVLDEXT                   BIT10
#define CTRL4_PICO_VBUSVLDEXTSEL                BIT11
#define CTRL4_OTG_PHY_SEL                       BIT21

#define SC_PERIPH_CTRL5                         0x010

#define CTRL5_USBOTG_RES_SEL                    BIT3
#define CTRL5_PICOPHY_ACAENB                    BIT4
#define CTRL5_PICOPHY_BC_MODE                   BIT5
#define CTRL5_PICOPHY_CHRGSEL                   BIT6
#define CTRL5_PICOPHY_VDATSRCEND                BIT7
#define CTRL5_PICOPHY_VDATDETENB                BIT8
#define CTRL5_PICOPHY_DCDENB                    BIT9
#define CTRL5_PICOPHY_IDDIG                     BIT10

#define SC_PERIPH_CTRL8                         0x018
#define SC_PERIPH_CLKEN0                        0x200
#define SC_PERIPH_CLKDIS0                       0x204
#define SC_PERIPH_CLKSTAT0                      0x208

#define SC_PERIPH_CLKEN3                        0x230
#define SC_PERIPH_RSTEN3                        0x330
#define SC_PERIPH_RSTEN0                        0x300
#define SC_PERIPH_RSTDIS0                       0x304
#define SC_PERIPH_RSTSTAT0                      0x308
#define SC_PERIPH_RSTDIS3                       0x334
#define SC_PERIPH_RSTSTAT3                      0x338

#define RST0_USBOTG_BUS                         BIT4
#define RST0_POR_PICOPHY                        BIT5
#define RST0_USBOTG                             BIT6
#define RST0_USBOTG_32K                         BIT7

/* SC_PERIPH_RSTEN0/RSTDIS0/RSTSTAT0 */
#define PERIPH_RST0_MMC2                        (1 << 2)

/* SC_PERIPH_RSTEN3/RSTDIS3/RSTSTAT3 */
#define PERIPH_RST3_CSSYS                       (1 << 0)
#define PERIPH_RST3_I2C0                        (1 << 1)
#define PERIPH_RST3_I2C1                        (1 << 2)
#define PERIPH_RST3_I2C2                        (1 << 3)
#define PERIPH_RST3_I2C3                        (1 << 4)
#define PERIPH_RST3_UART1                       (1 << 5)
#define PERIPH_RST3_UART2                       (1 << 6)
#define PERIPH_RST3_UART3                       (1 << 7)
#define PERIPH_RST3_UART4                       (1 << 8)
#define PERIPH_RST3_SSP                         (1 << 9)
#define PERIPH_RST3_PWM                         (1 << 10)
#define PERIPH_RST3_BLPWM                       (1 << 11)
#define PERIPH_RST3_TSENSOR                     (1 << 12)
#define PERIPH_RST3_DAPB                        (1 << 18)
#define PERIPH_RST3_HKADC                       (1 << 19)
#define PERIPH_RST3_CODEC_SSI                   (1 << 20)
#define PERIPH_RST3_PMUSSI1                     (1 << 22)

#define EYE_PATTERN_PARA                        0x7053348c

#define MDDRC_AXI_BASE                          0xF7120000
#define AXI_REGION_MAP                          0x100
#define HIKEY_REGION_SIZE_MASK                  (7 << 8)
// (0 << 8) means 16MB, (7 << 8) means 2GB
#define HIKEY_REGION_SIZE(x)                    (1U << ((((x) & HIKEY_REGION_SIZE_MASK) >> 8) + 24))

#define AO_CTRL_BASE                            0xF7800000
#define SC_PW_MTCMOS_EN0                        0x830
#define SC_PW_MTCMOS_DIS0                       0x834
#define SC_PW_MTCMOS_STAT0                      0x838
#define SC_PW_MTCMOS_ACK_STAT0                  0x83c
#define PW_EN0_G3D                              (1 << 1)

#define PMUSSI_BASE                             0xF8000000

#define PMUSSI_REG(x)                           (PMUSSI_BASE + ((x) << 2))


#endif /* __HI6220_H__ */
