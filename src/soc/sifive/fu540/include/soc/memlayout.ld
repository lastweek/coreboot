/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <memlayout.h>
#include <soc/addressmap.h>

#include <arch/header.ld>

#define L2LIM_START(addr) SYMBOL(l2lim, addr)
#define L2LIM_END(addr) SYMBOL(el2lim, addr)

SECTIONS
{
	L2LIM_START(FU540_L2LIM)
	BOOTBLOCK(FU540_L2LIM, 64K)
	CAR_STACK(FU540_L2LIM + 64K, 20K)
	PRERAM_CBMEM_CONSOLE(FU540_L2LIM + 84K, 8K)
	FMAP_CACHE(FU540_L2LIM + 92K, 2K)
	ROMSTAGE(FU540_L2LIM + 128K, 128K)
	PRERAM_CBFS_CACHE(FU540_L2LIM + 256K, 128K)
	L2LIM_END(FU540_L2LIM + 2M)

	DRAM_START(FU540_DRAM)
	REGION(opensbi, FU540_DRAM, 128K, 4K)
	RAMSTAGE(FU540_DRAM + 128K, 256K)
	MEM_STACK(FU540_DRAM + 448K, 20K)
	POSTRAM_CBFS_CACHE(FU540_DRAM + 512K, 32M - 512K)
}
