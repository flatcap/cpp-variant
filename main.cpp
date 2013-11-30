/* Copyright (c) 2013 Richard Russon (FlatCap)
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Library General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <iostream>
#include <stdexcept>
#include <cstdint>

#include "variant.h"

/**
 * test1
 */
void test1 (void)
{
	std::string     str = "a very long message that exceeds thirty-two characters";
	double		d   = ~0;
	bool		b   = ~0;
	uint8_t		u8  = ~0;
	 int8_t		s8  = ~0;
	uint16_t	u16 = ~0;
	 int16_t	s16 = ~0;
	uint32_t	u32 = ~0;
	 int32_t	s32 = ~0;
	uint64_t	u64 = ~0;
	 int64_t	s64 = ~0;

	std::cout << "std::string str: " <<       str << std::endl;
	std::cout << "double      d:   " <<       d   << std::endl;
	std::cout << "bool        b:   " <<       b   << std::endl;
	std::cout << "uint8_t     u8:  " << (int) u8  << std::endl;
	std::cout << " int8_t     s8:  " << (int) s8  << std::endl;
	std::cout << "uint16_t    u16: " <<       u16 << std::endl;
	std::cout << " int16_t    s16: " <<       s16 << std::endl;
	std::cout << "uint32_t    u32: " <<       u32 << std::endl;
	std::cout << " int32_t    s32: " <<       s32 << std::endl;
	std::cout << "uint64_t    u64: " <<       u64 << std::endl;
	std::cout << " int64_t    s64: " <<       s64 << std::endl;

	Variant v_str (str);
	Variant v_d   (d);
	Variant v_b   (b);
	Variant v_u8  (u8);
	Variant v_s8  (s8);
	Variant v_u16 (u16);
	Variant v_s16 (s16);
	Variant v_u32 (u32);
	Variant v_s32 (s32);
	Variant v_u64 (u64);
	Variant v_s64 (s64);
}


/**
 * main
 */
int main (int, char *[])
{
	test1();
	return 0;
}


