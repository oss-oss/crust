/*
 * Copyright © 2017 Samuel Holland <samuel@sholland.org>
 * SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0)
 */

#ifndef PLATFORM_MEMORY_H
#define PLATFORM_MEMORY_H

#define SRAM_A1_BASE  /* none */
#define SRAM_A1_SIZE  0x00008000
#define SRAM_A2_BASE  0x00004000
#define SRAM_A2_SIZE  0x00010000
#define DRAM_BASE     0x40000000
#define DRAM_SIZE     0xc0000000
#define VECTORS_BASE  0x00000000
#define VECTORS_SIZE  0x00004000

#define FIRMWARE_BASE (SRAM_A2_BASE)
#define FIRMWARE_SIZE (SRAM_A2_SIZE / 2)

#define STACK_BASE    (FIRMWARE_BASE + FIRMWARE_SIZE - STACK_SIZE)
#define STACK_SIZE    0x00000400

#endif /* PLATFORM_MEMORY_H */