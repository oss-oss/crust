/*
 * Copyright © 2017-2020 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#include <device.h>
#include <pmic/axp803.h>

const struct device *
pmic_get(void)
{
	const struct device *pmic = NULL;

	if (IS_ENABLED(CONFIG_PMIC_AXP803))
		pmic = device_get(&axp803_pmic.dev);

	return pmic;
}
