/** @file

  Copyright (c) 2008 - 2009, Apple Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __OMAP3530USB_H__
#define __OMAP3530USB_H__

#define USB_BASE            (0x48060000)

#define UHH_SYSCONFIG       (USB_BASE + 0x4010)
#define UHH_HOSTCONFIG      (USB_BASE + 0x4040)
#define UHH_SYSSTATUS       (USB_BASE + 0x4014)

#define USB_EHCI_HCCAPBASE  (USB_BASE + 0x4800)

#define UHH_SYSCONFIG_MIDLEMODE_NO_STANDBY  BIT12
#define UHH_SYSCONFIG_CLOCKACTIVITY_ON      BIT8
#define UHH_SYSCONFIG_SIDLEMODE_NO_STANDBY  BIT3
#define UHH_SYSCONFIG_ENAWAKEUP_ENABLE      BIT2
#define UHH_SYSCONFIG_SOFTRESET             BIT1
#define UHH_SYSCONFIG_AUTOIDLE_ALWAYS_RUN   (0UL <<  0)

#define UHH_HOSTCONFIG_P3_CONNECT_STATUS_DISCONNECT (0UL << 10)
#define UHH_HOSTCONFIG_P2_CONNECT_STATUS_DISCONNECT (0UL <<  9)
#define UHH_HOSTCONFIG_P1_CONNECT_STATUS_DISCONNECT (0UL <<  8)
#define UHH_HOSTCONFIG_ENA_INCR_ALIGN_DISABLE       (0UL <<  5)
#define UHH_HOSTCONFIG_ENA_INCR16_ENABLE            BIT4
#define UHH_HOSTCONFIG_ENA_INCR8_ENABLE             BIT3
#define UHH_HOSTCONFIG_ENA_INCR4_ENABLE             BIT2
#define UHH_HOSTCONFIG_AUTOPPD_ON_OVERCUR_EN_ON     (0UL <<  1)
#define UHH_HOSTCONFIG_P1_ULPI_BYPASS_ULPI_MODE     (0UL <<  0)

#define UHH_SYSSTATUS_RESETDONE                (BIT0 | BIT1 | BIT2)

#endif // __OMAP3530USB_H__



