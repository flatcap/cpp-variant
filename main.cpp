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

#include "variant.h"

using namespace std;

/**
 * test1
 */
void test1 (void)
{
	string     str = "a very long message that exceeds thirty-two characters";
	double     d   = ~0;
	bool       b   = ~0;
	uint8_t    u8  = ~0;
	 int8_t    s8  = ~0;
	uint16_t   u16 = ~0;
	 int16_t   s16 = ~0;
	uint32_t   u32 = ~0;
	 int32_t   s32 = ~0;
	uint64_t   u64 = ~0;
	 int64_t   s64 = ~0;

	cout << "string   str: " <<       str << endl;
	cout << "double   d:   " <<       d   << endl;
	cout << "bool     b:   " <<       b   << endl;
	cout << "uint8_t  u8:  " << (int) u8  << endl;
	cout << " int8_t  s8:  " << (int) s8  << endl;
	cout << "uint16_t u16: " <<       u16 << endl;
	cout << " int16_t s16: " <<       s16 << endl;
	cout << "uint32_t u32: " <<       u32 << endl;
	cout << " int32_t s32: " <<       s32 << endl;
	cout << "uint64_t u64: " <<       u64 << endl;
	cout << " int64_t s64: " <<       s64 << endl;

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
 * cast01 - empty
 */
void cast01 (void)
{
	Variant v1;

	std::cout << v1 << '\n';

	try { string   a01 = (string)   v1; std::cout << "success: a01 = " <<       a01 << "\n"; } catch (exception &e) { std::cout << "error:   a01\n"; }
	try { double   a02 = (double)   v1; std::cout << "error:   a02 = " <<       a02 << "\n"; } catch (exception &e) { std::cout << "success: a02\n"; }
	try { bool     a03 = (bool)     v1; std::cout << "error:   a03 = " <<       a03 << "\n"; } catch (exception &e) { std::cout << "success: a03\n"; }
	try { uint8_t  a04 = (uint8_t)  v1; std::cout << "error:   a04 = " << (int) a04 << "\n"; } catch (exception &e) { std::cout << "success: a04\n"; }
	try { int8_t   a05 = (int8_t)   v1; std::cout << "error:   a05 = " << (int) a05 << "\n"; } catch (exception &e) { std::cout << "success: a05\n"; }
	try { uint16_t a06 = (uint16_t) v1; std::cout << "error:   a06 = " <<       a06 << "\n"; } catch (exception &e) { std::cout << "success: a06\n"; }
	try { int16_t  a07 = (int16_t)  v1; std::cout << "error:   a07 = " <<       a07 << "\n"; } catch (exception &e) { std::cout << "success: a07\n"; }
	try { uint32_t a08 = (uint32_t) v1; std::cout << "error:   a08 = " <<       a08 << "\n"; } catch (exception &e) { std::cout << "success: a08\n"; }
	try { int32_t  a09 = (int32_t)  v1; std::cout << "error:   a09 = " <<       a09 << "\n"; } catch (exception &e) { std::cout << "success: a09\n"; }
	try { uint64_t a10 = (uint64_t) v1; std::cout << "error:   a10 = " <<       a10 << "\n"; } catch (exception &e) { std::cout << "success: a10\n"; }
	try { int64_t  a11 = (int64_t)  v1; std::cout << "error:   a11 = " <<       a11 << "\n"; } catch (exception &e) { std::cout << "success: a11\n"; }

	std::cout << std::endl;
}

/**
 * cast02 - string
 */
void cast02 (void)
{
	Variant v1 (std::string ("this is a message"));

	std::cout << v1 << '\n';

	try { string   b01 = (string)   v1; std::cout << "success: b01 = " <<       b01 << "\n"; } catch (exception &e) { std::cout << "error:   b01\n"; }
	try { double   b02 = (double)   v1; std::cout << "error:   b02 = " <<       b02 << "\n"; } catch (exception &e) { std::cout << "success: b02\n"; }
	try { bool     b03 = (bool)     v1; std::cout << "error:   b03 = " <<       b03 << "\n"; } catch (exception &e) { std::cout << "success: b03\n"; }
	try { uint8_t  b04 = (uint8_t)  v1; std::cout << "error:   b04 = " << (int) b04 << "\n"; } catch (exception &e) { std::cout << "success: b04\n"; }
	try { int8_t   b05 = (int8_t)   v1; std::cout << "error:   b05 = " << (int) b05 << "\n"; } catch (exception &e) { std::cout << "success: b05\n"; }
	try { uint16_t b06 = (uint16_t) v1; std::cout << "error:   b06 = " <<       b06 << "\n"; } catch (exception &e) { std::cout << "success: b06\n"; }
	try { int16_t  b07 = (int16_t)  v1; std::cout << "error:   b07 = " <<       b07 << "\n"; } catch (exception &e) { std::cout << "success: b07\n"; }
	try { uint32_t b08 = (uint32_t) v1; std::cout << "error:   b08 = " <<       b08 << "\n"; } catch (exception &e) { std::cout << "success: b08\n"; }
	try { int32_t  b09 = (int32_t)  v1; std::cout << "error:   b09 = " <<       b09 << "\n"; } catch (exception &e) { std::cout << "success: b09\n"; }
	try { uint64_t b10 = (uint64_t) v1; std::cout << "error:   b10 = " <<       b10 << "\n"; } catch (exception &e) { std::cout << "success: b10\n"; }
	try { int64_t  b11 = (int64_t)  v1; std::cout << "error:   b11 = " <<       b11 << "\n"; } catch (exception &e) { std::cout << "success: b11\n"; }

	Variant v2 (std::string(""));

	std::cout << v2 << '\n';

	try { string   b12 = (string)   v2; std::cout << "success: b12 = " <<       b12 << "\n"; } catch (exception &e) { std::cout << "error:   b12\n"; }
	try { double   b13 = (double)   v2; std::cout << "error:   b13 = " <<       b13 << "\n"; } catch (exception &e) { std::cout << "success: b13\n"; }
	try { bool     b14 = (bool)     v2; std::cout << "error:   b14 = " <<       b14 << "\n"; } catch (exception &e) { std::cout << "success: b14\n"; }
	try { uint8_t  b15 = (uint8_t)  v2; std::cout << "error:   b15 = " << (int) b15 << "\n"; } catch (exception &e) { std::cout << "success: b15\n"; }
	try { int8_t   b16 = (int8_t)   v2; std::cout << "error:   b16 = " << (int) b16 << "\n"; } catch (exception &e) { std::cout << "success: b16\n"; }
	try { uint16_t b17 = (uint16_t) v2; std::cout << "error:   b17 = " <<       b17 << "\n"; } catch (exception &e) { std::cout << "success: b17\n"; }
	try { int16_t  b18 = (int16_t)  v2; std::cout << "error:   b18 = " <<       b18 << "\n"; } catch (exception &e) { std::cout << "success: b18\n"; }
	try { uint32_t b19 = (uint32_t) v2; std::cout << "error:   b19 = " <<       b19 << "\n"; } catch (exception &e) { std::cout << "success: b19\n"; }
	try { int32_t  b20 = (int32_t)  v2; std::cout << "error:   b20 = " <<       b20 << "\n"; } catch (exception &e) { std::cout << "success: b20\n"; }
	try { uint64_t b21 = (uint64_t) v2; std::cout << "error:   b21 = " <<       b21 << "\n"; } catch (exception &e) { std::cout << "success: b21\n"; }
	try { int64_t  b22 = (int64_t)  v2; std::cout << "error:   b22 = " <<       b22 << "\n"; } catch (exception &e) { std::cout << "success: b22\n"; }

	Variant v3 (std::string ("0"));

	std::cout << v3 << '\n';

	try { string   b23 = (string)   v3; std::cout << "success: b23 = " <<       b23 << "\n"; } catch (exception &e) { std::cout << "error:   b23\n"; }
	try { double   b24 = (double)   v3; std::cout << "error:   b24 = " <<       b24 << "\n"; } catch (exception &e) { std::cout << "success: b24\n"; }
	try { bool     b25 = (bool)     v3; std::cout << "error:   b25 = " <<       b25 << "\n"; } catch (exception &e) { std::cout << "success: b25\n"; }
	try { uint8_t  b26 = (uint8_t)  v3; std::cout << "error:   b26 = " << (int) b26 << "\n"; } catch (exception &e) { std::cout << "success: b26\n"; }
	try { int8_t   b27 = (int8_t)   v3; std::cout << "error:   b27 = " << (int) b27 << "\n"; } catch (exception &e) { std::cout << "success: b27\n"; }
	try { uint16_t b28 = (uint16_t) v3; std::cout << "error:   b28 = " <<       b28 << "\n"; } catch (exception &e) { std::cout << "success: b28\n"; }
	try { int16_t  b29 = (int16_t)  v3; std::cout << "error:   b29 = " <<       b29 << "\n"; } catch (exception &e) { std::cout << "success: b29\n"; }
	try { uint32_t b30 = (uint32_t) v3; std::cout << "error:   b30 = " <<       b30 << "\n"; } catch (exception &e) { std::cout << "success: b30\n"; }
	try { int32_t  b31 = (int32_t)  v3; std::cout << "error:   b31 = " <<       b31 << "\n"; } catch (exception &e) { std::cout << "success: b31\n"; }
	try { uint64_t b32 = (uint64_t) v3; std::cout << "error:   b32 = " <<       b32 << "\n"; } catch (exception &e) { std::cout << "success: b32\n"; }
	try { int64_t  b33 = (int64_t)  v3; std::cout << "error:   b33 = " <<       b33 << "\n"; } catch (exception &e) { std::cout << "success: b33\n"; }

	std::cout << std::endl;
}

/**
 * cast03 - string
 */
void cast03 (void)
{
	Variant v1 ("this is a message");

	std::cout << v1 << '\n';

	try { string   c01 = (string)   v1; std::cout << "success: c01 = " <<       c01 << "\n"; } catch (exception &e) { std::cout << "error:   c01\n"; }
	try { double   c02 = (double)   v1; std::cout << "error:   c02 = " <<       c02 << "\n"; } catch (exception &e) { std::cout << "success: c02\n"; }
	try { bool     c03 = (bool)     v1; std::cout << "error:   c03 = " <<       c03 << "\n"; } catch (exception &e) { std::cout << "success: c03\n"; }
	try { uint8_t  c04 = (uint8_t)  v1; std::cout << "error:   c04 = " << (int) c04 << "\n"; } catch (exception &e) { std::cout << "success: c04\n"; }
	try { int8_t   c05 = (int8_t)   v1; std::cout << "error:   c05 = " << (int) c05 << "\n"; } catch (exception &e) { std::cout << "success: c05\n"; }
	try { uint16_t c06 = (uint16_t) v1; std::cout << "error:   c06 = " <<       c06 << "\n"; } catch (exception &e) { std::cout << "success: c06\n"; }
	try { int16_t  c07 = (int16_t)  v1; std::cout << "error:   c07 = " <<       c07 << "\n"; } catch (exception &e) { std::cout << "success: c07\n"; }
	try { uint32_t c08 = (uint32_t) v1; std::cout << "error:   c08 = " <<       c08 << "\n"; } catch (exception &e) { std::cout << "success: c08\n"; }
	try { int32_t  c09 = (int32_t)  v1; std::cout << "error:   c09 = " <<       c09 << "\n"; } catch (exception &e) { std::cout << "success: c09\n"; }
	try { uint64_t c10 = (uint64_t) v1; std::cout << "error:   c10 = " <<       c10 << "\n"; } catch (exception &e) { std::cout << "success: c10\n"; }
	try { int64_t  c11 = (int64_t)  v1; std::cout << "error:   c11 = " <<       c11 << "\n"; } catch (exception &e) { std::cout << "success: c11\n"; }

	Variant v2 (std::string(""));

	std::cout << v2 << '\n';

	try { string   c12 = (string)   v2; std::cout << "success: c12 = " <<       c12 << "\n"; } catch (exception &e) { std::cout << "error:   c12\n"; }
	try { double   c13 = (double)   v2; std::cout << "error:   c13 = " <<       c13 << "\n"; } catch (exception &e) { std::cout << "success: c13\n"; }
	try { bool     c14 = (bool)     v2; std::cout << "error:   c14 = " <<       c14 << "\n"; } catch (exception &e) { std::cout << "success: c14\n"; }
	try { uint8_t  c15 = (uint8_t)  v2; std::cout << "error:   c15 = " << (int) c15 << "\n"; } catch (exception &e) { std::cout << "success: c15\n"; }
	try { int8_t   c16 = (int8_t)   v2; std::cout << "error:   c16 = " << (int) c16 << "\n"; } catch (exception &e) { std::cout << "success: c16\n"; }
	try { uint16_t c17 = (uint16_t) v2; std::cout << "error:   c17 = " <<       c17 << "\n"; } catch (exception &e) { std::cout << "success: c17\n"; }
	try { int16_t  c18 = (int16_t)  v2; std::cout << "error:   c18 = " <<       c18 << "\n"; } catch (exception &e) { std::cout << "success: c18\n"; }
	try { uint32_t c19 = (uint32_t) v2; std::cout << "error:   c19 = " <<       c19 << "\n"; } catch (exception &e) { std::cout << "success: c19\n"; }
	try { int32_t  c20 = (int32_t)  v2; std::cout << "error:   c20 = " <<       c20 << "\n"; } catch (exception &e) { std::cout << "success: c20\n"; }
	try { uint64_t c21 = (uint64_t) v2; std::cout << "error:   c21 = " <<       c21 << "\n"; } catch (exception &e) { std::cout << "success: c21\n"; }
	try { int64_t  c22 = (int64_t)  v2; std::cout << "error:   c22 = " <<       c22 << "\n"; } catch (exception &e) { std::cout << "success: c22\n"; }

	Variant v3 (std::string ("0"));

	std::cout << v3 << '\n';

	try { string   c23 = (string)   v3; std::cout << "success: c23 = " <<       c23 << "\n"; } catch (exception &e) { std::cout << "error:   c23\n"; }
	try { double   c24 = (double)   v3; std::cout << "error:   c24 = " <<       c24 << "\n"; } catch (exception &e) { std::cout << "success: c24\n"; }
	try { bool     c25 = (bool)     v3; std::cout << "error:   c25 = " <<       c25 << "\n"; } catch (exception &e) { std::cout << "success: c25\n"; }
	try { uint8_t  c26 = (uint8_t)  v3; std::cout << "error:   c26 = " << (int) c26 << "\n"; } catch (exception &e) { std::cout << "success: c26\n"; }
	try { int8_t   c27 = (int8_t)   v3; std::cout << "error:   c27 = " << (int) c27 << "\n"; } catch (exception &e) { std::cout << "success: c27\n"; }
	try { uint16_t c28 = (uint16_t) v3; std::cout << "error:   c28 = " <<       c28 << "\n"; } catch (exception &e) { std::cout << "success: c28\n"; }
	try { int16_t  c29 = (int16_t)  v3; std::cout << "error:   c29 = " <<       c29 << "\n"; } catch (exception &e) { std::cout << "success: c29\n"; }
	try { uint32_t c30 = (uint32_t) v3; std::cout << "error:   c30 = " <<       c30 << "\n"; } catch (exception &e) { std::cout << "success: c30\n"; }
	try { int32_t  c31 = (int32_t)  v3; std::cout << "error:   c31 = " <<       c31 << "\n"; } catch (exception &e) { std::cout << "success: c31\n"; }
	try { uint64_t c32 = (uint64_t) v3; std::cout << "error:   c32 = " <<       c32 << "\n"; } catch (exception &e) { std::cout << "success: c32\n"; }
	try { int64_t  c33 = (int64_t)  v3; std::cout << "error:   c33 = " <<       c33 << "\n"; } catch (exception &e) { std::cout << "success: c33\n"; }

	std::cout << std::endl;
}

/**
 * cast04 - double
 */
void cast04 (void)
{
	Variant v1 ((double) 3.141592654);

	std::cout << v1 << '\n';

	try { string   d01 = (string)   v1; std::cout << "success: d01 = " <<       d01 << "\n"; } catch (exception &e) { std::cout << "error:   d01\n"; }
	try { double   d02 = (double)   v1; std::cout << "success: d02 = " <<       d02 << "\n"; } catch (exception &e) { std::cout << "error:   d02\n"; }
	try { bool     d03 = (bool)     v1; std::cout << "error:   d03 = " <<       d03 << "\n"; } catch (exception &e) { std::cout << "success: d03\n"; }
	try { uint8_t  d04 = (uint8_t)  v1; std::cout << "error:   d04 = " << (int) d04 << "\n"; } catch (exception &e) { std::cout << "success: d04\n"; }
	try { int8_t   d05 = (int8_t)   v1; std::cout << "error:   d05 = " << (int) d05 << "\n"; } catch (exception &e) { std::cout << "success: d05\n"; }
	try { uint16_t d06 = (uint16_t) v1; std::cout << "error:   d06 = " <<       d06 << "\n"; } catch (exception &e) { std::cout << "success: d06\n"; }
	try { int16_t  d07 = (int16_t)  v1; std::cout << "error:   d07 = " <<       d07 << "\n"; } catch (exception &e) { std::cout << "success: d07\n"; }
	try { uint32_t d08 = (uint32_t) v1; std::cout << "error:   d08 = " <<       d08 << "\n"; } catch (exception &e) { std::cout << "success: d08\n"; }
	try { int32_t  d09 = (int32_t)  v1; std::cout << "error:   d09 = " <<       d09 << "\n"; } catch (exception &e) { std::cout << "success: d09\n"; }
	try { uint64_t d10 = (uint64_t) v1; std::cout << "error:   d10 = " <<       d10 << "\n"; } catch (exception &e) { std::cout << "success: d10\n"; }
	try { int64_t  d11 = (int64_t)  v1; std::cout << "error:   d11 = " <<       d11 << "\n"; } catch (exception &e) { std::cout << "success: d11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<double>::min());

	std::cout << v2 << '\n';

	try { string   d12 = (string)   v2; std::cout << "success: d12 = " <<       d12 << "\n"; } catch (exception &e) { std::cout << "error:   d12\n"; }
	try { double   d13 = (double)   v2; std::cout << "success: d13 = " <<       d13 << "\n"; } catch (exception &e) { std::cout << "error:   d13\n"; }
	try { bool     d14 = (bool)     v2; std::cout << "error:   d14 = " <<       d14 << "\n"; } catch (exception &e) { std::cout << "success: d14\n"; }
	try { uint8_t  d15 = (uint8_t)  v2; std::cout << "error:   d15 = " << (int) d15 << "\n"; } catch (exception &e) { std::cout << "success: d15\n"; }
	try { int8_t   d16 = (int8_t)   v2; std::cout << "error:   d16 = " << (int) d16 << "\n"; } catch (exception &e) { std::cout << "success: d16\n"; }
	try { uint16_t d17 = (uint16_t) v2; std::cout << "error:   d17 = " <<       d17 << "\n"; } catch (exception &e) { std::cout << "success: d17\n"; }
	try { int16_t  d18 = (int16_t)  v2; std::cout << "error:   d18 = " <<       d18 << "\n"; } catch (exception &e) { std::cout << "success: d18\n"; }
	try { uint32_t d19 = (uint32_t) v2; std::cout << "error:   d19 = " <<       d19 << "\n"; } catch (exception &e) { std::cout << "success: d19\n"; }
	try { int32_t  d20 = (int32_t)  v2; std::cout << "error:   d20 = " <<       d20 << "\n"; } catch (exception &e) { std::cout << "success: d20\n"; }
	try { uint64_t d21 = (uint64_t) v2; std::cout << "error:   d21 = " <<       d21 << "\n"; } catch (exception &e) { std::cout << "success: d21\n"; }
	try { int64_t  d22 = (int64_t)  v2; std::cout << "error:   d22 = " <<       d22 << "\n"; } catch (exception &e) { std::cout << "success: d22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<double>::max());

	std::cout << v3 << '\n';

	try { string   d23 = (string)   v3; std::cout << "success: d23 = " <<       d23 << "\n"; } catch (exception &e) { std::cout << "error:   d23\n"; }
	try { double   d24 = (double)   v3; std::cout << "success: d24 = " <<       d24 << "\n"; } catch (exception &e) { std::cout << "error:   d24\n"; }
	try { bool     d25 = (bool)     v3; std::cout << "error:   d25 = " <<       d25 << "\n"; } catch (exception &e) { std::cout << "success: d25\n"; }
	try { uint8_t  d26 = (uint8_t)  v3; std::cout << "error:   d26 = " << (int) d26 << "\n"; } catch (exception &e) { std::cout << "success: d26\n"; }
	try { int8_t   d27 = (int8_t)   v3; std::cout << "error:   d27 = " << (int) d27 << "\n"; } catch (exception &e) { std::cout << "success: d27\n"; }
	try { uint16_t d28 = (uint16_t) v3; std::cout << "error:   d28 = " <<       d28 << "\n"; } catch (exception &e) { std::cout << "success: d28\n"; }
	try { int16_t  d29 = (int16_t)  v3; std::cout << "error:   d29 = " <<       d29 << "\n"; } catch (exception &e) { std::cout << "success: d29\n"; }
	try { uint32_t d30 = (uint32_t) v3; std::cout << "error:   d30 = " <<       d30 << "\n"; } catch (exception &e) { std::cout << "success: d30\n"; }
	try { int32_t  d31 = (int32_t)  v3; std::cout << "error:   d31 = " <<       d31 << "\n"; } catch (exception &e) { std::cout << "success: d31\n"; }
	try { uint64_t d32 = (uint64_t) v3; std::cout << "error:   d32 = " <<       d32 << "\n"; } catch (exception &e) { std::cout << "success: d32\n"; }
	try { int64_t  d33 = (int64_t)  v3; std::cout << "error:   d33 = " <<       d33 << "\n"; } catch (exception &e) { std::cout << "success: d33\n"; }

	std::cout << std::endl;
}

/**
 * cast05 - bool
 */
void cast05 (void)
{
	Variant v1 (true);

	std::cout << v1 << '\n';

	try { string   e01 = (string)   v1; std::cout << "success: e01 = " <<       e01 << "\n"; } catch (exception &e) { std::cout << "error:   e01\n"; }
	try { double   e02 = (double)   v1; std::cout << "error:   e02 = " <<       e02 << "\n"; } catch (exception &e) { std::cout << "success: e02\n"; }
	try { bool     e03 = (bool)     v1; std::cout << "success: e03 = " <<       e03 << "\n"; } catch (exception &e) { std::cout << "error:   e03\n"; }
	try { uint8_t  e04 = (uint8_t)  v1; std::cout << "error:   e04 = " << (int) e04 << "\n"; } catch (exception &e) { std::cout << "success: e04\n"; }
	try { int8_t   e05 = (int8_t)   v1; std::cout << "error:   e05 = " << (int) e05 << "\n"; } catch (exception &e) { std::cout << "success: e05\n"; }
	try { uint16_t e06 = (uint16_t) v1; std::cout << "error:   e06 = " <<       e06 << "\n"; } catch (exception &e) { std::cout << "success: e06\n"; }
	try { int16_t  e07 = (int16_t)  v1; std::cout << "error:   e07 = " <<       e07 << "\n"; } catch (exception &e) { std::cout << "success: e07\n"; }
	try { uint32_t e08 = (uint32_t) v1; std::cout << "error:   e08 = " <<       e08 << "\n"; } catch (exception &e) { std::cout << "success: e08\n"; }
	try { int32_t  e09 = (int32_t)  v1; std::cout << "error:   e09 = " <<       e09 << "\n"; } catch (exception &e) { std::cout << "success: e09\n"; }
	try { uint64_t e10 = (uint64_t) v1; std::cout << "error:   e10 = " <<       e10 << "\n"; } catch (exception &e) { std::cout << "success: e10\n"; }
	try { int64_t  e11 = (int64_t)  v1; std::cout << "error:   e11 = " <<       e11 << "\n"; } catch (exception &e) { std::cout << "success: e11\n"; }

	std::cout << std::endl;

	Variant v2 (false);

	std::cout << v2 << '\n';

	try { string   e12 = (string)   v2; std::cout << "success: e12 = " <<       e12 << "\n"; } catch (exception &e) { std::cout << "error:   e12\n"; }
	try { double   e13 = (double)   v2; std::cout << "error:   e13 = " <<       e13 << "\n"; } catch (exception &e) { std::cout << "success: e13\n"; }
	try { bool     e14 = (bool)     v2; std::cout << "success: e14 = " <<       e14 << "\n"; } catch (exception &e) { std::cout << "error:   e14\n"; }
	try { uint8_t  e15 = (uint8_t)  v2; std::cout << "error:   e15 = " << (int) e15 << "\n"; } catch (exception &e) { std::cout << "success: e15\n"; }
	try { int8_t   e16 = (int8_t)   v2; std::cout << "error:   e16 = " << (int) e16 << "\n"; } catch (exception &e) { std::cout << "success: e16\n"; }
	try { uint16_t e17 = (uint16_t) v2; std::cout << "error:   e17 = " <<       e17 << "\n"; } catch (exception &e) { std::cout << "success: e17\n"; }
	try { int16_t  e18 = (int16_t)  v2; std::cout << "error:   e18 = " <<       e18 << "\n"; } catch (exception &e) { std::cout << "success: e18\n"; }
	try { uint32_t e19 = (uint32_t) v2; std::cout << "error:   e19 = " <<       e19 << "\n"; } catch (exception &e) { std::cout << "success: e19\n"; }
	try { int32_t  e20 = (int32_t)  v2; std::cout << "error:   e20 = " <<       e20 << "\n"; } catch (exception &e) { std::cout << "success: e20\n"; }
	try { uint64_t e21 = (uint64_t) v2; std::cout << "error:   e21 = " <<       e21 << "\n"; } catch (exception &e) { std::cout << "success: e21\n"; }
	try { int64_t  e22 = (int64_t)  v2; std::cout << "error:   e22 = " <<       e22 << "\n"; } catch (exception &e) { std::cout << "success: e22\n"; }

	std::cout << std::endl;
}

/**
 * cast06 - uint8_t
 */
void cast06 (void)
{
	Variant v1 ((uint8_t) 42);

	std::cout << v1 << '\n';

	try { string   f01 = (string)   v1; std::cout << "success: f01 = " <<       f01 << "\n"; } catch (exception &e) { std::cout << "error:   f01\n"; }
	try { double   f02 = (double)   v1; std::cout << "error:   f02 = " <<       f02 << "\n"; } catch (exception &e) { std::cout << "success: f02\n"; }
	try { bool     f03 = (bool)     v1; std::cout << "error:   f03 = " <<       f03 << "\n"; } catch (exception &e) { std::cout << "success: f03\n"; }
	try { uint8_t  f04 = (uint8_t)  v1; std::cout << "success: f04 = " << (int) f04 << "\n"; } catch (exception &e) { std::cout << "error:   f04\n"; }
	try { int8_t   f05 = (int8_t)   v1; std::cout << "error:   f05 = " << (int) f05 << "\n"; } catch (exception &e) { std::cout << "success: f05\n"; }
	try { uint16_t f06 = (uint16_t) v1; std::cout << "error:   f06 = " <<       f06 << "\n"; } catch (exception &e) { std::cout << "success: f06\n"; }
	try { int16_t  f07 = (int16_t)  v1; std::cout << "error:   f07 = " <<       f07 << "\n"; } catch (exception &e) { std::cout << "success: f07\n"; }
	try { uint32_t f08 = (uint32_t) v1; std::cout << "error:   f08 = " <<       f08 << "\n"; } catch (exception &e) { std::cout << "success: f08\n"; }
	try { int32_t  f09 = (int32_t)  v1; std::cout << "error:   f09 = " <<       f09 << "\n"; } catch (exception &e) { std::cout << "success: f09\n"; }
	try { uint64_t f10 = (uint64_t) v1; std::cout << "error:   f10 = " <<       f10 << "\n"; } catch (exception &e) { std::cout << "success: f10\n"; }
	try { int64_t  f11 = (int64_t)  v1; std::cout << "error:   f11 = " <<       f11 << "\n"; } catch (exception &e) { std::cout << "success: f11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint8_t>::min());

	std::cout << v2 << '\n';

	try { string   f12 = (string)   v2; std::cout << "success: f12 = " <<       f12 << "\n"; } catch (exception &e) { std::cout << "error:   f12\n"; }
	try { double   f13 = (double)   v2; std::cout << "error:   f13 = " <<       f13 << "\n"; } catch (exception &e) { std::cout << "success: f13\n"; }
	try { bool     f14 = (bool)     v2; std::cout << "error:   f14 = " <<       f14 << "\n"; } catch (exception &e) { std::cout << "success: f14\n"; }
	try { uint8_t  f15 = (uint8_t)  v2; std::cout << "success: f15 = " << (int) f15 << "\n"; } catch (exception &e) { std::cout << "error:   f15\n"; }
	try { int8_t   f16 = (int8_t)   v2; std::cout << "error:   f16 = " << (int) f16 << "\n"; } catch (exception &e) { std::cout << "success: f16\n"; }
	try { uint16_t f17 = (uint16_t) v2; std::cout << "error:   f17 = " <<       f17 << "\n"; } catch (exception &e) { std::cout << "success: f17\n"; }
	try { int16_t  f18 = (int16_t)  v2; std::cout << "error:   f18 = " <<       f18 << "\n"; } catch (exception &e) { std::cout << "success: f18\n"; }
	try { uint32_t f19 = (uint32_t) v2; std::cout << "error:   f19 = " <<       f19 << "\n"; } catch (exception &e) { std::cout << "success: f19\n"; }
	try { int32_t  f20 = (int32_t)  v2; std::cout << "error:   f20 = " <<       f20 << "\n"; } catch (exception &e) { std::cout << "success: f20\n"; }
	try { uint64_t f21 = (uint64_t) v2; std::cout << "error:   f21 = " <<       f21 << "\n"; } catch (exception &e) { std::cout << "success: f21\n"; }
	try { int64_t  f22 = (int64_t)  v2; std::cout << "error:   f22 = " <<       f22 << "\n"; } catch (exception &e) { std::cout << "success: f22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint8_t>::max());

	std::cout << v3 << '\n';

	try { string   f23 = (string)   v3; std::cout << "success: f23 = " <<       f23 << "\n"; } catch (exception &e) { std::cout << "error:   f23\n"; }
	try { double   f24 = (double)   v3; std::cout << "error:   f24 = " <<       f24 << "\n"; } catch (exception &e) { std::cout << "success: f24\n"; }
	try { bool     f25 = (bool)     v3; std::cout << "error:   f25 = " <<       f25 << "\n"; } catch (exception &e) { std::cout << "success: f25\n"; }
	try { uint8_t  f26 = (uint8_t)  v3; std::cout << "success: f26 = " << (int) f26 << "\n"; } catch (exception &e) { std::cout << "error:   f26\n"; }
	try { int8_t   f27 = (int8_t)   v3; std::cout << "error:   f27 = " << (int) f27 << "\n"; } catch (exception &e) { std::cout << "success: f27\n"; }
	try { uint16_t f28 = (uint16_t) v3; std::cout << "error:   f28 = " <<       f28 << "\n"; } catch (exception &e) { std::cout << "success: f28\n"; }
	try { int16_t  f29 = (int16_t)  v3; std::cout << "error:   f29 = " <<       f29 << "\n"; } catch (exception &e) { std::cout << "success: f29\n"; }
	try { uint32_t f30 = (uint32_t) v3; std::cout << "error:   f30 = " <<       f30 << "\n"; } catch (exception &e) { std::cout << "success: f30\n"; }
	try { int32_t  f31 = (int32_t)  v3; std::cout << "error:   f31 = " <<       f31 << "\n"; } catch (exception &e) { std::cout << "success: f31\n"; }
	try { uint64_t f32 = (uint64_t) v3; std::cout << "error:   f32 = " <<       f32 << "\n"; } catch (exception &e) { std::cout << "success: f32\n"; }
	try { int64_t  f33 = (int64_t)  v3; std::cout << "error:   f33 = " <<       f33 << "\n"; } catch (exception &e) { std::cout << "success: f33\n"; }

	std::cout << std::endl;
}

/**
 * cast07 - int8_t
 */
void cast07 (void)
{
	Variant v1 ((int8_t) 42);

	std::cout << v1 << '\n';

	try { string   g01 = (string)   v1; std::cout << "success: g01 = " <<       g01 << "\n"; } catch (exception &e) { std::cout << "error:   g01\n"; }
	try { double   g02 = (double)   v1; std::cout << "error:   g02 = " <<       g02 << "\n"; } catch (exception &e) { std::cout << "success: g02\n"; }
	try { bool     g03 = (bool)     v1; std::cout << "error:   g03 = " <<       g03 << "\n"; } catch (exception &e) { std::cout << "success: g03\n"; }
	try { uint8_t  g04 = (uint8_t)  v1; std::cout << "error:   g04 = " << (int) g04 << "\n"; } catch (exception &e) { std::cout << "success: g04\n"; }
	try { int8_t   g05 = (int8_t)   v1; std::cout << "success: g05 = " << (int) g05 << "\n"; } catch (exception &e) { std::cout << "error:   g05\n"; }
	try { uint16_t g06 = (uint16_t) v1; std::cout << "error:   g06 = " <<       g06 << "\n"; } catch (exception &e) { std::cout << "success: g06\n"; }
	try { int16_t  g07 = (int16_t)  v1; std::cout << "error:   g07 = " <<       g07 << "\n"; } catch (exception &e) { std::cout << "success: g07\n"; }
	try { uint32_t g08 = (uint32_t) v1; std::cout << "error:   g08 = " <<       g08 << "\n"; } catch (exception &e) { std::cout << "success: g08\n"; }
	try { int32_t  g09 = (int32_t)  v1; std::cout << "error:   g09 = " <<       g09 << "\n"; } catch (exception &e) { std::cout << "success: g09\n"; }
	try { uint64_t g10 = (uint64_t) v1; std::cout << "error:   g10 = " <<       g10 << "\n"; } catch (exception &e) { std::cout << "success: g10\n"; }
	try { int64_t  g11 = (int64_t)  v1; std::cout << "error:   g11 = " <<       g11 << "\n"; } catch (exception &e) { std::cout << "success: g11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int8_t>::min());

	std::cout << v2 << '\n';

	try { string   g12 = (string)   v2; std::cout << "success: g12 = " <<       g12 << "\n"; } catch (exception &e) { std::cout << "error:   g12\n"; }
	try { double   g13 = (double)   v2; std::cout << "error:   g13 = " <<       g13 << "\n"; } catch (exception &e) { std::cout << "success: g13\n"; }
	try { bool     g14 = (bool)     v2; std::cout << "error:   g14 = " <<       g14 << "\n"; } catch (exception &e) { std::cout << "success: g14\n"; }
	try { uint8_t  g15 = (uint8_t)  v2; std::cout << "error:   g15 = " << (int) g15 << "\n"; } catch (exception &e) { std::cout << "success: g15\n"; }
	try { int8_t   g16 = (int8_t)   v2; std::cout << "success: g16 = " << (int) g16 << "\n"; } catch (exception &e) { std::cout << "error:   g16\n"; }
	try { uint16_t g17 = (uint16_t) v2; std::cout << "error:   g17 = " <<       g17 << "\n"; } catch (exception &e) { std::cout << "success: g17\n"; }
	try { int16_t  g18 = (int16_t)  v2; std::cout << "error:   g18 = " <<       g18 << "\n"; } catch (exception &e) { std::cout << "success: g18\n"; }
	try { uint32_t g19 = (uint32_t) v2; std::cout << "error:   g19 = " <<       g19 << "\n"; } catch (exception &e) { std::cout << "success: g19\n"; }
	try { int32_t  g20 = (int32_t)  v2; std::cout << "error:   g20 = " <<       g20 << "\n"; } catch (exception &e) { std::cout << "success: g20\n"; }
	try { uint64_t g21 = (uint64_t) v2; std::cout << "error:   g21 = " <<       g21 << "\n"; } catch (exception &e) { std::cout << "success: g21\n"; }
	try { int64_t  g22 = (int64_t)  v2; std::cout << "error:   g22 = " <<       g22 << "\n"; } catch (exception &e) { std::cout << "success: g22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int8_t>::max());

	std::cout << v3 << '\n';

	try { string   g23 = (string)   v3; std::cout << "success: g23 = " <<       g23 << "\n"; } catch (exception &e) { std::cout << "error:   g23\n"; }
	try { double   g24 = (double)   v3; std::cout << "error:   g24 = " <<       g24 << "\n"; } catch (exception &e) { std::cout << "success: g24\n"; }
	try { bool     g25 = (bool)     v3; std::cout << "error:   g25 = " <<       g25 << "\n"; } catch (exception &e) { std::cout << "success: g25\n"; }
	try { uint8_t  g26 = (uint8_t)  v3; std::cout << "error:   g26 = " << (int) g26 << "\n"; } catch (exception &e) { std::cout << "success: g26\n"; }
	try { int8_t   g27 = (int8_t)   v3; std::cout << "success: g27 = " << (int) g27 << "\n"; } catch (exception &e) { std::cout << "error:   g27\n"; }
	try { uint16_t g28 = (uint16_t) v3; std::cout << "error:   g28 = " <<       g28 << "\n"; } catch (exception &e) { std::cout << "success: g28\n"; }
	try { int16_t  g29 = (int16_t)  v3; std::cout << "error:   g29 = " <<       g29 << "\n"; } catch (exception &e) { std::cout << "success: g29\n"; }
	try { uint32_t g30 = (uint32_t) v3; std::cout << "error:   g30 = " <<       g30 << "\n"; } catch (exception &e) { std::cout << "success: g30\n"; }
	try { int32_t  g31 = (int32_t)  v3; std::cout << "error:   g31 = " <<       g31 << "\n"; } catch (exception &e) { std::cout << "success: g31\n"; }
	try { uint64_t g32 = (uint64_t) v3; std::cout << "error:   g32 = " <<       g32 << "\n"; } catch (exception &e) { std::cout << "success: g32\n"; }
	try { int64_t  g33 = (int64_t)  v3; std::cout << "error:   g33 = " <<       g33 << "\n"; } catch (exception &e) { std::cout << "success: g33\n"; }

	std::cout << std::endl;
}

/**
 * cast08 - uint16_t
 */
void cast08 (void)
{
	Variant v1 ((uint16_t) 1042);

	std::cout << v1 << '\n';

	try { string   h01 = (string)   v1; std::cout << "success: h01 = " <<       h01 << "\n"; } catch (exception &e) { std::cout << "error:   h01\n"; }
	try { double   h02 = (double)   v1; std::cout << "error:   h02 = " <<       h02 << "\n"; } catch (exception &e) { std::cout << "success: h02\n"; }
	try { bool     h03 = (bool)     v1; std::cout << "error:   h03 = " <<       h03 << "\n"; } catch (exception &e) { std::cout << "success: h03\n"; }
	try { uint8_t  h04 = (uint8_t)  v1; std::cout << "error:   h04 = " << (int) h04 << "\n"; } catch (exception &e) { std::cout << "success: h04\n"; }
	try { int8_t   h05 = (int8_t)   v1; std::cout << "error:   h05 = " << (int) h05 << "\n"; } catch (exception &e) { std::cout << "success: h05\n"; }
	try { uint16_t h06 = (uint16_t) v1; std::cout << "success: h06 = " <<       h06 << "\n"; } catch (exception &e) { std::cout << "error:   h06\n"; }
	try { int16_t  h07 = (int16_t)  v1; std::cout << "error:   h07 = " <<       h07 << "\n"; } catch (exception &e) { std::cout << "success: h07\n"; }
	try { uint32_t h08 = (uint32_t) v1; std::cout << "error:   h08 = " <<       h08 << "\n"; } catch (exception &e) { std::cout << "success: h08\n"; }
	try { int32_t  h09 = (int32_t)  v1; std::cout << "error:   h09 = " <<       h09 << "\n"; } catch (exception &e) { std::cout << "success: h09\n"; }
	try { uint64_t h10 = (uint64_t) v1; std::cout << "error:   h10 = " <<       h10 << "\n"; } catch (exception &e) { std::cout << "success: h10\n"; }
	try { int64_t  h11 = (int64_t)  v1; std::cout << "error:   h11 = " <<       h11 << "\n"; } catch (exception &e) { std::cout << "success: h11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint16_t>::min());

	std::cout << v2 << '\n';

	try { string   h12 = (string)   v2; std::cout << "success: h12 = " <<       h12 << "\n"; } catch (exception &e) { std::cout << "error:   h12\n"; }
	try { double   h13 = (double)   v2; std::cout << "error:   h13 = " <<       h13 << "\n"; } catch (exception &e) { std::cout << "success: h13\n"; }
	try { bool     h14 = (bool)     v2; std::cout << "error:   h14 = " <<       h14 << "\n"; } catch (exception &e) { std::cout << "success: h14\n"; }
	try { uint8_t  h15 = (uint8_t)  v2; std::cout << "error:   h15 = " << (int) h15 << "\n"; } catch (exception &e) { std::cout << "success: h15\n"; }
	try { int8_t   h16 = (int8_t)   v2; std::cout << "error:   h16 = " << (int) h16 << "\n"; } catch (exception &e) { std::cout << "success: h16\n"; }
	try { uint16_t h17 = (uint16_t) v2; std::cout << "success: h17 = " <<       h17 << "\n"; } catch (exception &e) { std::cout << "error:   h17\n"; }
	try { int16_t  h18 = (int16_t)  v2; std::cout << "error:   h18 = " <<       h18 << "\n"; } catch (exception &e) { std::cout << "success: h18\n"; }
	try { uint32_t h19 = (uint32_t) v2; std::cout << "error:   h19 = " <<       h19 << "\n"; } catch (exception &e) { std::cout << "success: h19\n"; }
	try { int32_t  h20 = (int32_t)  v2; std::cout << "error:   h20 = " <<       h20 << "\n"; } catch (exception &e) { std::cout << "success: h20\n"; }
	try { uint64_t h21 = (uint64_t) v2; std::cout << "error:   h21 = " <<       h21 << "\n"; } catch (exception &e) { std::cout << "success: h21\n"; }
	try { int64_t  h22 = (int64_t)  v2; std::cout << "error:   h22 = " <<       h22 << "\n"; } catch (exception &e) { std::cout << "success: h22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint16_t>::max());

	std::cout << v3 << '\n';

	try { string   h23 = (string)   v3; std::cout << "success: h23 = " <<       h23 << "\n"; } catch (exception &e) { std::cout << "error:   h23\n"; }
	try { double   h24 = (double)   v3; std::cout << "error:   h24 = " <<       h24 << "\n"; } catch (exception &e) { std::cout << "success: h24\n"; }
	try { bool     h25 = (bool)     v3; std::cout << "error:   h25 = " <<       h25 << "\n"; } catch (exception &e) { std::cout << "success: h25\n"; }
	try { uint8_t  h26 = (uint8_t)  v3; std::cout << "error:   h26 = " << (int) h26 << "\n"; } catch (exception &e) { std::cout << "success: h26\n"; }
	try { int8_t   h27 = (int8_t)   v3; std::cout << "error:   h27 = " << (int) h27 << "\n"; } catch (exception &e) { std::cout << "success: h27\n"; }
	try { uint16_t h28 = (uint16_t) v3; std::cout << "success: h28 = " <<       h28 << "\n"; } catch (exception &e) { std::cout << "error:   h28\n"; }
	try { int16_t  h29 = (int16_t)  v3; std::cout << "error:   h29 = " <<       h29 << "\n"; } catch (exception &e) { std::cout << "success: h29\n"; }
	try { uint32_t h30 = (uint32_t) v3; std::cout << "error:   h30 = " <<       h30 << "\n"; } catch (exception &e) { std::cout << "success: h30\n"; }
	try { int32_t  h31 = (int32_t)  v3; std::cout << "error:   h31 = " <<       h31 << "\n"; } catch (exception &e) { std::cout << "success: h31\n"; }
	try { uint64_t h32 = (uint64_t) v3; std::cout << "error:   h32 = " <<       h32 << "\n"; } catch (exception &e) { std::cout << "success: h32\n"; }
	try { int64_t  h33 = (int64_t)  v3; std::cout << "error:   h33 = " <<       h33 << "\n"; } catch (exception &e) { std::cout << "success: h33\n"; }

	std::cout << std::endl;
}

/**
 * cast09 - int16_t
 */
void cast09 (void)
{
	Variant v1 ((int16_t) -1042);

	std::cout << v1 << '\n';

	try { string   i01 = (string)   v1; std::cout << "success: i01 = " <<       i01 << "\n"; } catch (exception &e) { std::cout << "error:   i01\n"; }
	try { double   i02 = (double)   v1; std::cout << "error:   i02 = " <<       i02 << "\n"; } catch (exception &e) { std::cout << "success: i02\n"; }
	try { bool     i03 = (bool)     v1; std::cout << "error:   i03 = " <<       i03 << "\n"; } catch (exception &e) { std::cout << "success: i03\n"; }
	try { uint8_t  i04 = (uint8_t)  v1; std::cout << "error:   i04 = " << (int) i04 << "\n"; } catch (exception &e) { std::cout << "success: i04\n"; }
	try { int8_t   i05 = (int8_t)   v1; std::cout << "error:   i05 = " << (int) i05 << "\n"; } catch (exception &e) { std::cout << "success: i05\n"; }
	try { uint16_t i06 = (uint16_t) v1; std::cout << "error:   i06 = " <<       i06 << "\n"; } catch (exception &e) { std::cout << "success: i06\n"; }
	try { int16_t  i07 = (int16_t)  v1; std::cout << "success: i07 = " <<       i07 << "\n"; } catch (exception &e) { std::cout << "error:   i07\n"; }
	try { uint32_t i08 = (uint32_t) v1; std::cout << "error:   i08 = " <<       i08 << "\n"; } catch (exception &e) { std::cout << "success: i08\n"; }
	try { int32_t  i09 = (int32_t)  v1; std::cout << "error:   i09 = " <<       i09 << "\n"; } catch (exception &e) { std::cout << "success: i09\n"; }
	try { uint64_t i10 = (uint64_t) v1; std::cout << "error:   i10 = " <<       i10 << "\n"; } catch (exception &e) { std::cout << "success: i10\n"; }
	try { int64_t  i11 = (int64_t)  v1; std::cout << "error:   i11 = " <<       i11 << "\n"; } catch (exception &e) { std::cout << "success: i11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int16_t>::min());

	std::cout << v2 << '\n';

	try { string   i12 = (string)   v2; std::cout << "success: i12 = " <<       i12 << "\n"; } catch (exception &e) { std::cout << "error:   i12\n"; }
	try { double   i13 = (double)   v2; std::cout << "error:   i13 = " <<       i13 << "\n"; } catch (exception &e) { std::cout << "success: i13\n"; }
	try { bool     i14 = (bool)     v2; std::cout << "error:   i14 = " <<       i14 << "\n"; } catch (exception &e) { std::cout << "success: i14\n"; }
	try { uint8_t  i15 = (uint8_t)  v2; std::cout << "error:   i15 = " << (int) i15 << "\n"; } catch (exception &e) { std::cout << "success: i15\n"; }
	try { int8_t   i16 = (int8_t)   v2; std::cout << "error:   i16 = " << (int) i16 << "\n"; } catch (exception &e) { std::cout << "success: i16\n"; }
	try { uint16_t i17 = (uint16_t) v2; std::cout << "error:   i17 = " <<       i17 << "\n"; } catch (exception &e) { std::cout << "success: i17\n"; }
	try { int16_t  i18 = (int16_t)  v2; std::cout << "success: i18 = " <<       i18 << "\n"; } catch (exception &e) { std::cout << "error:   i18\n"; }
	try { uint32_t i19 = (uint32_t) v2; std::cout << "error:   i19 = " <<       i19 << "\n"; } catch (exception &e) { std::cout << "success: i19\n"; }
	try { int32_t  i20 = (int32_t)  v2; std::cout << "error:   i20 = " <<       i20 << "\n"; } catch (exception &e) { std::cout << "success: i20\n"; }
	try { uint64_t i21 = (uint64_t) v2; std::cout << "error:   i21 = " <<       i21 << "\n"; } catch (exception &e) { std::cout << "success: i21\n"; }
	try { int64_t  i22 = (int64_t)  v2; std::cout << "error:   i22 = " <<       i22 << "\n"; } catch (exception &e) { std::cout << "success: i22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int16_t>::max());

	std::cout << v3 << '\n';

	try { string   i23 = (string)   v3; std::cout << "success: i23 = " <<       i23 << "\n"; } catch (exception &e) { std::cout << "error:   i23\n"; }
	try { double   i24 = (double)   v3; std::cout << "error:   i24 = " <<       i24 << "\n"; } catch (exception &e) { std::cout << "success: i24\n"; }
	try { bool     i25 = (bool)     v3; std::cout << "error:   i25 = " <<       i25 << "\n"; } catch (exception &e) { std::cout << "success: i25\n"; }
	try { uint8_t  i26 = (uint8_t)  v3; std::cout << "error:   i26 = " << (int) i26 << "\n"; } catch (exception &e) { std::cout << "success: i26\n"; }
	try { int8_t   i27 = (int8_t)   v3; std::cout << "error:   i27 = " << (int) i27 << "\n"; } catch (exception &e) { std::cout << "success: i27\n"; }
	try { uint16_t i28 = (uint16_t) v3; std::cout << "error:   i28 = " <<       i28 << "\n"; } catch (exception &e) { std::cout << "success: i28\n"; }
	try { int16_t  i29 = (int16_t)  v3; std::cout << "success: i29 = " <<       i29 << "\n"; } catch (exception &e) { std::cout << "error:   i29\n"; }
	try { uint32_t i30 = (uint32_t) v3; std::cout << "error:   i30 = " <<       i30 << "\n"; } catch (exception &e) { std::cout << "success: i30\n"; }
	try { int32_t  i31 = (int32_t)  v3; std::cout << "error:   i31 = " <<       i31 << "\n"; } catch (exception &e) { std::cout << "success: i31\n"; }
	try { uint64_t i32 = (uint64_t) v3; std::cout << "error:   i32 = " <<       i32 << "\n"; } catch (exception &e) { std::cout << "success: i32\n"; }
	try { int64_t  i33 = (int64_t)  v3; std::cout << "error:   i33 = " <<       i33 << "\n"; } catch (exception &e) { std::cout << "success: i33\n"; }

	std::cout << std::endl;
}

/**
 * cast10 - uint32_t
 */
void cast10 (void)
{
	Variant v1 ((uint32_t) 1000042);

	std::cout << v1 << '\n';

	try { string   j01 = (string)   v1; std::cout << "success: j01 = " <<       j01 << "\n"; } catch (exception &e) { std::cout << "error:   j01\n"; }
	try { double   j02 = (double)   v1; std::cout << "error:   j02 = " <<       j02 << "\n"; } catch (exception &e) { std::cout << "success: j02\n"; }
	try { bool     j03 = (bool)     v1; std::cout << "error:   j03 = " <<       j03 << "\n"; } catch (exception &e) { std::cout << "success: j03\n"; }
	try { uint8_t  j04 = (uint8_t)  v1; std::cout << "error:   j04 = " << (int) j04 << "\n"; } catch (exception &e) { std::cout << "success: j04\n"; }
	try { int8_t   j05 = (int8_t)   v1; std::cout << "error:   j05 = " << (int) j05 << "\n"; } catch (exception &e) { std::cout << "success: j05\n"; }
	try { uint16_t j06 = (uint16_t) v1; std::cout << "error:   j06 = " <<       j06 << "\n"; } catch (exception &e) { std::cout << "success: j06\n"; }
	try { int16_t  j07 = (int16_t)  v1; std::cout << "error:   j07 = " <<       j07 << "\n"; } catch (exception &e) { std::cout << "success: j07\n"; }
	try { uint32_t j08 = (uint32_t) v1; std::cout << "success: j08 = " <<       j08 << "\n"; } catch (exception &e) { std::cout << "error:   j08\n"; }
	try { int32_t  j09 = (int32_t)  v1; std::cout << "error:   j09 = " <<       j09 << "\n"; } catch (exception &e) { std::cout << "success: j09\n"; }
	try { uint64_t j10 = (uint64_t) v1; std::cout << "error:   j10 = " <<       j10 << "\n"; } catch (exception &e) { std::cout << "success: j10\n"; }
	try { int64_t  j11 = (int64_t)  v1; std::cout << "error:   j11 = " <<       j11 << "\n"; } catch (exception &e) { std::cout << "success: j11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint32_t>::min());

	std::cout << v2 << '\n';

	try { string   j12 = (string)   v2; std::cout << "success: j12 = " <<       j12 << "\n"; } catch (exception &e) { std::cout << "error:   j12\n"; }
	try { double   j13 = (double)   v2; std::cout << "error:   j13 = " <<       j13 << "\n"; } catch (exception &e) { std::cout << "success: j13\n"; }
	try { bool     j14 = (bool)     v2; std::cout << "error:   j14 = " <<       j14 << "\n"; } catch (exception &e) { std::cout << "success: j14\n"; }
	try { uint8_t  j15 = (uint8_t)  v2; std::cout << "error:   j15 = " << (int) j15 << "\n"; } catch (exception &e) { std::cout << "success: j15\n"; }
	try { int8_t   j16 = (int8_t)   v2; std::cout << "error:   j16 = " << (int) j16 << "\n"; } catch (exception &e) { std::cout << "success: j16\n"; }
	try { uint16_t j17 = (uint16_t) v2; std::cout << "error:   j17 = " <<       j17 << "\n"; } catch (exception &e) { std::cout << "success: j17\n"; }
	try { int16_t  j18 = (int16_t)  v2; std::cout << "error:   j18 = " <<       j18 << "\n"; } catch (exception &e) { std::cout << "success: j18\n"; }
	try { uint32_t j19 = (uint32_t) v2; std::cout << "success: j19 = " <<       j19 << "\n"; } catch (exception &e) { std::cout << "error:   j19\n"; }
	try { int32_t  j20 = (int32_t)  v2; std::cout << "error:   j20 = " <<       j20 << "\n"; } catch (exception &e) { std::cout << "success: j20\n"; }
	try { uint64_t j21 = (uint64_t) v2; std::cout << "error:   j21 = " <<       j21 << "\n"; } catch (exception &e) { std::cout << "success: j21\n"; }
	try { int64_t  j22 = (int64_t)  v2; std::cout << "error:   j22 = " <<       j22 << "\n"; } catch (exception &e) { std::cout << "success: j22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint32_t>::max());

	std::cout << v3 << '\n';

	try { string   j23 = (string)   v3; std::cout << "success: j23 = " <<       j23 << "\n"; } catch (exception &e) { std::cout << "error:   j23\n"; }
	try { double   j24 = (double)   v3; std::cout << "error:   j24 = " <<       j24 << "\n"; } catch (exception &e) { std::cout << "success: j24\n"; }
	try { bool     j25 = (bool)     v3; std::cout << "error:   j25 = " <<       j25 << "\n"; } catch (exception &e) { std::cout << "success: j25\n"; }
	try { uint8_t  j26 = (uint8_t)  v3; std::cout << "error:   j26 = " << (int) j26 << "\n"; } catch (exception &e) { std::cout << "success: j26\n"; }
	try { int8_t   j27 = (int8_t)   v3; std::cout << "error:   j27 = " << (int) j27 << "\n"; } catch (exception &e) { std::cout << "success: j27\n"; }
	try { uint16_t j28 = (uint16_t) v3; std::cout << "error:   j28 = " <<       j28 << "\n"; } catch (exception &e) { std::cout << "success: j28\n"; }
	try { int16_t  j29 = (int16_t)  v3; std::cout << "error:   j29 = " <<       j29 << "\n"; } catch (exception &e) { std::cout << "success: j29\n"; }
	try { uint32_t j30 = (uint32_t) v3; std::cout << "success: j30 = " <<       j30 << "\n"; } catch (exception &e) { std::cout << "error:   j30\n"; }
	try { int32_t  j31 = (int32_t)  v3; std::cout << "error:   j31 = " <<       j31 << "\n"; } catch (exception &e) { std::cout << "success: j31\n"; }
	try { uint64_t j32 = (uint64_t) v3; std::cout << "error:   j32 = " <<       j32 << "\n"; } catch (exception &e) { std::cout << "success: j32\n"; }
	try { int64_t  j33 = (int64_t)  v3; std::cout << "error:   j33 = " <<       j33 << "\n"; } catch (exception &e) { std::cout << "success: j33\n"; }

	std::cout << std::endl;
}

/**
 * cast11 - int32_t
 */
void cast11 (void)
{
	Variant v1 ((int32_t) -1000042);

	std::cout << v1 << '\n';

	try { string   k01 = (string)   v1; std::cout << "success: k01 = " <<       k01 << "\n"; } catch (exception &e) { std::cout << "error:   k01\n"; }
	try { double   k02 = (double)   v1; std::cout << "error:   k02 = " <<       k02 << "\n"; } catch (exception &e) { std::cout << "success: k02\n"; }
	try { bool     k03 = (bool)     v1; std::cout << "error:   k03 = " <<       k03 << "\n"; } catch (exception &e) { std::cout << "success: k03\n"; }
	try { uint8_t  k04 = (uint8_t)  v1; std::cout << "error:   k04 = " << (int) k04 << "\n"; } catch (exception &e) { std::cout << "success: k04\n"; }
	try { int8_t   k05 = (int8_t)   v1; std::cout << "error:   k05 = " << (int) k05 << "\n"; } catch (exception &e) { std::cout << "success: k05\n"; }
	try { uint16_t k06 = (uint16_t) v1; std::cout << "error:   k06 = " <<       k06 << "\n"; } catch (exception &e) { std::cout << "success: k06\n"; }
	try { int16_t  k07 = (int16_t)  v1; std::cout << "error:   k07 = " <<       k07 << "\n"; } catch (exception &e) { std::cout << "success: k07\n"; }
	try { uint32_t k08 = (uint32_t) v1; std::cout << "error:   k08 = " <<       k08 << "\n"; } catch (exception &e) { std::cout << "success: k08\n"; }
	try { int32_t  k09 = (int32_t)  v1; std::cout << "success: k09 = " <<       k09 << "\n"; } catch (exception &e) { std::cout << "error:   k09\n"; }
	try { uint64_t k10 = (uint64_t) v1; std::cout << "error:   k10 = " <<       k10 << "\n"; } catch (exception &e) { std::cout << "success: k10\n"; }
	try { int64_t  k11 = (int64_t)  v1; std::cout << "error:   k11 = " <<       k11 << "\n"; } catch (exception &e) { std::cout << "success: k11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int32_t>::min());

	std::cout << v2 << '\n';

	try { string   k12 = (string)   v2; std::cout << "success: k12 = " <<       k12 << "\n"; } catch (exception &e) { std::cout << "error:   k12\n"; }
	try { double   k13 = (double)   v2; std::cout << "error:   k13 = " <<       k13 << "\n"; } catch (exception &e) { std::cout << "success: k13\n"; }
	try { bool     k14 = (bool)     v2; std::cout << "error:   k14 = " <<       k14 << "\n"; } catch (exception &e) { std::cout << "success: k14\n"; }
	try { uint8_t  k15 = (uint8_t)  v2; std::cout << "error:   k15 = " << (int) k15 << "\n"; } catch (exception &e) { std::cout << "success: k15\n"; }
	try { int8_t   k16 = (int8_t)   v2; std::cout << "error:   k16 = " << (int) k16 << "\n"; } catch (exception &e) { std::cout << "success: k16\n"; }
	try { uint16_t k17 = (uint16_t) v2; std::cout << "error:   k17 = " <<       k17 << "\n"; } catch (exception &e) { std::cout << "success: k17\n"; }
	try { int16_t  k18 = (int16_t)  v2; std::cout << "error:   k18 = " <<       k18 << "\n"; } catch (exception &e) { std::cout << "success: k18\n"; }
	try { uint32_t k19 = (uint32_t) v2; std::cout << "error:   k19 = " <<       k19 << "\n"; } catch (exception &e) { std::cout << "success: k19\n"; }
	try { int32_t  k20 = (int32_t)  v2; std::cout << "success: k20 = " <<       k20 << "\n"; } catch (exception &e) { std::cout << "error:   k20\n"; }
	try { uint64_t k21 = (uint64_t) v2; std::cout << "error:   k21 = " <<       k21 << "\n"; } catch (exception &e) { std::cout << "success: k21\n"; }
	try { int64_t  k22 = (int64_t)  v2; std::cout << "error:   k22 = " <<       k22 << "\n"; } catch (exception &e) { std::cout << "success: k22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int32_t>::max());

	std::cout << v3 << '\n';

	try { string   k23 = (string)   v3; std::cout << "success: k23 = " <<       k23 << "\n"; } catch (exception &e) { std::cout << "error:   k23\n"; }
	try { double   k24 = (double)   v3; std::cout << "error:   k24 = " <<       k24 << "\n"; } catch (exception &e) { std::cout << "success: k24\n"; }
	try { bool     k25 = (bool)     v3; std::cout << "error:   k25 = " <<       k25 << "\n"; } catch (exception &e) { std::cout << "success: k25\n"; }
	try { uint8_t  k26 = (uint8_t)  v3; std::cout << "error:   k26 = " << (int) k26 << "\n"; } catch (exception &e) { std::cout << "success: k26\n"; }
	try { int8_t   k27 = (int8_t)   v3; std::cout << "error:   k27 = " << (int) k27 << "\n"; } catch (exception &e) { std::cout << "success: k27\n"; }
	try { uint16_t k28 = (uint16_t) v3; std::cout << "error:   k28 = " <<       k28 << "\n"; } catch (exception &e) { std::cout << "success: k28\n"; }
	try { int16_t  k29 = (int16_t)  v3; std::cout << "error:   k29 = " <<       k29 << "\n"; } catch (exception &e) { std::cout << "success: k29\n"; }
	try { uint32_t k30 = (uint32_t) v3; std::cout << "error:   k30 = " <<       k30 << "\n"; } catch (exception &e) { std::cout << "success: k30\n"; }
	try { int32_t  k31 = (int32_t)  v3; std::cout << "success: k31 = " <<       k31 << "\n"; } catch (exception &e) { std::cout << "error:   k31\n"; }
	try { uint64_t k32 = (uint64_t) v3; std::cout << "error:   k32 = " <<       k32 << "\n"; } catch (exception &e) { std::cout << "success: k32\n"; }
	try { int64_t  k33 = (int64_t)  v3; std::cout << "error:   k33 = " <<       k33 << "\n"; } catch (exception &e) { std::cout << "success: k33\n"; }

	std::cout << std::endl;
}

/**
 * cast12 - uint64_t
 */
void cast12 (void)
{
	Variant v1 ((uint64_t) 1000000000042);

	std::cout << v1 << '\n';

	try { string   l01 = (string)   v1; std::cout << "success: l01 = " <<       l01 << "\n"; } catch (exception &e) { std::cout << "error:   l01\n"; }
	try { double   l02 = (double)   v1; std::cout << "error:   l02 = " <<       l02 << "\n"; } catch (exception &e) { std::cout << "success: l02\n"; }
	try { bool     l03 = (bool)     v1; std::cout << "error:   l03 = " <<       l03 << "\n"; } catch (exception &e) { std::cout << "success: l03\n"; }
	try { uint8_t  l04 = (uint8_t)  v1; std::cout << "error:   l04 = " << (int) l04 << "\n"; } catch (exception &e) { std::cout << "success: l04\n"; }
	try { int8_t   l05 = (int8_t)   v1; std::cout << "error:   l05 = " << (int) l05 << "\n"; } catch (exception &e) { std::cout << "success: l05\n"; }
	try { uint16_t l06 = (uint16_t) v1; std::cout << "error:   l06 = " <<       l06 << "\n"; } catch (exception &e) { std::cout << "success: l06\n"; }
	try { int16_t  l07 = (int16_t)  v1; std::cout << "error:   l07 = " <<       l07 << "\n"; } catch (exception &e) { std::cout << "success: l07\n"; }
	try { uint32_t l08 = (uint32_t) v1; std::cout << "error:   l08 = " <<       l08 << "\n"; } catch (exception &e) { std::cout << "success: l08\n"; }
	try { int32_t  l09 = (int32_t)  v1; std::cout << "error:   l09 = " <<       l09 << "\n"; } catch (exception &e) { std::cout << "success: l09\n"; }
	try { uint64_t l10 = (uint64_t) v1; std::cout << "success: l10 = " <<       l10 << "\n"; } catch (exception &e) { std::cout << "error:   l10\n"; }
	try { int64_t  l11 = (int64_t)  v1; std::cout << "error:   l11 = " <<       l11 << "\n"; } catch (exception &e) { std::cout << "success: l11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<uint64_t>::min());

	std::cout << v2 << '\n';

	try { string   l12 = (string)   v2; std::cout << "success: l12 = " <<       l12 << "\n"; } catch (exception &e) { std::cout << "error:   l12\n"; }
	try { double   l13 = (double)   v2; std::cout << "error:   l13 = " <<       l13 << "\n"; } catch (exception &e) { std::cout << "success: l13\n"; }
	try { bool     l14 = (bool)     v2; std::cout << "error:   l14 = " <<       l14 << "\n"; } catch (exception &e) { std::cout << "success: l14\n"; }
	try { uint8_t  l15 = (uint8_t)  v2; std::cout << "error:   l15 = " << (int) l15 << "\n"; } catch (exception &e) { std::cout << "success: l15\n"; }
	try { int8_t   l16 = (int8_t)   v2; std::cout << "error:   l16 = " << (int) l16 << "\n"; } catch (exception &e) { std::cout << "success: l16\n"; }
	try { uint16_t l17 = (uint16_t) v2; std::cout << "error:   l17 = " <<       l17 << "\n"; } catch (exception &e) { std::cout << "success: l17\n"; }
	try { int16_t  l18 = (int16_t)  v2; std::cout << "error:   l18 = " <<       l18 << "\n"; } catch (exception &e) { std::cout << "success: l18\n"; }
	try { uint32_t l19 = (uint32_t) v2; std::cout << "error:   l19 = " <<       l19 << "\n"; } catch (exception &e) { std::cout << "success: l19\n"; }
	try { int32_t  l20 = (int32_t)  v2; std::cout << "error:   l20 = " <<       l20 << "\n"; } catch (exception &e) { std::cout << "success: l20\n"; }
	try { uint64_t l21 = (uint64_t) v2; std::cout << "success: l21 = " <<       l21 << "\n"; } catch (exception &e) { std::cout << "error:   l21\n"; }
	try { int64_t  l22 = (int64_t)  v2; std::cout << "error:   l22 = " <<       l22 << "\n"; } catch (exception &e) { std::cout << "success: l22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<uint64_t>::max());

	std::cout << v3 << '\n';

	try { string   l23 = (string)   v3; std::cout << "success: l23 = " <<       l23 << "\n"; } catch (exception &e) { std::cout << "error:   l23\n"; }
	try { double   l24 = (double)   v3; std::cout << "error:   l24 = " <<       l24 << "\n"; } catch (exception &e) { std::cout << "success: l24\n"; }
	try { bool     l25 = (bool)     v3; std::cout << "error:   l25 = " <<       l25 << "\n"; } catch (exception &e) { std::cout << "success: l25\n"; }
	try { uint8_t  l26 = (uint8_t)  v3; std::cout << "error:   l26 = " << (int) l26 << "\n"; } catch (exception &e) { std::cout << "success: l26\n"; }
	try { int8_t   l27 = (int8_t)   v3; std::cout << "error:   l27 = " << (int) l27 << "\n"; } catch (exception &e) { std::cout << "success: l27\n"; }
	try { uint16_t l28 = (uint16_t) v3; std::cout << "error:   l28 = " <<       l28 << "\n"; } catch (exception &e) { std::cout << "success: l28\n"; }
	try { int16_t  l29 = (int16_t)  v3; std::cout << "error:   l29 = " <<       l29 << "\n"; } catch (exception &e) { std::cout << "success: l29\n"; }
	try { uint32_t l30 = (uint32_t) v3; std::cout << "error:   l30 = " <<       l30 << "\n"; } catch (exception &e) { std::cout << "success: l30\n"; }
	try { int32_t  l31 = (int32_t)  v3; std::cout << "error:   l31 = " <<       l31 << "\n"; } catch (exception &e) { std::cout << "success: l31\n"; }
	try { uint64_t l32 = (uint64_t) v3; std::cout << "success: l32 = " <<       l32 << "\n"; } catch (exception &e) { std::cout << "error:   l32\n"; }
	try { int64_t  l33 = (int64_t)  v3; std::cout << "error:   l33 = " <<       l33 << "\n"; } catch (exception &e) { std::cout << "success: l33\n"; }

	std::cout << std::endl;
}

/**
 * cast13 - int64_t
 */
void cast13 (void)
{
	Variant v1 ((int64_t) -1000042);

	std::cout << v1 << '\n';

	try { string   m01 = (string)   v1; std::cout << "success: m01 = " <<       m01 << "\n"; } catch (exception &e) { std::cout << "error:   m01\n"; }
	try { double   m02 = (double)   v1; std::cout << "error:   m02 = " <<       m02 << "\n"; } catch (exception &e) { std::cout << "success: m02\n"; }
	try { bool     m03 = (bool)     v1; std::cout << "error:   m03 = " <<       m03 << "\n"; } catch (exception &e) { std::cout << "success: m03\n"; }
	try { uint8_t  m04 = (uint8_t)  v1; std::cout << "error:   m04 = " << (int) m04 << "\n"; } catch (exception &e) { std::cout << "success: m04\n"; }
	try { int8_t   m05 = (int8_t)   v1; std::cout << "error:   m05 = " << (int) m05 << "\n"; } catch (exception &e) { std::cout << "success: m05\n"; }
	try { uint16_t m06 = (uint16_t) v1; std::cout << "error:   m06 = " <<       m06 << "\n"; } catch (exception &e) { std::cout << "success: m06\n"; }
	try { int16_t  m07 = (int16_t)  v1; std::cout << "error:   m07 = " <<       m07 << "\n"; } catch (exception &e) { std::cout << "success: m07\n"; }
	try { uint32_t m08 = (uint32_t) v1; std::cout << "error:   m08 = " <<       m08 << "\n"; } catch (exception &e) { std::cout << "success: m08\n"; }
	try { int32_t  m09 = (int32_t)  v1; std::cout << "error:   m09 = " <<       m09 << "\n"; } catch (exception &e) { std::cout << "success: m09\n"; }
	try { uint64_t m10 = (uint64_t) v1; std::cout << "error:   m10 = " <<       m10 << "\n"; } catch (exception &e) { std::cout << "success: m10\n"; }
	try { int64_t  m11 = (int64_t)  v1; std::cout << "success: m11 = " <<       m11 << "\n"; } catch (exception &e) { std::cout << "error:   m11\n"; }

	std::cout << std::endl;

	Variant v2 (std::numeric_limits<int64_t>::min());

	std::cout << v2 << '\n';

	try { string   m12 = (string)   v2; std::cout << "success: m12 = " <<       m12 << "\n"; } catch (exception &e) { std::cout << "error:   m12\n"; }
	try { double   m13 = (double)   v2; std::cout << "error:   m13 = " <<       m13 << "\n"; } catch (exception &e) { std::cout << "success: m13\n"; }
	try { bool     m14 = (bool)     v2; std::cout << "error:   m14 = " <<       m14 << "\n"; } catch (exception &e) { std::cout << "success: m14\n"; }
	try { uint8_t  m15 = (uint8_t)  v2; std::cout << "error:   m15 = " << (int) m15 << "\n"; } catch (exception &e) { std::cout << "success: m15\n"; }
	try { int8_t   m16 = (int8_t)   v2; std::cout << "error:   m16 = " << (int) m16 << "\n"; } catch (exception &e) { std::cout << "success: m16\n"; }
	try { uint16_t m17 = (uint16_t) v2; std::cout << "error:   m17 = " <<       m17 << "\n"; } catch (exception &e) { std::cout << "success: m17\n"; }
	try { int16_t  m18 = (int16_t)  v2; std::cout << "error:   m18 = " <<       m18 << "\n"; } catch (exception &e) { std::cout << "success: m18\n"; }
	try { uint32_t m19 = (uint32_t) v2; std::cout << "error:   m19 = " <<       m19 << "\n"; } catch (exception &e) { std::cout << "success: m19\n"; }
	try { int32_t  m20 = (int32_t)  v2; std::cout << "error:   m20 = " <<       m20 << "\n"; } catch (exception &e) { std::cout << "success: m20\n"; }
	try { uint64_t m21 = (uint64_t) v2; std::cout << "error:   m21 = " <<       m21 << "\n"; } catch (exception &e) { std::cout << "success: m21\n"; }
	try { int64_t  m22 = (int64_t)  v2; std::cout << "success: m22 = " <<       m22 << "\n"; } catch (exception &e) { std::cout << "error:   m22\n"; }

	std::cout << std::endl;

	Variant v3 (std::numeric_limits<int64_t>::max());

	std::cout << v3 << '\n';

	try { string   m23 = (string)   v3; std::cout << "success: m23 = " <<       m23 << "\n"; } catch (exception &e) { std::cout << "error:   m23\n"; }
	try { double   m24 = (double)   v3; std::cout << "error:   m24 = " <<       m24 << "\n"; } catch (exception &e) { std::cout << "success: m24\n"; }
	try { bool     m25 = (bool)     v3; std::cout << "error:   m25 = " <<       m25 << "\n"; } catch (exception &e) { std::cout << "success: m25\n"; }
	try { uint8_t  m26 = (uint8_t)  v3; std::cout << "error:   m26 = " << (int) m26 << "\n"; } catch (exception &e) { std::cout << "success: m26\n"; }
	try { int8_t   m27 = (int8_t)   v3; std::cout << "error:   m27 = " << (int) m27 << "\n"; } catch (exception &e) { std::cout << "success: m27\n"; }
	try { uint16_t m28 = (uint16_t) v3; std::cout << "error:   m28 = " <<       m28 << "\n"; } catch (exception &e) { std::cout << "success: m28\n"; }
	try { int16_t  m29 = (int16_t)  v3; std::cout << "error:   m29 = " <<       m29 << "\n"; } catch (exception &e) { std::cout << "success: m29\n"; }
	try { uint32_t m30 = (uint32_t) v3; std::cout << "error:   m30 = " <<       m30 << "\n"; } catch (exception &e) { std::cout << "success: m30\n"; }
	try { int32_t  m31 = (int32_t)  v3; std::cout << "error:   m31 = " <<       m31 << "\n"; } catch (exception &e) { std::cout << "success: m31\n"; }
	try { uint64_t m32 = (uint64_t) v3; std::cout << "error:   m32 = " <<       m32 << "\n"; } catch (exception &e) { std::cout << "success: m32\n"; }
	try { int64_t  m33 = (int64_t)  v3; std::cout << "success: m33 = " <<       m33 << "\n"; } catch (exception &e) { std::cout << "error:   m33\n"; }

	std::cout << std::endl;
}


/**
 * convert01 - empty
 */
void convert01 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst; dst = str; }
	{ Variant dst; dst = d;   }
	{ Variant dst; dst = b;   }
	{ Variant dst; dst = u8;  }
	{ Variant dst; dst = s8;  }
	{ Variant dst; dst = u16; }
	{ Variant dst; dst = s16; }
	{ Variant dst; dst = u32; }
	{ Variant dst; dst = s32; }
	{ Variant dst; dst = u64; }
	{ Variant dst; dst = s64; }
}

/**
 * convert02 - string
 */
void convert02 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst (std::string ("hello")); dst = str; }
	{ Variant dst (std::string ("hello")); dst = d;   }
	{ Variant dst (std::string ("hello")); dst = b;   }
	{ Variant dst (std::string ("hello")); dst = u8;  }
	{ Variant dst (std::string ("hello")); dst = s8;  }
	{ Variant dst (std::string ("hello")); dst = u16; }
	{ Variant dst (std::string ("hello")); dst = s16; }
	{ Variant dst (std::string ("hello")); dst = u32; }
	{ Variant dst (std::string ("hello")); dst = s32; }
	{ Variant dst (std::string ("hello")); dst = u64; }
	{ Variant dst (std::string ("hello")); dst = s64; }
}

/**
 * convert03 - string
 */
void convert03 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ("hello"); dst = str; }
	{ Variant dst ("hello"); dst = d;   }
	{ Variant dst ("hello"); dst = b;   }
	{ Variant dst ("hello"); dst = u8;  }
	{ Variant dst ("hello"); dst = s8;  }
	{ Variant dst ("hello"); dst = u16; }
	{ Variant dst ("hello"); dst = s16; }
	{ Variant dst ("hello"); dst = u32; }
	{ Variant dst ("hello"); dst = s32; }
	{ Variant dst ("hello"); dst = u64; }
	{ Variant dst ("hello"); dst = s64; }
}

/**
 * convert04 - double
 */
void convert04 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst (102.6); dst = str; }
	{ Variant dst (102.6); dst = d;   }
	{ Variant dst (102.6); dst = b;   }
	{ Variant dst (102.6); dst = u8;  }
	{ Variant dst (102.6); dst = s8;  }
	{ Variant dst (102.6); dst = u16; }
	{ Variant dst (102.6); dst = s16; }
	{ Variant dst (102.6); dst = u32; }
	{ Variant dst (102.6); dst = s32; }
	{ Variant dst (102.6); dst = u64; }
	{ Variant dst (102.6); dst = s64; }
}

/**
 * convert05 - bool
 */
void convert05 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  false;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst (true); dst = str; }
	{ Variant dst (true); dst = d;   }
	{ Variant dst (true); dst = b;   }
	{ Variant dst (true); dst = u8;  }
	{ Variant dst (true); dst = s8;  }
	{ Variant dst (true); dst = u16; }
	{ Variant dst (true); dst = s16; }
	{ Variant dst (true); dst = u32; }
	{ Variant dst (true); dst = s32; }
	{ Variant dst (true); dst = u64; }
	{ Variant dst (true); dst = s64; }
}

/**
 * convert06 - uint8_t
 */
void convert06 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((uint8_t) 98); dst = str; }
	{ Variant dst ((uint8_t) 98); dst = d;   }
	{ Variant dst ((uint8_t) 98); dst = b;   }
	{ Variant dst ((uint8_t) 98); dst = u8;  }
	{ Variant dst ((uint8_t) 98); dst = s8;  }
	{ Variant dst ((uint8_t) 98); dst = u16; }
	{ Variant dst ((uint8_t) 98); dst = s16; }
	{ Variant dst ((uint8_t) 98); dst = u32; }
	{ Variant dst ((uint8_t) 98); dst = s32; }
	{ Variant dst ((uint8_t) 98); dst = u64; }
	{ Variant dst ((uint8_t) 98); dst = s64; }
}

/**
 * convert07 - int8_t
 */
void convert07 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((int8_t) -98); dst = str; }
	{ Variant dst ((int8_t) -98); dst = d;   }
	{ Variant dst ((int8_t) -98); dst = b;   }
	{ Variant dst ((int8_t) -98); dst = u8;  }
	{ Variant dst ((int8_t) -98); dst = s8;  }
	{ Variant dst ((int8_t) -98); dst = u16; }
	{ Variant dst ((int8_t) -98); dst = s16; }
	{ Variant dst ((int8_t) -98); dst = u32; }
	{ Variant dst ((int8_t) -98); dst = s32; }
	{ Variant dst ((int8_t) -98); dst = u64; }
	{ Variant dst ((int8_t) -98); dst = s64; }
}


/**
 * convert08 - uint16_t
 */
void convert08 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((uint16_t) 1098); dst = str; }
	{ Variant dst ((uint16_t) 1098); dst = d;   }
	{ Variant dst ((uint16_t) 1098); dst = b;   }
	{ Variant dst ((uint16_t) 1098); dst = u8;  }
	{ Variant dst ((uint16_t) 1098); dst = s8;  }
	{ Variant dst ((uint16_t) 1098); dst = u16; }
	{ Variant dst ((uint16_t) 1098); dst = s16; }
	{ Variant dst ((uint16_t) 1098); dst = u32; }
	{ Variant dst ((uint16_t) 1098); dst = s32; }
	{ Variant dst ((uint16_t) 1098); dst = u64; }
	{ Variant dst ((uint16_t) 1098); dst = s64; }
}

/**
 * convert09 - int16_t
 */
void convert09 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((int16_t) -1098); dst = str; }
	{ Variant dst ((int16_t) -1098); dst = d;   }
	{ Variant dst ((int16_t) -1098); dst = b;   }
	{ Variant dst ((int16_t) -1098); dst = u8;  }
	{ Variant dst ((int16_t) -1098); dst = s8;  }
	{ Variant dst ((int16_t) -1098); dst = u16; }
	{ Variant dst ((int16_t) -1098); dst = s16; }
	{ Variant dst ((int16_t) -1098); dst = u32; }
	{ Variant dst ((int16_t) -1098); dst = s32; }
	{ Variant dst ((int16_t) -1098); dst = u64; }
	{ Variant dst ((int16_t) -1098); dst = s64; }
}


