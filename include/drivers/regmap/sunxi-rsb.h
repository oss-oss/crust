/*
 * Copyright © 2017-2020 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_REGMAP_SUNXI_RSB_H
#define DRIVERS_REGMAP_SUNXI_RSB_H

#include <clock.h>
#include <gpio.h>
#include <regmap.h>

struct sunxi_rsb {
	struct device       dev;
	struct clock_handle clock;
	struct gpio_handle  pins[2];
	uintptr_t           regs;
};

extern const struct sunxi_rsb r_rsb;

#endif /* DRIVERS_REGMAP_SUNXI_RSB_H */
