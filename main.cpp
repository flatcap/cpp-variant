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
#include <vector>
#include <algorithm>
#include <random>

#include "variant.h"

using namespace std;

/**
 * test_range
 */
void
test_range (void)
{
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
 * test_compare
 */
void
test_compare (void)
{
	Variant a = 42;
	Variant b = 42;

	if (a == b)  std::cout << "same\n";
	else         std::cout << "diff\n";

	if (a > b)   std::cout << "bigger\n";
	else         std::cout << "!bigger\n";

	if (a < b)   std::cout << "less\n";
	else         std::cout << "!less\n";
}

/**
 * test_random
 */
void
test_random (void)
{
	std::vector<Variant> vv;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0,999);

	for (int i = 0; i < 1000; i++) {
		vv.push_back (distribution(generator));
	}

	std::sort (vv.begin(), vv.end());

	for (auto v : vv) {
		std::cout << (int) v << ", ";
	}
	std::cout << std::endl;
}

/**
 * test_swap (void)
 */
void
test_swap (void)
{
}


/**
 * cast01 - empty
 */
void cast01 (void)
{
	Variant v;

	std::cout << v << '\n';

	try { string   a01 = (string)   v; std::cout << "success: (string)   a01 = " <<       a01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   a01 = " << e.what() << "\n"; }
	try { double   a02 = (double)   v; std::cout << "success: (double)   a02 = " <<       a02 << "\n"; } catch (exception &e) { std::cout << "error:   (double)   a02 = " << e.what() << "\n"; }
	try { bool     a03 = (bool)     v; std::cout << "success: (bool)     a03 = " <<       a03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     a03 = " << e.what() << "\n"; }
	try { uint8_t  a04 = (uint8_t)  v; std::cout << "success: (uint8_t)  a04 = " << (int) a04 << "\n"; } catch (exception &e) { std::cout << "error:   (uint8_t)  a04 = " << e.what() << "\n"; }
	try { int8_t   a05 = (int8_t)   v; std::cout << "success: (int8_t)   a05 = " << (int) a05 << "\n"; } catch (exception &e) { std::cout << "error:   (int8_t)   a05 = " << e.what() << "\n"; }
	try { uint16_t a06 = (uint16_t) v; std::cout << "success: (uint16_t) a06 = " <<       a06 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) a06 = " << e.what() << "\n"; }
	try { int16_t  a07 = (int16_t)  v; std::cout << "success: (int16_t)  a07 = " <<       a07 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  a07 = " << e.what() << "\n"; }
	try { uint32_t a08 = (uint32_t) v; std::cout << "success: (uint32_t) a08 = " <<       a08 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) a08 = " << e.what() << "\n"; }
	try { int32_t  a09 = (int32_t)  v; std::cout << "success: (int32_t)  a09 = " <<       a09 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  a09 = " << e.what() << "\n"; }
	try { uint64_t a10 = (uint64_t) v; std::cout << "success: (uint64_t) a10 = " <<       a10 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) a10 = " << e.what() << "\n"; }
	try { int64_t  a11 = (int64_t)  v; std::cout << "success: (int64_t)  a11 = " <<       a11 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  a11 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast02 - string
 */
void cast02 (void)
{
	Variant v1 (std::string ("this is a message"));

	std::cout << v1 << '\n';

	try { string   b01 = (string)   v1; std::cout << "success: (string)   b01 = " <<       b01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   b01 = " << e.what() << "\n"; }
	try { double   b02 = (double)   v1; std::cout << "error:   (double)   b02 = " <<       b02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   b02 = " << e.what() << "\n"; }
	try { bool     b03 = (bool)     v1; std::cout << "success: (bool)     b03 = " <<       b03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     b03 = " << e.what() << "\n"; }
	try { uint8_t  b04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  b04 = " << (int) b04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  b04 = " << e.what() << "\n"; }
	try { int8_t   b05 = (int8_t)   v1; std::cout << "error:   (int8_t)   b05 = " << (int) b05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   b05 = " << e.what() << "\n"; }
	try { uint16_t b06 = (uint16_t) v1; std::cout << "error:   (uint16_t) b06 = " <<       b06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) b06 = " << e.what() << "\n"; }
	try { int16_t  b07 = (int16_t)  v1; std::cout << "error:   (int16_t)  b07 = " <<       b07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  b07 = " << e.what() << "\n"; }
	try { uint32_t b08 = (uint32_t) v1; std::cout << "error:   (uint32_t) b08 = " <<       b08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) b08 = " << e.what() << "\n"; }
	try { int32_t  b09 = (int32_t)  v1; std::cout << "error:   (int32_t)  b09 = " <<       b09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  b09 = " << e.what() << "\n"; }
	try { uint64_t b10 = (uint64_t) v1; std::cout << "error:   (uint64_t) b10 = " <<       b10 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) b10 = " << e.what() << "\n"; }
	try { int64_t  b11 = (int64_t)  v1; std::cout << "error:   (int64_t)  b11 = " <<       b11 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  b11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::string(""));

	std::cout << v2 << '\n';

	try { string   b12 = (string)   v2; std::cout << "success: (string)   b12 = " <<       b12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   b12 = " << e.what() << "\n"; }
	try { double   b13 = (double)   v2; std::cout << "error:   (double)   b13 = " <<       b13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   b13 = " << e.what() << "\n"; }
	try { bool     b14 = (bool)     v2; std::cout << "success: (bool)     b14 = " <<       b14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     b14 = " << e.what() << "\n"; }
	try { uint8_t  b15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  b15 = " << (int) b15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  b15 = " << e.what() << "\n"; }
	try { int8_t   b16 = (int8_t)   v2; std::cout << "error:   (int8_t)   b16 = " << (int) b16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   b16 = " << e.what() << "\n"; }
	try { uint16_t b17 = (uint16_t) v2; std::cout << "error:   (uint16_t) b17 = " <<       b17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) b17 = " << e.what() << "\n"; }
	try { int16_t  b18 = (int16_t)  v2; std::cout << "error:   (int16_t)  b18 = " <<       b18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  b18 = " << e.what() << "\n"; }
	try { uint32_t b19 = (uint32_t) v2; std::cout << "error:   (uint32_t) b19 = " <<       b19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) b19 = " << e.what() << "\n"; }
	try { int32_t  b20 = (int32_t)  v2; std::cout << "error:   (int32_t)  b20 = " <<       b20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  b20 = " << e.what() << "\n"; }
	try { uint64_t b21 = (uint64_t) v2; std::cout << "error:   (uint64_t) b21 = " <<       b21 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) b21 = " << e.what() << "\n"; }
	try { int64_t  b22 = (int64_t)  v2; std::cout << "error:   (int64_t)  b22 = " <<       b22 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  b22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::string ("0"));

	std::cout << v3 << '\n';

	try { string   b23 = (string)   v3; std::cout << "success: (string)   b23 = " <<       b23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   b23 = " << e.what() << "\n"; }
	try { double   b24 = (double)   v3; std::cout << "error:   (double)   b24 = " <<       b24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   b24 = " << e.what() << "\n"; }
	try { bool     b25 = (bool)     v3; std::cout << "success: (bool)     b25 = " <<       b25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     b25 = " << e.what() << "\n"; }
	try { uint8_t  b26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  b26 = " << (int) b26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  b26 = " << e.what() << "\n"; }
	try { int8_t   b27 = (int8_t)   v3; std::cout << "error:   (int8_t)   b27 = " << (int) b27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   b27 = " << e.what() << "\n"; }
	try { uint16_t b28 = (uint16_t) v3; std::cout << "error:   (uint16_t) b28 = " <<       b28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) b28 = " << e.what() << "\n"; }
	try { int16_t  b29 = (int16_t)  v3; std::cout << "error:   (int16_t)  b29 = " <<       b29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  b29 = " << e.what() << "\n"; }
	try { uint32_t b30 = (uint32_t) v3; std::cout << "error:   (uint32_t) b30 = " <<       b30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) b30 = " << e.what() << "\n"; }
	try { int32_t  b31 = (int32_t)  v3; std::cout << "error:   (int32_t)  b31 = " <<       b31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  b31 = " << e.what() << "\n"; }
	try { uint64_t b32 = (uint64_t) v3; std::cout << "error:   (uint64_t) b32 = " <<       b32 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) b32 = " << e.what() << "\n"; }
	try { int64_t  b33 = (int64_t)  v3; std::cout << "error:   (int64_t)  b33 = " <<       b33 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  b33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast03 - string
 */
void cast03 (void)
{
	Variant v1 ("this is a message");

	std::cout << v1 << '\n';

	try { string   c01 = (string)   v1; std::cout << "success: (string)   c01 = " <<       c01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   c01 = " << e.what() << "\n"; }
	try { double   c02 = (double)   v1; std::cout << "error:   (double)   c02 = " <<       c02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   c02 = " << e.what() << "\n"; }
	try { bool     c03 = (bool)     v1; std::cout << "success: (bool)     c03 = " <<       c03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     c03 = " << e.what() << "\n"; }
	try { uint8_t  c04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  c04 = " << (int) c04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  c04 = " << e.what() << "\n"; }
	try { int8_t   c05 = (int8_t)   v1; std::cout << "error:   (int8_t)   c05 = " << (int) c05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   c05 = " << e.what() << "\n"; }
	try { uint16_t c06 = (uint16_t) v1; std::cout << "error:   (uint16_t) c06 = " <<       c06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) c06 = " << e.what() << "\n"; }
	try { int16_t  c07 = (int16_t)  v1; std::cout << "error:   (int16_t)  c07 = " <<       c07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  c07 = " << e.what() << "\n"; }
	try { uint32_t c08 = (uint32_t) v1; std::cout << "error:   (uint32_t) c08 = " <<       c08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) c08 = " << e.what() << "\n"; }
	try { int32_t  c09 = (int32_t)  v1; std::cout << "error:   (int32_t)  c09 = " <<       c09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  c09 = " << e.what() << "\n"; }
	try { uint64_t c10 = (uint64_t) v1; std::cout << "error:   (uint64_t) c10 = " <<       c10 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) c10 = " << e.what() << "\n"; }
	try { int64_t  c11 = (int64_t)  v1; std::cout << "error:   (int64_t)  c11 = " <<       c11 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  c11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::string(""));

	std::cout << v2 << '\n';

	try { string   c12 = (string)   v2; std::cout << "success: (string)   c12 = " <<       c12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   c12 = " << e.what() << "\n"; }
	try { double   c13 = (double)   v2; std::cout << "error:   (double)   c13 = " <<       c13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   c13 = " << e.what() << "\n"; }
	try { bool     c14 = (bool)     v2; std::cout << "success: (bool)     c14 = " <<       c14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     c14 = " << e.what() << "\n"; }
	try { uint8_t  c15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  c15 = " << (int) c15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  c15 = " << e.what() << "\n"; }
	try { int8_t   c16 = (int8_t)   v2; std::cout << "error:   (int8_t)   c16 = " << (int) c16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   c16 = " << e.what() << "\n"; }
	try { uint16_t c17 = (uint16_t) v2; std::cout << "error:   (uint16_t) c17 = " <<       c17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) c17 = " << e.what() << "\n"; }
	try { int16_t  c18 = (int16_t)  v2; std::cout << "error:   (int16_t)  c18 = " <<       c18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  c18 = " << e.what() << "\n"; }
	try { uint32_t c19 = (uint32_t) v2; std::cout << "error:   (uint32_t) c19 = " <<       c19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) c19 = " << e.what() << "\n"; }
	try { int32_t  c20 = (int32_t)  v2; std::cout << "error:   (int32_t)  c20 = " <<       c20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  c20 = " << e.what() << "\n"; }
	try { uint64_t c21 = (uint64_t) v2; std::cout << "error:   (uint64_t) c21 = " <<       c21 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) c21 = " << e.what() << "\n"; }
	try { int64_t  c22 = (int64_t)  v2; std::cout << "error:   (int64_t)  c22 = " <<       c22 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  c22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::string ("0"));

	std::cout << v3 << '\n';

	try { string   c23 = (string)   v3; std::cout << "success: (string)   c23 = " <<       c23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   c23 = " << e.what() << "\n"; }
	try { double   c24 = (double)   v3; std::cout << "error:   (double)   c24 = " <<       c24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   c24 = " << e.what() << "\n"; }
	try { bool     c25 = (bool)     v3; std::cout << "success: (bool)     c25 = " <<       c25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     c25 = " << e.what() << "\n"; }
	try { uint8_t  c26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  c26 = " << (int) c26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  c26 = " << e.what() << "\n"; }
	try { int8_t   c27 = (int8_t)   v3; std::cout << "error:   (int8_t)   c27 = " << (int) c27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   c27 = " << e.what() << "\n"; }
	try { uint16_t c28 = (uint16_t) v3; std::cout << "error:   (uint16_t) c28 = " <<       c28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) c28 = " << e.what() << "\n"; }
	try { int16_t  c29 = (int16_t)  v3; std::cout << "error:   (int16_t)  c29 = " <<       c29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  c29 = " << e.what() << "\n"; }
	try { uint32_t c30 = (uint32_t) v3; std::cout << "error:   (uint32_t) c30 = " <<       c30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) c30 = " << e.what() << "\n"; }
	try { int32_t  c31 = (int32_t)  v3; std::cout << "error:   (int32_t)  c31 = " <<       c31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  c31 = " << e.what() << "\n"; }
	try { uint64_t c32 = (uint64_t) v3; std::cout << "error:   (uint64_t) c32 = " <<       c32 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) c32 = " << e.what() << "\n"; }
	try { int64_t  c33 = (int64_t)  v3; std::cout << "error:   (int64_t)  c33 = " <<       c33 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  c33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast04 - double
 */
void cast04 (void)
{
	Variant v1 ((double) 3.141592654);

	std::cout << v1 << '\n';

	try { string   d01 = (string)   v1; std::cout << "success: (string)   d01 = " <<       d01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   d01 = " << e.what() << "\n"; }
	try { double   d02 = (double)   v1; std::cout << "success: (double)   d02 = " <<       d02 << "\n"; } catch (exception &e) { std::cout << "error:   (double)   d02 = " << e.what() << "\n"; }
	try { bool     d03 = (bool)     v1; std::cout << "success: (bool)     d03 = " <<       d03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     d03 = " << e.what() << "\n"; }
	try { uint8_t  d04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  d04 = " << (int) d04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  d04 = " << e.what() << "\n"; }
	try { int8_t   d05 = (int8_t)   v1; std::cout << "error:   (int8_t)   d05 = " << (int) d05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   d05 = " << e.what() << "\n"; }
	try { uint16_t d06 = (uint16_t) v1; std::cout << "error:   (uint16_t) d06 = " <<       d06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) d06 = " << e.what() << "\n"; }
	try { int16_t  d07 = (int16_t)  v1; std::cout << "error:   (int16_t)  d07 = " <<       d07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  d07 = " << e.what() << "\n"; }
	try { uint32_t d08 = (uint32_t) v1; std::cout << "error:   (uint32_t) d08 = " <<       d08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) d08 = " << e.what() << "\n"; }
	try { int32_t  d09 = (int32_t)  v1; std::cout << "error:   (int32_t)  d09 = " <<       d09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  d09 = " << e.what() << "\n"; }
	try { uint64_t d10 = (uint64_t) v1; std::cout << "error:   (uint64_t) d10 = " <<       d10 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) d10 = " << e.what() << "\n"; }
	try { int64_t  d11 = (int64_t)  v1; std::cout << "error:   (int64_t)  d11 = " <<       d11 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  d11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<double>::min());

	std::cout << v2 << '\n';

	try { string   d12 = (string)   v2; std::cout << "success: (string)   d12 = " <<       d12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   d12 = " << e.what() << "\n"; }
	try { double   d13 = (double)   v2; std::cout << "success: (double)   d13 = " <<       d13 << "\n"; } catch (exception &e) { std::cout << "error:   (double)   d13 = " << e.what() << "\n"; }
	try { bool     d14 = (bool)     v2; std::cout << "success: (bool)     d14 = " <<       d14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     d14 = " << e.what() << "\n"; }
	try { uint8_t  d15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  d15 = " << (int) d15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  d15 = " << e.what() << "\n"; }
	try { int8_t   d16 = (int8_t)   v2; std::cout << "error:   (int8_t)   d16 = " << (int) d16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   d16 = " << e.what() << "\n"; }
	try { uint16_t d17 = (uint16_t) v2; std::cout << "error:   (uint16_t) d17 = " <<       d17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) d17 = " << e.what() << "\n"; }
	try { int16_t  d18 = (int16_t)  v2; std::cout << "error:   (int16_t)  d18 = " <<       d18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  d18 = " << e.what() << "\n"; }
	try { uint32_t d19 = (uint32_t) v2; std::cout << "error:   (uint32_t) d19 = " <<       d19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) d19 = " << e.what() << "\n"; }
	try { int32_t  d20 = (int32_t)  v2; std::cout << "error:   (int32_t)  d20 = " <<       d20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  d20 = " << e.what() << "\n"; }
	try { uint64_t d21 = (uint64_t) v2; std::cout << "error:   (uint64_t) d21 = " <<       d21 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) d21 = " << e.what() << "\n"; }
	try { int64_t  d22 = (int64_t)  v2; std::cout << "error:   (int64_t)  d22 = " <<       d22 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  d22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<double>::max());

	std::cout << v3 << '\n';

	try { string   d23 = (string)   v3; std::cout << "success: (string)   d23 = " <<       d23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   d23 = " << e.what() << "\n"; }
	try { double   d24 = (double)   v3; std::cout << "success: (double)   d24 = " <<       d24 << "\n"; } catch (exception &e) { std::cout << "error:   (double)   d24 = " << e.what() << "\n"; }
	try { bool     d25 = (bool)     v3; std::cout << "success: (bool)     d25 = " <<       d25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     d25 = " << e.what() << "\n"; }
	try { uint8_t  d26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  d26 = " << (int) d26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  d26 = " << e.what() << "\n"; }
	try { int8_t   d27 = (int8_t)   v3; std::cout << "error:   (int8_t)   d27 = " << (int) d27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   d27 = " << e.what() << "\n"; }
	try { uint16_t d28 = (uint16_t) v3; std::cout << "error:   (uint16_t) d28 = " <<       d28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) d28 = " << e.what() << "\n"; }
	try { int16_t  d29 = (int16_t)  v3; std::cout << "error:   (int16_t)  d29 = " <<       d29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  d29 = " << e.what() << "\n"; }
	try { uint32_t d30 = (uint32_t) v3; std::cout << "error:   (uint32_t) d30 = " <<       d30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) d30 = " << e.what() << "\n"; }
	try { int32_t  d31 = (int32_t)  v3; std::cout << "error:   (int32_t)  d31 = " <<       d31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  d31 = " << e.what() << "\n"; }
	try { uint64_t d32 = (uint64_t) v3; std::cout << "error:   (uint64_t) d32 = " <<       d32 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) d32 = " << e.what() << "\n"; }
	try { int64_t  d33 = (int64_t)  v3; std::cout << "error:   (int64_t)  d33 = " <<       d33 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  d33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast05 - bool
 */
void cast05 (void)
{
	Variant v1 (true);

	std::cout << v1 << '\n';

	try { string   e01 = (string)   v1; std::cout << "success: (string)   e01 = " <<       e01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   e01 = " << e.what() << "\n"; }
	try { double   e02 = (double)   v1; std::cout << "success: (double)   e02 = " <<       e02 << "\n"; } catch (exception &e) { std::cout << "error:   (double)   e02 = " << e.what() << "\n"; }
	try { bool     e03 = (bool)     v1; std::cout << "success: (bool)     e03 = " <<       e03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     e03 = " << e.what() << "\n"; }
	try { uint8_t  e04 = (uint8_t)  v1; std::cout << "success: (uint8_t)  e04 = " << (int) e04 << "\n"; } catch (exception &e) { std::cout << "error:   (uint8_t)  e04 = " << e.what() << "\n"; }
	try { int8_t   e05 = (int8_t)   v1; std::cout << "success: (int8_t)   e05 = " << (int) e05 << "\n"; } catch (exception &e) { std::cout << "error:   (int8_t)   e05 = " << e.what() << "\n"; }
	try { uint16_t e06 = (uint16_t) v1; std::cout << "success: (uint16_t) e06 = " <<       e06 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) e06 = " << e.what() << "\n"; }
	try { int16_t  e07 = (int16_t)  v1; std::cout << "success: (int16_t)  e07 = " <<       e07 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  e07 = " << e.what() << "\n"; }
	try { uint32_t e08 = (uint32_t) v1; std::cout << "success: (uint32_t) e08 = " <<       e08 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) e08 = " << e.what() << "\n"; }
	try { int32_t  e09 = (int32_t)  v1; std::cout << "success: (int32_t)  e09 = " <<       e09 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  e09 = " << e.what() << "\n"; }
	try { uint64_t e10 = (uint64_t) v1; std::cout << "success: (uint64_t) e10 = " <<       e10 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) e10 = " << e.what() << "\n"; }
	try { int64_t  e11 = (int64_t)  v1; std::cout << "success: (int64_t)  e11 = " <<       e11 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  e11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (false);

	std::cout << v2 << '\n';

	try { string   e12 = (string)   v2; std::cout << "success: (string)   e12 = " <<       e12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   e12 = " << e.what() << "\n"; }
	try { double   e13 = (double)   v2; std::cout << "success: (double)   e13 = " <<       e13 << "\n"; } catch (exception &e) { std::cout << "error:   (double)   e13 = " << e.what() << "\n"; }
	try { bool     e14 = (bool)     v2; std::cout << "success: (bool)     e14 = " <<       e14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     e14 = " << e.what() << "\n"; }
	try { uint8_t  e15 = (uint8_t)  v2; std::cout << "success: (uint8_t)  e15 = " << (int) e15 << "\n"; } catch (exception &e) { std::cout << "error:   (uint8_t)  e15 = " << e.what() << "\n"; }
	try { int8_t   e16 = (int8_t)   v2; std::cout << "success: (int8_t)   e16 = " << (int) e16 << "\n"; } catch (exception &e) { std::cout << "error:   (int8_t)   e16 = " << e.what() << "\n"; }
	try { uint16_t e17 = (uint16_t) v2; std::cout << "success: (uint16_t) e17 = " <<       e17 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) e17 = " << e.what() << "\n"; }
	try { int16_t  e18 = (int16_t)  v2; std::cout << "success: (int16_t)  e18 = " <<       e18 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  e18 = " << e.what() << "\n"; }
	try { uint32_t e19 = (uint32_t) v2; std::cout << "success: (uint32_t) e19 = " <<       e19 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) e19 = " << e.what() << "\n"; }
	try { int32_t  e20 = (int32_t)  v2; std::cout << "success: (int32_t)  e20 = " <<       e20 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  e20 = " << e.what() << "\n"; }
	try { uint64_t e21 = (uint64_t) v2; std::cout << "success: (uint64_t) e21 = " <<       e21 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) e21 = " << e.what() << "\n"; }
	try { int64_t  e22 = (int64_t)  v2; std::cout << "success: (int64_t)  e22 = " <<       e22 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  e22 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast06 - uint8_t
 */
void cast06 (void)
{
	Variant v1 ((uint8_t) 42);

	std::cout << v1 << '\n';

	try { string   f01 = (string)   v1; std::cout << "success: (string)   f01 = " <<       f01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   f01 = " << e.what() << "\n"; }
	try { double   f02 = (double)   v1; std::cout << "error:   (double)   f02 = " <<       f02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   f02 = " << e.what() << "\n"; }
	try { bool     f03 = (bool)     v1; std::cout << "success: (bool)     f03 = " <<       f03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     f03 = " << e.what() << "\n"; }
	try { uint8_t  f04 = (uint8_t)  v1; std::cout << "success: (uint8_t)  f04 = " << (int) f04 << "\n"; } catch (exception &e) { std::cout << "error:   (uint8_t)  f04 = " << e.what() << "\n"; }
	try { int8_t   f05 = (int8_t)   v1; std::cout << "error:   (int8_t)   f05 = " << (int) f05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   f05 = " << e.what() << "\n"; }
	try { uint16_t f06 = (uint16_t) v1; std::cout << "success: (uint16_t) f06 = " <<       f06 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) f06 = " << e.what() << "\n"; }
	try { int16_t  f07 = (int16_t)  v1; std::cout << "error:   (int16_t)  f07 = " <<       f07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  f07 = " << e.what() << "\n"; }
	try { uint32_t f08 = (uint32_t) v1; std::cout << "success: (uint32_t) f08 = " <<       f08 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) f08 = " << e.what() << "\n"; }
	try { int32_t  f09 = (int32_t)  v1; std::cout << "error:   (int32_t)  f09 = " <<       f09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  f09 = " << e.what() << "\n"; }
	try { uint64_t f10 = (uint64_t) v1; std::cout << "success: (uint64_t) f10 = " <<       f10 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) f10 = " << e.what() << "\n"; }
	try { int64_t  f11 = (int64_t)  v1; std::cout << "error:   (int64_t)  f11 = " <<       f11 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  f11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint8_t>::min());

	std::cout << v2 << '\n';

	try { string   f12 = (string)   v2; std::cout << "success: (string)   f12 = " <<       f12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   f12 = " << e.what() << "\n"; }
	try { double   f13 = (double)   v2; std::cout << "error:   (double)   f13 = " <<       f13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   f13 = " << e.what() << "\n"; }
	try { bool     f14 = (bool)     v2; std::cout << "success: (bool)     f14 = " <<       f14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     f14 = " << e.what() << "\n"; }
	try { uint8_t  f15 = (uint8_t)  v2; std::cout << "success: (uint8_t)  f15 = " << (int) f15 << "\n"; } catch (exception &e) { std::cout << "error:   (uint8_t)  f15 = " << e.what() << "\n"; }
	try { int8_t   f16 = (int8_t)   v2; std::cout << "error:   (int8_t)   f16 = " << (int) f16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   f16 = " << e.what() << "\n"; }
	try { uint16_t f17 = (uint16_t) v2; std::cout << "success: (uint16_t) f17 = " <<       f17 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) f17 = " << e.what() << "\n"; }
	try { int16_t  f18 = (int16_t)  v2; std::cout << "error:   (int16_t)  f18 = " <<       f18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  f18 = " << e.what() << "\n"; }
	try { uint32_t f19 = (uint32_t) v2; std::cout << "success: (uint32_t) f19 = " <<       f19 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) f19 = " << e.what() << "\n"; }
	try { int32_t  f20 = (int32_t)  v2; std::cout << "error:   (int32_t)  f20 = " <<       f20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  f20 = " << e.what() << "\n"; }
	try { uint64_t f21 = (uint64_t) v2; std::cout << "success: (uint64_t) f21 = " <<       f21 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) f21 = " << e.what() << "\n"; }
	try { int64_t  f22 = (int64_t)  v2; std::cout << "error:   (int64_t)  f22 = " <<       f22 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  f22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint8_t>::max());

	std::cout << v3 << '\n';

	try { string   f23 = (string)   v3; std::cout << "success: (string)   f23 = " <<       f23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   f23 = " << e.what() << "\n"; }
	try { double   f24 = (double)   v3; std::cout << "error:   (double)   f24 = " <<       f24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   f24 = " << e.what() << "\n"; }
	try { bool     f25 = (bool)     v3; std::cout << "success: (bool)     f25 = " <<       f25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     f25 = " << e.what() << "\n"; }
	try { uint8_t  f26 = (uint8_t)  v3; std::cout << "success: (uint8_t)  f26 = " << (int) f26 << "\n"; } catch (exception &e) { std::cout << "error:   (uint8_t)  f26 = " << e.what() << "\n"; }
	try { int8_t   f27 = (int8_t)   v3; std::cout << "error:   (int8_t)   f27 = " << (int) f27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   f27 = " << e.what() << "\n"; }
	try { uint16_t f28 = (uint16_t) v3; std::cout << "success: (uint16_t) f28 = " <<       f28 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) f28 = " << e.what() << "\n"; }
	try { int16_t  f29 = (int16_t)  v3; std::cout << "error:   (int16_t)  f29 = " <<       f29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  f29 = " << e.what() << "\n"; }
	try { uint32_t f30 = (uint32_t) v3; std::cout << "success: (uint32_t) f30 = " <<       f30 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) f30 = " << e.what() << "\n"; }
	try { int32_t  f31 = (int32_t)  v3; std::cout << "error:   (int32_t)  f31 = " <<       f31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  f31 = " << e.what() << "\n"; }
	try { uint64_t f32 = (uint64_t) v3; std::cout << "success: (uint64_t) f32 = " <<       f32 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) f32 = " << e.what() << "\n"; }
	try { int64_t  f33 = (int64_t)  v3; std::cout << "error:   (int64_t)  f33 = " <<       f33 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  f33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast07 - int8_t
 */
void cast07 (void)
{
	Variant v1 ((int8_t) 42);

	std::cout << v1 << '\n';

	try { string   g01 = (string)   v1; std::cout << "success: (string)   g01 = " <<       g01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   g01 = " << e.what() << "\n"; }
	try { double   g02 = (double)   v1; std::cout << "error:   (double)   g02 = " <<       g02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   g02 = " << e.what() << "\n"; }
	try { bool     g03 = (bool)     v1; std::cout << "success: (bool)     g03 = " <<       g03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     g03 = " << e.what() << "\n"; }
	try { uint8_t  g04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  g04 = " << (int) g04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  g04 = " << e.what() << "\n"; }
	try { int8_t   g05 = (int8_t)   v1; std::cout << "success: (int8_t)   g05 = " << (int) g05 << "\n"; } catch (exception &e) { std::cout << "error:   (int8_t)   g05 = " << e.what() << "\n"; }
	try { uint16_t g06 = (uint16_t) v1; std::cout << "error:   (uint16_t) g06 = " <<       g06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) g06 = " << e.what() << "\n"; }
	try { int16_t  g07 = (int16_t)  v1; std::cout << "success: (int16_t)  g07 = " <<       g07 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  g07 = " << e.what() << "\n"; }
	try { uint32_t g08 = (uint32_t) v1; std::cout << "error:   (uint32_t) g08 = " <<       g08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) g08 = " << e.what() << "\n"; }
	try { int32_t  g09 = (int32_t)  v1; std::cout << "success: (int32_t)  g09 = " <<       g09 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  g09 = " << e.what() << "\n"; }
	try { uint64_t g10 = (uint64_t) v1; std::cout << "error:   (uint64_t) g10 = " <<       g10 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) g10 = " << e.what() << "\n"; }
	try { int64_t  g11 = (int64_t)  v1; std::cout << "success: (int64_t)  g11 = " <<       g11 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  g11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int8_t>::min());

	std::cout << v2 << '\n';

	try { string   g12 = (string)   v2; std::cout << "success: (string)   g12 = " <<       g12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   g12 = " << e.what() << "\n"; }
	try { double   g13 = (double)   v2; std::cout << "error:   (double)   g13 = " <<       g13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   g13 = " << e.what() << "\n"; }
	try { bool     g14 = (bool)     v2; std::cout << "success: (bool)     g14 = " <<       g14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     g14 = " << e.what() << "\n"; }
	try { uint8_t  g15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  g15 = " << (int) g15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  g15 = " << e.what() << "\n"; }
	try { int8_t   g16 = (int8_t)   v2; std::cout << "success: (int8_t)   g16 = " << (int) g16 << "\n"; } catch (exception &e) { std::cout << "error:   (int8_t)   g16 = " << e.what() << "\n"; }
	try { uint16_t g17 = (uint16_t) v2; std::cout << "error:   (uint16_t) g17 = " <<       g17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) g17 = " << e.what() << "\n"; }
	try { int16_t  g18 = (int16_t)  v2; std::cout << "success: (int16_t)  g18 = " <<       g18 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  g18 = " << e.what() << "\n"; }
	try { uint32_t g19 = (uint32_t) v2; std::cout << "error:   (uint32_t) g19 = " <<       g19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) g19 = " << e.what() << "\n"; }
	try { int32_t  g20 = (int32_t)  v2; std::cout << "success: (int32_t)  g20 = " <<       g20 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  g20 = " << e.what() << "\n"; }
	try { uint64_t g21 = (uint64_t) v2; std::cout << "error:   (uint64_t) g21 = " <<       g21 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) g21 = " << e.what() << "\n"; }
	try { int64_t  g22 = (int64_t)  v2; std::cout << "success: (int64_t)  g22 = " <<       g22 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  g22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int8_t>::max());

	std::cout << v3 << '\n';

	try { string   g23 = (string)   v3; std::cout << "success: (string)   g23 = " <<       g23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   g23 = " << e.what() << "\n"; }
	try { double   g24 = (double)   v3; std::cout << "error:   (double)   g24 = " <<       g24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   g24 = " << e.what() << "\n"; }
	try { bool     g25 = (bool)     v3; std::cout << "success: (bool)     g25 = " <<       g25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     g25 = " << e.what() << "\n"; }
	try { uint8_t  g26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  g26 = " << (int) g26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  g26 = " << e.what() << "\n"; }
	try { int8_t   g27 = (int8_t)   v3; std::cout << "success: (int8_t)   g27 = " << (int) g27 << "\n"; } catch (exception &e) { std::cout << "error:   (int8_t)   g27 = " << e.what() << "\n"; }
	try { uint16_t g28 = (uint16_t) v3; std::cout << "error:   (uint16_t) g28 = " <<       g28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) g28 = " << e.what() << "\n"; }
	try { int16_t  g29 = (int16_t)  v3; std::cout << "success: (int16_t)  g29 = " <<       g29 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  g29 = " << e.what() << "\n"; }
	try { uint32_t g30 = (uint32_t) v3; std::cout << "error:   (uint32_t) g30 = " <<       g30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) g30 = " << e.what() << "\n"; }
	try { int32_t  g31 = (int32_t)  v3; std::cout << "success: (int32_t)  g31 = " <<       g31 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  g31 = " << e.what() << "\n"; }
	try { uint64_t g32 = (uint64_t) v3; std::cout << "error:   (uint64_t) g32 = " <<       g32 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) g32 = " << e.what() << "\n"; }
	try { int64_t  g33 = (int64_t)  v3; std::cout << "success: (int64_t)  g33 = " <<       g33 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  g33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast08 - uint16_t
 */
void cast08 (void)
{
	Variant v1 ((uint16_t) 1042);

	std::cout << v1 << '\n';

	try { string   h01 = (string)   v1; std::cout << "success: (string)   h01 = " <<       h01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   h01 = " << e.what() << "\n"; }
	try { double   h02 = (double)   v1; std::cout << "error:   (double)   h02 = " <<       h02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   h02 = " << e.what() << "\n"; }
	try { bool     h03 = (bool)     v1; std::cout << "success: (bool)     h03 = " <<       h03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     h03 = " << e.what() << "\n"; }
	try { uint8_t  h04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  h04 = " << (int) h04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  h04 = " << e.what() << "\n"; }
	try { int8_t   h05 = (int8_t)   v1; std::cout << "error:   (int8_t)   h05 = " << (int) h05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   h05 = " << e.what() << "\n"; }
	try { uint16_t h06 = (uint16_t) v1; std::cout << "success: (uint16_t) h06 = " <<       h06 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) h06 = " << e.what() << "\n"; }
	try { int16_t  h07 = (int16_t)  v1; std::cout << "error:   (int16_t)  h07 = " <<       h07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  h07 = " << e.what() << "\n"; }
	try { uint32_t h08 = (uint32_t) v1; std::cout << "success: (uint32_t) h08 = " <<       h08 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) h08 = " << e.what() << "\n"; }
	try { int32_t  h09 = (int32_t)  v1; std::cout << "error:   (int32_t)  h09 = " <<       h09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  h09 = " << e.what() << "\n"; }
	try { uint64_t h10 = (uint64_t) v1; std::cout << "success: (uint64_t) h10 = " <<       h10 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) h10 = " << e.what() << "\n"; }
	try { int64_t  h11 = (int64_t)  v1; std::cout << "error:   (int64_t)  h11 = " <<       h11 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  h11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint16_t>::min());

	std::cout << v2 << '\n';

	try { string   h12 = (string)   v2; std::cout << "success: (string)   h12 = " <<       h12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   h12 = " << e.what() << "\n"; }
	try { double   h13 = (double)   v2; std::cout << "error:   (double)   h13 = " <<       h13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   h13 = " << e.what() << "\n"; }
	try { bool     h14 = (bool)     v2; std::cout << "success: (bool)     h14 = " <<       h14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     h14 = " << e.what() << "\n"; }
	try { uint8_t  h15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  h15 = " << (int) h15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  h15 = " << e.what() << "\n"; }
	try { int8_t   h16 = (int8_t)   v2; std::cout << "error:   (int8_t)   h16 = " << (int) h16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   h16 = " << e.what() << "\n"; }
	try { uint16_t h17 = (uint16_t) v2; std::cout << "success: (uint16_t) h17 = " <<       h17 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) h17 = " << e.what() << "\n"; }
	try { int16_t  h18 = (int16_t)  v2; std::cout << "error:   (int16_t)  h18 = " <<       h18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  h18 = " << e.what() << "\n"; }
	try { uint32_t h19 = (uint32_t) v2; std::cout << "success: (uint32_t) h19 = " <<       h19 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) h19 = " << e.what() << "\n"; }
	try { int32_t  h20 = (int32_t)  v2; std::cout << "error:   (int32_t)  h20 = " <<       h20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  h20 = " << e.what() << "\n"; }
	try { uint64_t h21 = (uint64_t) v2; std::cout << "success: (uint64_t) h21 = " <<       h21 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) h21 = " << e.what() << "\n"; }
	try { int64_t  h22 = (int64_t)  v2; std::cout << "error:   (int64_t)  h22 = " <<       h22 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  h22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint16_t>::max());

	std::cout << v3 << '\n';

	try { string   h23 = (string)   v3; std::cout << "success: (string)   h23 = " <<       h23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   h23 = " << e.what() << "\n"; }
	try { double   h24 = (double)   v3; std::cout << "error:   (double)   h24 = " <<       h24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   h24 = " << e.what() << "\n"; }
	try { bool     h25 = (bool)     v3; std::cout << "success: (bool)     h25 = " <<       h25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     h25 = " << e.what() << "\n"; }
	try { uint8_t  h26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  h26 = " << (int) h26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  h26 = " << e.what() << "\n"; }
	try { int8_t   h27 = (int8_t)   v3; std::cout << "error:   (int8_t)   h27 = " << (int) h27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   h27 = " << e.what() << "\n"; }
	try { uint16_t h28 = (uint16_t) v3; std::cout << "success: (uint16_t) h28 = " <<       h28 << "\n"; } catch (exception &e) { std::cout << "error:   (uint16_t) h28 = " << e.what() << "\n"; }
	try { int16_t  h29 = (int16_t)  v3; std::cout << "error:   (int16_t)  h29 = " <<       h29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  h29 = " << e.what() << "\n"; }
	try { uint32_t h30 = (uint32_t) v3; std::cout << "success: (uint32_t) h30 = " <<       h30 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) h30 = " << e.what() << "\n"; }
	try { int32_t  h31 = (int32_t)  v3; std::cout << "error:   (int32_t)  h31 = " <<       h31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  h31 = " << e.what() << "\n"; }
	try { uint64_t h32 = (uint64_t) v3; std::cout << "success: (uint64_t) h32 = " <<       h32 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) h32 = " << e.what() << "\n"; }
	try { int64_t  h33 = (int64_t)  v3; std::cout << "error:   (int64_t)  h33 = " <<       h33 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  h33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast09 - int16_t
 */
void cast09 (void)
{
	Variant v1 ((int16_t) -1042);

	std::cout << v1 << '\n';

	try { string   i01 = (string)   v1; std::cout << "success: (string)   i01 = " <<       i01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   i01 = " << e.what() << "\n"; }
	try { double   i02 = (double)   v1; std::cout << "error:   (double)   i02 = " <<       i02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   i02 = " << e.what() << "\n"; }
	try { bool     i03 = (bool)     v1; std::cout << "success: (bool)     i03 = " <<       i03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     i03 = " << e.what() << "\n"; }
	try { uint8_t  i04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  i04 = " << (int) i04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  i04 = " << e.what() << "\n"; }
	try { int8_t   i05 = (int8_t)   v1; std::cout << "error:   (int8_t)   i05 = " << (int) i05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   i05 = " << e.what() << "\n"; }
	try { uint16_t i06 = (uint16_t) v1; std::cout << "error:   (uint16_t) i06 = " <<       i06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) i06 = " << e.what() << "\n"; }
	try { int16_t  i07 = (int16_t)  v1; std::cout << "success: (int16_t)  i07 = " <<       i07 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  i07 = " << e.what() << "\n"; }
	try { uint32_t i08 = (uint32_t) v1; std::cout << "error:   (uint32_t) i08 = " <<       i08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) i08 = " << e.what() << "\n"; }
	try { int32_t  i09 = (int32_t)  v1; std::cout << "success: (int32_t)  i09 = " <<       i09 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  i09 = " << e.what() << "\n"; }
	try { uint64_t i10 = (uint64_t) v1; std::cout << "error:   (uint64_t) i10 = " <<       i10 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) i10 = " << e.what() << "\n"; }
	try { int64_t  i11 = (int64_t)  v1; std::cout << "success: (int64_t)  i11 = " <<       i11 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  i11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int16_t>::min());

	std::cout << v2 << '\n';

	try { string   i12 = (string)   v2; std::cout << "success: (string)   i12 = " <<       i12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   i12 = " << e.what() << "\n"; }
	try { double   i13 = (double)   v2; std::cout << "error:   (double)   i13 = " <<       i13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   i13 = " << e.what() << "\n"; }
	try { bool     i14 = (bool)     v2; std::cout << "success: (bool)     i14 = " <<       i14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     i14 = " << e.what() << "\n"; }
	try { uint8_t  i15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  i15 = " << (int) i15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  i15 = " << e.what() << "\n"; }
	try { int8_t   i16 = (int8_t)   v2; std::cout << "error:   (int8_t)   i16 = " << (int) i16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   i16 = " << e.what() << "\n"; }
	try { uint16_t i17 = (uint16_t) v2; std::cout << "error:   (uint16_t) i17 = " <<       i17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) i17 = " << e.what() << "\n"; }
	try { int16_t  i18 = (int16_t)  v2; std::cout << "success: (int16_t)  i18 = " <<       i18 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  i18 = " << e.what() << "\n"; }
	try { uint32_t i19 = (uint32_t) v2; std::cout << "error:   (uint32_t) i19 = " <<       i19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) i19 = " << e.what() << "\n"; }
	try { int32_t  i20 = (int32_t)  v2; std::cout << "success: (int32_t)  i20 = " <<       i20 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  i20 = " << e.what() << "\n"; }
	try { uint64_t i21 = (uint64_t) v2; std::cout << "error:   (uint64_t) i21 = " <<       i21 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) i21 = " << e.what() << "\n"; }
	try { int64_t  i22 = (int64_t)  v2; std::cout << "success: (int64_t)  i22 = " <<       i22 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  i22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int16_t>::max());

	std::cout << v3 << '\n';

	try { string   i23 = (string)   v3; std::cout << "success: (string)   i23 = " <<       i23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   i23 = " << e.what() << "\n"; }
	try { double   i24 = (double)   v3; std::cout << "error:   (double)   i24 = " <<       i24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   i24 = " << e.what() << "\n"; }
	try { bool     i25 = (bool)     v3; std::cout << "success: (bool)     i25 = " <<       i25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     i25 = " << e.what() << "\n"; }
	try { uint8_t  i26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  i26 = " << (int) i26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  i26 = " << e.what() << "\n"; }
	try { int8_t   i27 = (int8_t)   v3; std::cout << "error:   (int8_t)   i27 = " << (int) i27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   i27 = " << e.what() << "\n"; }
	try { uint16_t i28 = (uint16_t) v3; std::cout << "error:   (uint16_t) i28 = " <<       i28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) i28 = " << e.what() << "\n"; }
	try { int16_t  i29 = (int16_t)  v3; std::cout << "success: (int16_t)  i29 = " <<       i29 << "\n"; } catch (exception &e) { std::cout << "error:   (int16_t)  i29 = " << e.what() << "\n"; }
	try { uint32_t i30 = (uint32_t) v3; std::cout << "error:   (uint32_t) i30 = " <<       i30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) i30 = " << e.what() << "\n"; }
	try { int32_t  i31 = (int32_t)  v3; std::cout << "success: (int32_t)  i31 = " <<       i31 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  i31 = " << e.what() << "\n"; }
	try { uint64_t i32 = (uint64_t) v3; std::cout << "error:   (uint64_t) i32 = " <<       i32 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) i32 = " << e.what() << "\n"; }
	try { int64_t  i33 = (int64_t)  v3; std::cout << "success: (int64_t)  i33 = " <<       i33 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  i33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast10 - uint32_t
 */
void cast10 (void)
{
	Variant v1 ((uint32_t) 1000042);

	std::cout << v1 << '\n';

	try { string   j01 = (string)   v1; std::cout << "success: (string)   j01 = " <<       j01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   j01 = " << e.what() << "\n"; }
	try { double   j02 = (double)   v1; std::cout << "error:   (double)   j02 = " <<       j02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   j02 = " << e.what() << "\n"; }
	try { bool     j03 = (bool)     v1; std::cout << "success: (bool)     j03 = " <<       j03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     j03 = " << e.what() << "\n"; }
	try { uint8_t  j04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  j04 = " << (int) j04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  j04 = " << e.what() << "\n"; }
	try { int8_t   j05 = (int8_t)   v1; std::cout << "error:   (int8_t)   j05 = " << (int) j05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   j05 = " << e.what() << "\n"; }
	try { uint16_t j06 = (uint16_t) v1; std::cout << "error:   (uint16_t) j06 = " <<       j06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) j06 = " << e.what() << "\n"; }
	try { int16_t  j07 = (int16_t)  v1; std::cout << "error:   (int16_t)  j07 = " <<       j07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  j07 = " << e.what() << "\n"; }
	try { uint32_t j08 = (uint32_t) v1; std::cout << "success: (uint32_t) j08 = " <<       j08 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) j08 = " << e.what() << "\n"; }
	try { int32_t  j09 = (int32_t)  v1; std::cout << "error:   (int32_t)  j09 = " <<       j09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  j09 = " << e.what() << "\n"; }
	try { uint64_t j10 = (uint64_t) v1; std::cout << "success: (uint64_t) j10 = " <<       j10 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) j10 = " << e.what() << "\n"; }
	try { int64_t  j11 = (int64_t)  v1; std::cout << "error:   (int64_t)  j11 = " <<       j11 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  j11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint32_t>::min());

	std::cout << v2 << '\n';

	try { string   j12 = (string)   v2; std::cout << "success: (string)   j12 = " <<       j12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   j12 = " << e.what() << "\n"; }
	try { double   j13 = (double)   v2; std::cout << "error:   (double)   j13 = " <<       j13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   j13 = " << e.what() << "\n"; }
	try { bool     j14 = (bool)     v2; std::cout << "success: (bool)     j14 = " <<       j14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     j14 = " << e.what() << "\n"; }
	try { uint8_t  j15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  j15 = " << (int) j15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  j15 = " << e.what() << "\n"; }
	try { int8_t   j16 = (int8_t)   v2; std::cout << "error:   (int8_t)   j16 = " << (int) j16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   j16 = " << e.what() << "\n"; }
	try { uint16_t j17 = (uint16_t) v2; std::cout << "error:   (uint16_t) j17 = " <<       j17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) j17 = " << e.what() << "\n"; }
	try { int16_t  j18 = (int16_t)  v2; std::cout << "error:   (int16_t)  j18 = " <<       j18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  j18 = " << e.what() << "\n"; }
	try { uint32_t j19 = (uint32_t) v2; std::cout << "success: (uint32_t) j19 = " <<       j19 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) j19 = " << e.what() << "\n"; }
	try { int32_t  j20 = (int32_t)  v2; std::cout << "error:   (int32_t)  j20 = " <<       j20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  j20 = " << e.what() << "\n"; }
	try { uint64_t j21 = (uint64_t) v2; std::cout << "success: (uint64_t) j21 = " <<       j21 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) j21 = " << e.what() << "\n"; }
	try { int64_t  j22 = (int64_t)  v2; std::cout << "error:   (int64_t)  j22 = " <<       j22 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  j22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint32_t>::max());

	std::cout << v3 << '\n';

	try { string   j23 = (string)   v3; std::cout << "success: (string)   j23 = " <<       j23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   j23 = " << e.what() << "\n"; }
	try { double   j24 = (double)   v3; std::cout << "error:   (double)   j24 = " <<       j24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   j24 = " << e.what() << "\n"; }
	try { bool     j25 = (bool)     v3; std::cout << "success: (bool)     j25 = " <<       j25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     j25 = " << e.what() << "\n"; }
	try { uint8_t  j26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  j26 = " << (int) j26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  j26 = " << e.what() << "\n"; }
	try { int8_t   j27 = (int8_t)   v3; std::cout << "error:   (int8_t)   j27 = " << (int) j27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   j27 = " << e.what() << "\n"; }
	try { uint16_t j28 = (uint16_t) v3; std::cout << "error:   (uint16_t) j28 = " <<       j28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) j28 = " << e.what() << "\n"; }
	try { int16_t  j29 = (int16_t)  v3; std::cout << "error:   (int16_t)  j29 = " <<       j29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  j29 = " << e.what() << "\n"; }
	try { uint32_t j30 = (uint32_t) v3; std::cout << "success: (uint32_t) j30 = " <<       j30 << "\n"; } catch (exception &e) { std::cout << "error:   (uint32_t) j30 = " << e.what() << "\n"; }
	try { int32_t  j31 = (int32_t)  v3; std::cout << "error:   (int32_t)  j31 = " <<       j31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  j31 = " << e.what() << "\n"; }
	try { uint64_t j32 = (uint64_t) v3; std::cout << "success: (uint64_t) j32 = " <<       j32 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) j32 = " << e.what() << "\n"; }
	try { int64_t  j33 = (int64_t)  v3; std::cout << "error:   (int64_t)  j33 = " <<       j33 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  j33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast11 - int32_t
 */
void cast11 (void)
{
	Variant v1 ((int32_t) -1000042);

	std::cout << v1 << '\n';

	try { string   k01 = (string)   v1; std::cout << "success: (string)   k01 = " <<       k01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   k01 = " << e.what() << "\n"; }
	try { double   k02 = (double)   v1; std::cout << "error:   (double)   k02 = " <<       k02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   k02 = " << e.what() << "\n"; }
	try { bool     k03 = (bool)     v1; std::cout << "success: (bool)     k03 = " <<       k03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     k03 = " << e.what() << "\n"; }
	try { uint8_t  k04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  k04 = " << (int) k04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  k04 = " << e.what() << "\n"; }
	try { int8_t   k05 = (int8_t)   v1; std::cout << "error:   (int8_t)   k05 = " << (int) k05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   k05 = " << e.what() << "\n"; }
	try { uint16_t k06 = (uint16_t) v1; std::cout << "error:   (uint16_t) k06 = " <<       k06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) k06 = " << e.what() << "\n"; }
	try { int16_t  k07 = (int16_t)  v1; std::cout << "error:   (int16_t)  k07 = " <<       k07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  k07 = " << e.what() << "\n"; }
	try { uint32_t k08 = (uint32_t) v1; std::cout << "error:   (uint32_t) k08 = " <<       k08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) k08 = " << e.what() << "\n"; }
	try { int32_t  k09 = (int32_t)  v1; std::cout << "success: (int32_t)  k09 = " <<       k09 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  k09 = " << e.what() << "\n"; }
	try { uint64_t k10 = (uint64_t) v1; std::cout << "error:   (uint64_t) k10 = " <<       k10 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) k10 = " << e.what() << "\n"; }
	try { int64_t  k11 = (int64_t)  v1; std::cout << "success: (int64_t)  k11 = " <<       k11 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  k11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int32_t>::min());

	std::cout << v2 << '\n';

	try { string   k12 = (string)   v2; std::cout << "success: (string)   k12 = " <<       k12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   k12 = " << e.what() << "\n"; }
	try { double   k13 = (double)   v2; std::cout << "error:   (double)   k13 = " <<       k13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   k13 = " << e.what() << "\n"; }
	try { bool     k14 = (bool)     v2; std::cout << "success: (bool)     k14 = " <<       k14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     k14 = " << e.what() << "\n"; }
	try { uint8_t  k15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  k15 = " << (int) k15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  k15 = " << e.what() << "\n"; }
	try { int8_t   k16 = (int8_t)   v2; std::cout << "error:   (int8_t)   k16 = " << (int) k16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   k16 = " << e.what() << "\n"; }
	try { uint16_t k17 = (uint16_t) v2; std::cout << "error:   (uint16_t) k17 = " <<       k17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) k17 = " << e.what() << "\n"; }
	try { int16_t  k18 = (int16_t)  v2; std::cout << "error:   (int16_t)  k18 = " <<       k18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  k18 = " << e.what() << "\n"; }
	try { uint32_t k19 = (uint32_t) v2; std::cout << "error:   (uint32_t) k19 = " <<       k19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) k19 = " << e.what() << "\n"; }
	try { int32_t  k20 = (int32_t)  v2; std::cout << "success: (int32_t)  k20 = " <<       k20 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  k20 = " << e.what() << "\n"; }
	try { uint64_t k21 = (uint64_t) v2; std::cout << "error:   (uint64_t) k21 = " <<       k21 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) k21 = " << e.what() << "\n"; }
	try { int64_t  k22 = (int64_t)  v2; std::cout << "success: (int64_t)  k22 = " <<       k22 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  k22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int32_t>::max());

	std::cout << v3 << '\n';

	try { string   k23 = (string)   v3; std::cout << "success: (string)   k23 = " <<       k23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   k23 = " << e.what() << "\n"; }
	try { double   k24 = (double)   v3; std::cout << "error:   (double)   k24 = " <<       k24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   k24 = " << e.what() << "\n"; }
	try { bool     k25 = (bool)     v3; std::cout << "success: (bool)     k25 = " <<       k25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     k25 = " << e.what() << "\n"; }
	try { uint8_t  k26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  k26 = " << (int) k26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  k26 = " << e.what() << "\n"; }
	try { int8_t   k27 = (int8_t)   v3; std::cout << "error:   (int8_t)   k27 = " << (int) k27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   k27 = " << e.what() << "\n"; }
	try { uint16_t k28 = (uint16_t) v3; std::cout << "error:   (uint16_t) k28 = " <<       k28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) k28 = " << e.what() << "\n"; }
	try { int16_t  k29 = (int16_t)  v3; std::cout << "error:   (int16_t)  k29 = " <<       k29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  k29 = " << e.what() << "\n"; }
	try { uint32_t k30 = (uint32_t) v3; std::cout << "error:   (uint32_t) k30 = " <<       k30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) k30 = " << e.what() << "\n"; }
	try { int32_t  k31 = (int32_t)  v3; std::cout << "success: (int32_t)  k31 = " <<       k31 << "\n"; } catch (exception &e) { std::cout << "error:   (int32_t)  k31 = " << e.what() << "\n"; }
	try { uint64_t k32 = (uint64_t) v3; std::cout << "error:   (uint64_t) k32 = " <<       k32 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) k32 = " << e.what() << "\n"; }
	try { int64_t  k33 = (int64_t)  v3; std::cout << "success: (int64_t)  k33 = " <<       k33 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  k33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast12 - uint64_t
 */
void cast12 (void)
{
	Variant v1 ((uint64_t) 1000000000042);

	std::cout << v1 << '\n';

	try { string   l01 = (string)   v1; std::cout << "success: (string)   l01 = " <<       l01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   l01 = " << e.what() << "\n"; }
	try { double   l02 = (double)   v1; std::cout << "error:   (double)   l02 = " <<       l02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   l02 = " << e.what() << "\n"; }
	try { bool     l03 = (bool)     v1; std::cout << "success: (bool)     l03 = " <<       l03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     l03 = " << e.what() << "\n"; }
	try { uint8_t  l04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  l04 = " << (int) l04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  l04 = " << e.what() << "\n"; }
	try { int8_t   l05 = (int8_t)   v1; std::cout << "error:   (int8_t)   l05 = " << (int) l05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   l05 = " << e.what() << "\n"; }
	try { uint16_t l06 = (uint16_t) v1; std::cout << "error:   (uint16_t) l06 = " <<       l06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) l06 = " << e.what() << "\n"; }
	try { int16_t  l07 = (int16_t)  v1; std::cout << "error:   (int16_t)  l07 = " <<       l07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  l07 = " << e.what() << "\n"; }
	try { uint32_t l08 = (uint32_t) v1; std::cout << "error:   (uint32_t) l08 = " <<       l08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) l08 = " << e.what() << "\n"; }
	try { int32_t  l09 = (int32_t)  v1; std::cout << "error:   (int32_t)  l09 = " <<       l09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  l09 = " << e.what() << "\n"; }
	try { uint64_t l10 = (uint64_t) v1; std::cout << "success: (uint64_t) l10 = " <<       l10 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) l10 = " << e.what() << "\n"; }
	try { int64_t  l11 = (int64_t)  v1; std::cout << "error:   (int64_t)  l11 = " <<       l11 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  l11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint64_t>::min());

	std::cout << v2 << '\n';

	try { string   l12 = (string)   v2; std::cout << "success: (string)   l12 = " <<       l12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   l12 = " << e.what() << "\n"; }
	try { double   l13 = (double)   v2; std::cout << "error:   (double)   l13 = " <<       l13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   l13 = " << e.what() << "\n"; }
	try { bool     l14 = (bool)     v2; std::cout << "success: (bool)     l14 = " <<       l14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     l14 = " << e.what() << "\n"; }
	try { uint8_t  l15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  l15 = " << (int) l15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  l15 = " << e.what() << "\n"; }
	try { int8_t   l16 = (int8_t)   v2; std::cout << "error:   (int8_t)   l16 = " << (int) l16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   l16 = " << e.what() << "\n"; }
	try { uint16_t l17 = (uint16_t) v2; std::cout << "error:   (uint16_t) l17 = " <<       l17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) l17 = " << e.what() << "\n"; }
	try { int16_t  l18 = (int16_t)  v2; std::cout << "error:   (int16_t)  l18 = " <<       l18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  l18 = " << e.what() << "\n"; }
	try { uint32_t l19 = (uint32_t) v2; std::cout << "error:   (uint32_t) l19 = " <<       l19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) l19 = " << e.what() << "\n"; }
	try { int32_t  l20 = (int32_t)  v2; std::cout << "error:   (int32_t)  l20 = " <<       l20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  l20 = " << e.what() << "\n"; }
	try { uint64_t l21 = (uint64_t) v2; std::cout << "success: (uint64_t) l21 = " <<       l21 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) l21 = " << e.what() << "\n"; }
	try { int64_t  l22 = (int64_t)  v2; std::cout << "error:   (int64_t)  l22 = " <<       l22 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  l22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint64_t>::max());

	std::cout << v3 << '\n';

	try { string   l23 = (string)   v3; std::cout << "success: (string)   l23 = " <<       l23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   l23 = " << e.what() << "\n"; }
	try { double   l24 = (double)   v3; std::cout << "error:   (double)   l24 = " <<       l24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   l24 = " << e.what() << "\n"; }
	try { bool     l25 = (bool)     v3; std::cout << "success: (bool)     l25 = " <<       l25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     l25 = " << e.what() << "\n"; }
	try { uint8_t  l26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  l26 = " << (int) l26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  l26 = " << e.what() << "\n"; }
	try { int8_t   l27 = (int8_t)   v3; std::cout << "error:   (int8_t)   l27 = " << (int) l27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   l27 = " << e.what() << "\n"; }
	try { uint16_t l28 = (uint16_t) v3; std::cout << "error:   (uint16_t) l28 = " <<       l28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) l28 = " << e.what() << "\n"; }
	try { int16_t  l29 = (int16_t)  v3; std::cout << "error:   (int16_t)  l29 = " <<       l29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  l29 = " << e.what() << "\n"; }
	try { uint32_t l30 = (uint32_t) v3; std::cout << "error:   (uint32_t) l30 = " <<       l30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) l30 = " << e.what() << "\n"; }
	try { int32_t  l31 = (int32_t)  v3; std::cout << "error:   (int32_t)  l31 = " <<       l31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  l31 = " << e.what() << "\n"; }
	try { uint64_t l32 = (uint64_t) v3; std::cout << "success: (uint64_t) l32 = " <<       l32 << "\n"; } catch (exception &e) { std::cout << "error:   (uint64_t) l32 = " << e.what() << "\n"; }
	try { int64_t  l33 = (int64_t)  v3; std::cout << "error:   (int64_t)  l33 = " <<       l33 << "\n"; } catch (exception &e) { std::cout << "success: (int64_t)  l33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}

/**
 * cast13 - int64_t
 */
void cast13 (void)
{
	Variant v1 ((int64_t) -1000000000042);

	std::cout << v1 << '\n';

	try { string   m01 = (string)   v1; std::cout << "success: (string)   m01 = " <<       m01 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   m01 = " << e.what() << "\n"; }
	try { double   m02 = (double)   v1; std::cout << "error:   (double)   m02 = " <<       m02 << "\n"; } catch (exception &e) { std::cout << "success: (double)   m02 = " << e.what() << "\n"; }
	try { bool     m03 = (bool)     v1; std::cout << "success: (bool)     m03 = " <<       m03 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     m03 = " << e.what() << "\n"; }
	try { uint8_t  m04 = (uint8_t)  v1; std::cout << "error:   (uint8_t)  m04 = " << (int) m04 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  m04 = " << e.what() << "\n"; }
	try { int8_t   m05 = (int8_t)   v1; std::cout << "error:   (int8_t)   m05 = " << (int) m05 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   m05 = " << e.what() << "\n"; }
	try { uint16_t m06 = (uint16_t) v1; std::cout << "error:   (uint16_t) m06 = " <<       m06 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) m06 = " << e.what() << "\n"; }
	try { int16_t  m07 = (int16_t)  v1; std::cout << "error:   (int16_t)  m07 = " <<       m07 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  m07 = " << e.what() << "\n"; }
	try { uint32_t m08 = (uint32_t) v1; std::cout << "error:   (uint32_t) m08 = " <<       m08 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) m08 = " << e.what() << "\n"; }
	try { int32_t  m09 = (int32_t)  v1; std::cout << "error:   (int32_t)  m09 = " <<       m09 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  m09 = " << e.what() << "\n"; }
	try { uint64_t m10 = (uint64_t) v1; std::cout << "error:   (uint64_t) m10 = " <<       m10 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) m10 = " << e.what() << "\n"; }
	try { int64_t  m11 = (int64_t)  v1; std::cout << "success: (int64_t)  m11 = " <<       m11 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  m11 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int64_t>::min());

	std::cout << v2 << '\n';

	try { string   m12 = (string)   v2; std::cout << "success: (string)   m12 = " <<       m12 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   m12 = " << e.what() << "\n"; }
	try { double   m13 = (double)   v2; std::cout << "error:   (double)   m13 = " <<       m13 << "\n"; } catch (exception &e) { std::cout << "success: (double)   m13 = " << e.what() << "\n"; }
	try { bool     m14 = (bool)     v2; std::cout << "success: (bool)     m14 = " <<       m14 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     m14 = " << e.what() << "\n"; }
	try { uint8_t  m15 = (uint8_t)  v2; std::cout << "error:   (uint8_t)  m15 = " << (int) m15 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  m15 = " << e.what() << "\n"; }
	try { int8_t   m16 = (int8_t)   v2; std::cout << "error:   (int8_t)   m16 = " << (int) m16 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   m16 = " << e.what() << "\n"; }
	try { uint16_t m17 = (uint16_t) v2; std::cout << "error:   (uint16_t) m17 = " <<       m17 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) m17 = " << e.what() << "\n"; }
	try { int16_t  m18 = (int16_t)  v2; std::cout << "error:   (int16_t)  m18 = " <<       m18 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  m18 = " << e.what() << "\n"; }
	try { uint32_t m19 = (uint32_t) v2; std::cout << "error:   (uint32_t) m19 = " <<       m19 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) m19 = " << e.what() << "\n"; }
	try { int32_t  m20 = (int32_t)  v2; std::cout << "error:   (int32_t)  m20 = " <<       m20 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  m20 = " << e.what() << "\n"; }
	try { uint64_t m21 = (uint64_t) v2; std::cout << "error:   (uint64_t) m21 = " <<       m21 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) m21 = " << e.what() << "\n"; }
	try { int64_t  m22 = (int64_t)  v2; std::cout << "success: (int64_t)  m22 = " <<       m22 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  m22 = " << e.what() << "\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int64_t>::max());

	std::cout << v3 << '\n';

	try { string   m23 = (string)   v3; std::cout << "success: (string)   m23 = " <<       m23 << "\n"; } catch (exception &e) { std::cout << "error:   (string)   m23 = " << e.what() << "\n"; }
	try { double   m24 = (double)   v3; std::cout << "error:   (double)   m24 = " <<       m24 << "\n"; } catch (exception &e) { std::cout << "success: (double)   m24 = " << e.what() << "\n"; }
	try { bool     m25 = (bool)     v3; std::cout << "success: (bool)     m25 = " <<       m25 << "\n"; } catch (exception &e) { std::cout << "error:   (bool)     m25 = " << e.what() << "\n"; }
	try { uint8_t  m26 = (uint8_t)  v3; std::cout << "error:   (uint8_t)  m26 = " << (int) m26 << "\n"; } catch (exception &e) { std::cout << "success: (uint8_t)  m26 = " << e.what() << "\n"; }
	try { int8_t   m27 = (int8_t)   v3; std::cout << "error:   (int8_t)   m27 = " << (int) m27 << "\n"; } catch (exception &e) { std::cout << "success: (int8_t)   m27 = " << e.what() << "\n"; }
	try { uint16_t m28 = (uint16_t) v3; std::cout << "error:   (uint16_t) m28 = " <<       m28 << "\n"; } catch (exception &e) { std::cout << "success: (uint16_t) m28 = " << e.what() << "\n"; }
	try { int16_t  m29 = (int16_t)  v3; std::cout << "error:   (int16_t)  m29 = " <<       m29 << "\n"; } catch (exception &e) { std::cout << "success: (int16_t)  m29 = " << e.what() << "\n"; }
	try { uint32_t m30 = (uint32_t) v3; std::cout << "error:   (uint32_t) m30 = " <<       m30 << "\n"; } catch (exception &e) { std::cout << "success: (uint32_t) m30 = " << e.what() << "\n"; }
	try { int32_t  m31 = (int32_t)  v3; std::cout << "error:   (int32_t)  m31 = " <<       m31 << "\n"; } catch (exception &e) { std::cout << "success: (int32_t)  m31 = " << e.what() << "\n"; }
	try { uint64_t m32 = (uint64_t) v3; std::cout << "error:   (uint64_t) m32 = " <<       m32 << "\n"; } catch (exception &e) { std::cout << "success: (uint64_t) m32 = " << e.what() << "\n"; }
	try { int64_t  m33 = (int64_t)  v3; std::cout << "success: (int64_t)  m33 = " <<       m33 << "\n"; } catch (exception &e) { std::cout << "error:   (int64_t)  m33 = " << e.what() << "\n"; }

	std::cout << std::endl;
}


/**
 * main
 */
int
main (int argc, char *argv[])
{
	srand (time(NULL));
#if 0
	test_range();
	test_compare();
	test_random();
	test_swap();
	test_cast();
#endif

	if (argc < 2) {
		cast01();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast02();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast03();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast04();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast05();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast06();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast07();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast08();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast09();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast10();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast11();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast12();
		std::cout << "-------------------------------------------------------------------------------\n\n";
		cast13();
	} else {
		switch (std::stoi(argv[1])) {
			case  1: cast01(); break;
			case  2: cast02(); break;
			case  3: cast03(); break;
			case  4: cast04(); break;
			case  5: cast05(); break;
			case  6: cast06(); break;
			case  7: cast07(); break;
			case  8: cast08(); break;
			case  9: cast09(); break;
			case 10: cast10(); break;
			case 11: cast11(); break;
			case 12: cast12(); break;
			case 13: cast13(); break;
		}
	}

	return 0;
}