/**
 * convert10 - uint32_t
 */
void convert10 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((uint32_t) 1000098); dst = str; }
	{ Variant dst ((uint32_t) 1000098); dst = d;   }
	{ Variant dst ((uint32_t) 1000098); dst = b;   }
	{ Variant dst ((uint32_t) 1000098); dst = u8;  }
	{ Variant dst ((uint32_t) 1000098); dst = s8;  }
	{ Variant dst ((uint32_t) 1000098); dst = u16; }
	{ Variant dst ((uint32_t) 1000098); dst = s16; }
	{ Variant dst ((uint32_t) 1000098); dst = u32; }
	{ Variant dst ((uint32_t) 1000098); dst = s32; }
	{ Variant dst ((uint32_t) 1000098); dst = u64; }
	{ Variant dst ((uint32_t) 1000098); dst = s64; }
}

/**
 * convert11 - int32_t
 */
void convert11 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((int32_t) -1000098); dst = str; }
	{ Variant dst ((int32_t) -1000098); dst = d;   }
	{ Variant dst ((int32_t) -1000098); dst = b;   }
	{ Variant dst ((int32_t) -1000098); dst = u8;  }
	{ Variant dst ((int32_t) -1000098); dst = s8;  }
	{ Variant dst ((int32_t) -1000098); dst = u16; }
	{ Variant dst ((int32_t) -1000098); dst = s16; }
	{ Variant dst ((int32_t) -1000098); dst = u32; }
	{ Variant dst ((int32_t) -1000098); dst = s32; }
	{ Variant dst ((int32_t) -1000098); dst = u64; }
	{ Variant dst ((int32_t) -1000098); dst = s64; }
}


