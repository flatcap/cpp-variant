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
#include <limits>

#include "basic.h"

/**
 * test_range
 */
void test_range (void)
{
	Variant bv;

	Variant str = (std::string) "highest";
	Variant d   = (double)      std::numeric_limits<double>::max();
	Variant b   = (bool)        std::numeric_limits<bool>::max();
	Variant u8  = (uint8_t)     std::numeric_limits<uint8_t>::max();
	Variant s8  = (int8_t)      std::numeric_limits<int8_t>::max();
	Variant u16 = (uint16_t)    std::numeric_limits<uint16_t>::max();
	Variant s16 = (int16_t)     std::numeric_limits<int16_t>::max();
	Variant u32 = (uint32_t)    std::numeric_limits<uint32_t>::max();
	Variant s32 = (int32_t)     std::numeric_limits<int32_t>::max();
	Variant u64 = (uint64_t)    std::numeric_limits<uint64_t>::max();
	Variant s64 = (int64_t)     std::numeric_limits<int64_t>::max();

	std::cout << std::endl;

	std::cout << str << std::endl;
	std::cout << d   << std::endl;
	std::cout << b   << std::endl;
	std::cout << u8  << std::endl;
	std::cout << s8  << std::endl;
	std::cout << u16 << std::endl;
	std::cout << s16 << std::endl;
	std::cout << u32 << std::endl;
	std::cout << s32 << std::endl;
	std::cout << u64 << std::endl;
	std::cout << s64 << std::endl;

	std::cout << std::endl;

	std::cout << "str " << (std::string) str << std::endl;
	std::cout << "d   " << (double)      d   << std::endl;
	std::cout << "b   " << (bool)        b   << std::endl;
	std::cout << "u8  " << (uint16_t)    u8  << std::endl;
	std::cout << "s8  " << (int16_t)     s8  << std::endl;
	std::cout << "u16 " << (uint16_t)    u16 << std::endl;
	std::cout << "s16 " << (int16_t)     s16 << std::endl;
	std::cout << "u32 " << (uint32_t)    u32 << std::endl;
	std::cout << "s32 " << (int32_t)     s32 << std::endl;
	std::cout << "u64 " << (uint64_t)    u64 << std::endl;
	std::cout << "s64 " << (int64_t)     s64 << std::endl;

	std::cout << std::endl;

	std::cout << "str " << (std::string) str << std::endl;
	std::cout << "d   " << (std::string) d   << std::endl;
	std::cout << "b   " << (std::string) b   << std::endl;
	std::cout << "u8  " << (std::string) u8  << std::endl;
	std::cout << "s8  " << (std::string) s8  << std::endl;
	std::cout << "u16 " << (std::string) u16 << std::endl;
	std::cout << "s16 " << (std::string) s16 << std::endl;
	std::cout << "u32 " << (std::string) u32 << std::endl;
	std::cout << "s32 " << (std::string) s32 << std::endl;
	std::cout << "u64 " << (std::string) u64 << std::endl;
	std::cout << "s64 " << (std::string) s64 << std::endl;

	str = (std::string) "lowest";
	d   = (double)      std::numeric_limits<double>::min();
	b   = (bool)        std::numeric_limits<bool>::min();
	u8  = (uint8_t)     std::numeric_limits<uint8_t>::min();
	s8  = (int8_t)      std::numeric_limits<int8_t>::min();
	u16 = (uint16_t)    std::numeric_limits<uint16_t>::min();
	s16 = (int16_t)     std::numeric_limits<int16_t>::min();
	u32 = (uint32_t)    std::numeric_limits<uint32_t>::min();
	s32 = (int32_t)     std::numeric_limits<int32_t>::min();
	u64 = (uint64_t)    std::numeric_limits<uint64_t>::min();
	s64 = (int64_t)     std::numeric_limits<int64_t>::min();

	std::cout << std::endl;

	std::cout << "str " << (std::string) str << std::endl;
	std::cout << "d   " << (double)      d   << std::endl;
	std::cout << "b   " << (bool)        b   << std::endl;
	std::cout << "u8  " << (uint16_t)    u8  << std::endl;
	std::cout << "s8  " << (int16_t)     s8  << std::endl;
	std::cout << "u16 " << (uint16_t)    u16 << std::endl;
	std::cout << "s16 " << (int16_t)     s16 << std::endl;
	std::cout << "u32 " << (uint32_t)    u32 << std::endl;
	std::cout << "s32 " << (int32_t)     s32 << std::endl;
	std::cout << "u64 " << (uint64_t)    u64 << std::endl;
	std::cout << "s64 " << (int64_t)     s64 << std::endl;

	std::cout << std::endl;

	std::cout << "str " << (std::string) str << std::endl;
	std::cout << "d   " << (std::string) d   << std::endl;
	std::cout << "b   " << (std::string) b   << std::endl;
	std::cout << "u8  " << (std::string) u8  << std::endl;
	std::cout << "s8  " << (std::string) s8  << std::endl;
	std::cout << "u16 " << (std::string) u16 << std::endl;
	std::cout << "s16 " << (std::string) s16 << std::endl;
	std::cout << "u32 " << (std::string) u32 << std::endl;
	std::cout << "s32 " << (std::string) s32 << std::endl;
	std::cout << "u64 " << (std::string) u64 << std::endl;
	std::cout << "s64 " << (std::string) s64 << std::endl;

	std::cout << std::endl;
}


/**
 * main
 */
int main (int, char *[])
{
	test_range();

#if 0
	Variant bv = -42;

	std::cout << "b   " << (bool)     bv << std::endl;
	std::cout << "u8  " << (int)      bv << std::endl;
	std::cout << "s8  " << (int)      bv << std::endl;
	std::cout << "u16 " << (uint16_t) bv << std::endl;
	std::cout << "s16 " << (int16_t)  bv << std::endl;
	std::cout << "u32 " << (uint32_t) bv << std::endl;
	std::cout << "s32 " << (int32_t)  bv << std::endl;
	std::cout << "u64 " << (uint64_t) bv << std::endl;
	std::cout << "s64 " << (int64_t)  bv << std::endl;

	std::cout << std::endl;

	std::cout << "b   " << (std::string) bv << std::endl;
	std::cout << "u8  " << (std::string) bv << std::endl;
	std::cout << "s8  " << (std::string) bv << std::endl;
	std::cout << "u16 " << (std::string) bv << std::endl;
	std::cout << "s16 " << (std::string) bv << std::endl;
	std::cout << "u32 " << (std::string) bv << std::endl;
	std::cout << "s32 " << (std::string) bv << std::endl;
	std::cout << "u64 " << (std::string) bv << std::endl;
	std::cout << "s64 " << (std::string) bv << std::endl;
#endif
}

