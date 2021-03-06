/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <security/tpm/tis.h>
#include <soc/gpio.h>
#include <variant/gpio.h>

int tis_plat_irq_status(void)
{
	return gpio_interrupt_status(H1_PCH_INT);
}
