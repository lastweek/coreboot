/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#ifndef ONBOARD_H
#define ONBOARD_H

#include <mainboard/google/rambi/irqroute.h>

/* PCH wake signal from EC. */
#define BOARD_PCH_WAKE_GPIO             ACPI_ENABLE_WAKE_SUS_GPIO(0)

#define BOARD_TRACKPAD_NAME             "trackpad"
#define BOARD_TRACKPAD_IRQ              GPIO_S0_DED_IRQ(TPAD_IRQ_OFFSET)
#define BOARD_TRACKPAD_WAKE_GPIO        ACPI_ENABLE_WAKE_SUS_GPIO(1)
#define BOARD_TRACKPAD_I2C_BUS          0
#define BOARD_TRACKPAD_I2C_ADDR         0x4b

#define BOARD_I8042_IRQ                 GPIO_S0_DED_IRQ(I8042_IRQ_OFFSET)
#define BOARD_CODEC_IRQ                 GPIO_S5_DED_IRQ(CODEC_IRQ_OFFSET)
#define BOARD_ALS_IRQ                   GPIO_S0_DED_IRQ(ALS_IRQ_OFFSET)

#define SIO_EC_ENABLE_PS2K       // Enable PS/2 Keyboard

#endif
