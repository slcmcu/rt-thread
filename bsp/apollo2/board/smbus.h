/*
 * File      : smbus.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006 - 2017, RT-Thread Development Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017-12-04     Haley        the first version
 */

#ifndef __SMBUS_H_
#define __SMBUS_H_

#include <rtthread.h>

/**
 * @brief External function definitions
 *
 */
int rt_hw_smbus_init(void);
rt_uint8_t am_smbus_tx_then_tx(rt_uint8_t SlaveAddress, rt_uint8_t command, rt_uint8_t* pBuffer, rt_uint16_t bytesNumber);
rt_uint8_t am_smbus_tx_then_rx(rt_uint8_t SlaveAddress, rt_uint8_t command, rt_uint8_t* pBuffer, rt_uint16_t bytesNumber);
void am_smbus_scl_high(void);
void am_smbus_scl_low(void);

#endif // __SMBUS_H_
