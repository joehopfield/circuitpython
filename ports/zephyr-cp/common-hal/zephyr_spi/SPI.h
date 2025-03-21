// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2016 Scott Shawcroft
//
// SPDX-License-Identifier: MIT

#pragma once

#include "py/obj.h"

typedef struct {
    mp_obj_base_t base;
    // const spim_peripheral_t *spim_peripheral;
    bool has_lock;
    uint8_t clock_pin_number;
    uint8_t MOSI_pin_number;
    uint8_t MISO_pin_number;
} busio_spi_obj_t;

void spi_reset(void);
