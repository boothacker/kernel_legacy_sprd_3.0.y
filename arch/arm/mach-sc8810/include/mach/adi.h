/* * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __ADI_H__
#define __ADI_H__

int sci_adi_read(u32 reg);
int sci_adi_raw_write(u32 reg, u16 val);
int sci_adi_write(u32 reg, u16 val, u16 msk);
int sci_adi_set(u32 reg, u16 bits);
int sci_adi_clr(u32 reg, u16 bits);

#endif //__ADI_H__