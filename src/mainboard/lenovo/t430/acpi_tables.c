/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <southbridge/intel/bd82x6x/nvs.h>

void acpi_create_gnvs(global_nvs_t *gnvs)
{
	/* The lid is open by default */
	gnvs->lids = 1;

	/* Config TDP Down */
	gnvs->f0of = 80;
	gnvs->f0on = 90;

	/* Temperature at which OS will shutdown */
	gnvs->tcrt = 100;
	/* Temperature at which OS will throttle CPU */
	gnvs->tpsv = 90;
	/* Tj_max value for calculating PECI CPU temperature */
	gnvs->tmax = 105;
}
