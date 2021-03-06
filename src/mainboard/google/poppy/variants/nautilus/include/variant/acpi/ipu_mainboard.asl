/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

Scope (\_SB.PCI0.CIO2)
{
        /* Define two ports for CIO2 device where endpoint of port0
	is connected to CAM0 and endpoint of port1 is connected to CAM1
	Endpoints can be customized by the variants of the based board */

	Name (_DSD, Package () {
		ToUUID ("dbb8e3e6-5886-4ba6-8795-1319f52a966b"),
		Package () {
			Package () { "port0", "PRT0" },
		}
	})

	Name (PRT0, Package () {
		ToUUID ("daffd814-6eba-4d8c-8a91-bc9bbf4aa301"),
		Package () {
			Package () { "port", 0 }, /* csi 0 */
		},
		ToUUID ("dbb8e3e6-5886-4ba6-8795-1319f52a966b"),
		Package () {
			Package () { "endpoint0", "EP00" },
		}
	})
}