/**
 * convert12 - uint64_t
 */
void convert12 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((uint64_t) 1000000000098); dst = str; }
	{ Variant dst ((uint64_t) 1000000000098); dst = d;   }
	{ Variant dst ((uint64_t) 1000000000098); dst = b;   }
	{ Variant dst ((uint64_t) 1000000000098); dst = u8;  }
	{ Variant dst ((uint64_t) 1000000000098); dst = s8;  }
	{ Variant dst ((uint64_t) 1000000000098); dst = u16; }
	{ Variant dst ((uint64_t) 1000000000098); dst = s16; }
	{ Variant dst ((uint64_t) 1000000000098); dst = u32; }
	{ Variant dst ((uint64_t) 1000000000098); dst = s32; }
	{ Variant dst ((uint64_t) 1000000000098); dst = u64; }
	{ Variant dst ((uint64_t) 1000000000098); dst = s64; }
}

/**
 * convert13 - int64_t
 */
void convert13 (void)
{
	Variant str =  "message";
	Variant d   =  3.141592654;
	Variant b   =  true;
	Variant u8  =  42;
	Variant s8  = -42;
	Variant u16 =  1042;
	Variant s16 = -1042;
	Variant u32 =  1000042;
	Variant s32 = -1000042;
	Variant u64 =  1000000000042;
	Variant s64 = -1000000000042;

	{ Variant dst ((int64_t) -1000000000098); dst = str; }
	{ Variant dst ((int64_t) -1000000000098); dst = d;   }
	{ Variant dst ((int64_t) -1000000000098); dst = b;   }
	{ Variant dst ((int64_t) -1000000000098); dst = u8;  }
	{ Variant dst ((int64_t) -1000000000098); dst = s8;  }
	{ Variant dst ((int64_t) -1000000000098); dst = u16; }
	{ Variant dst ((int64_t) -1000000000098); dst = s16; }
	{ Variant dst ((int64_t) -1000000000098); dst = u32; }
	{ Variant dst ((int64_t) -1000000000098); dst = s32; }
	{ Variant dst ((int64_t) -1000000000098); dst = u64; }
	{ Variant dst ((int64_t) -1000000000098); dst = s64; }
}


/**
 * main
 */
int main (int argc, char *argv[])
{
	if (argc < 2) {
		convert01();
		convert02();
		convert03();
		convert04();
		convert05();
		convert06();
		convert07();
		convert08();
		convert09();
		convert10();
		convert11();
		convert12();
		convert13();
	} else {
		switch (std::stoi(argv[1])) {
			case  1: convert01(); break;
			case  2: convert02(); break;
			case  3: convert03(); break;
			case  4: convert04(); break;
			case  5: convert05(); break;
			case  6: convert06(); break;
			case  7: convert07(); break;
			case  8: convert08(); break;
			case  9: convert09(); break;
			case 10: convert10(); break;
			case 11: convert11(); break;
			case 12: convert12(); break;
			case 13: convert13(); break;
		}
	}
	return 0;
}


