/* SPDX-License-Identifier: GPL-2.0-or-later */
/* This file is part of the coreboot project. */

#ifndef SUPERIO_WINBOND_W83627DHG_H
#define SUPERIO_WINBOND_W83627DHG_H

#include <device/pnp_type.h>

#define W83627DHG_FDC		0  /* Floppy */
#define W83627DHG_PP		1  /* Parallel port */
#define W83627DHG_SP1		2  /* Com1 */
#define W83627DHG_SP2		3  /* Com2 */
#define W83627DHG_KBC		5  /* PS/2 keyboard & mouse */
#define W83627DHG_SPI		6  /* Serial peripheral interface */
#define W83627DHG_WDTO_PLED	8  /* WDTO#, PLED */
#define W83627DHG_ACPI		10 /* ACPI */
#define W83627DHG_HWM		11 /* Hardware monitor */
#define W83627DHG_PECI_SST	12 /* PECI, SST */

/* The following are handled using "virtual LDNs" (hence the _V suffix). */
#define W83627DHG_GPIO6_V	7  /* GPIO6 */
#define W83627DHG_GPIO2345_V	9  /* GPIO2, GPIO3, GPIO4, GPIO5 */

/*
 * Virtual devices sharing the enables are encoded as follows:
 *   VLDN = baseLDN[7:0] | [10:8] bitpos of enable in 0x30 of baseLDN
 */

/* GPIO6 has bit 3 as enable (instead of bit 0 as usual). */
#define W83627DHG_GPIO6	((3 << 8) | W83627DHG_GPIO6_V)

#define W83627DHG_GPIO2	((0 << 8) | W83627DHG_GPIO2345_V)
#define W83627DHG_GPIO3	((1 << 8) | W83627DHG_GPIO2345_V)
#define W83627DHG_GPIO4	((2 << 8) | W83627DHG_GPIO2345_V)
#define W83627DHG_GPIO5	((3 << 8) | W83627DHG_GPIO2345_V)

/* Note: There is no GPIO1 on the W83627DHG as per datasheet. */

void pnp_enter_ext_func_mode(pnp_devfn_t dev);
void pnp_exit_ext_func_mode(pnp_devfn_t dev);
void w83627dhg_enable_i2c(pnp_devfn_t dev);
void w83627dhg_set_clksel_48(pnp_devfn_t dev);

#endif /* SUPERIO_WINBOND_W83627DHG_H */
