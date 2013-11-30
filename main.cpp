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
 * convert01 - empty
 */
void convert01 (void)
{
	Variant v;

	std::cout << v << '\n';

	try { string   a01 = (string)   v; std::cout << "success: a01 = " << a01 << "\n"; } catch (exception &e) { std::cout << "error:   a01\n"; }
	try { double   a02 = (double)   v; std::cout << "error:   a02 = " << a02 << "\n"; } catch (exception &e) { std::cout << "success: a02\n"; }
	try { bool     a03 = (bool)     v; std::cout << "error:   a03 = " << a03 << "\n"; } catch (exception &e) { std::cout << "success: a03\n"; }
	try { uint8_t  a04 = (uint8_t)  v; std::cout << "error:   a04 = " << a04 << "\n"; } catch (exception &e) { std::cout << "success: a04\n"; }
	try { int8_t   a05 = (int8_t)   v; std::cout << "error:   a05 = " << a05 << "\n"; } catch (exception &e) { std::cout << "success: a05\n"; }
	try { uint16_t a06 = (uint16_t) v; std::cout << "error:   a06 = " << a06 << "\n"; } catch (exception &e) { std::cout << "success: a06\n"; }
	try { int16_t  a07 = (int16_t)  v; std::cout << "error:   a07 = " << a07 << "\n"; } catch (exception &e) { std::cout << "success: a07\n"; }
	try { uint32_t a08 = (uint32_t) v; std::cout << "error:   a08 = " << a08 << "\n"; } catch (exception &e) { std::cout << "success: a08\n"; }
	try { int32_t  a09 = (int32_t)  v; std::cout << "error:   a09 = " << a09 << "\n"; } catch (exception &e) { std::cout << "success: a09\n"; }
	try { uint64_t a10 = (uint64_t) v; std::cout << "error:   a10 = " << a10 << "\n"; } catch (exception &e) { std::cout << "success: a10\n"; }
	try { int64_t  a11 = (int64_t)  v; std::cout << "error:   a11 = " << a11 << "\n"; } catch (exception &e) { std::cout << "success: a11\n"; }

	std::cout << std::endl;
}

/**
 * convert02 - string
 */
void convert02 (void)
{
	Variant v (std::string ("this is a message"));

	std::cout << v << '\n';

	try { string   b01 = (string)   v; std::cout << "success: b01 = " << b01 << "\n"; } catch (exception &e) { std::cout << "error:   b01\n"; }
	try { double   b02 = (double)   v; std::cout << "error:   b02 = " << b02 << "\n"; } catch (exception &e) { std::cout << "success: b02\n"; }
	try { bool     b03 = (bool)     v; std::cout << "error:   b03 = " << b03 << "\n"; } catch (exception &e) { std::cout << "success: b03\n"; }
	try { uint8_t  b04 = (uint8_t)  v; std::cout << "error:   b04 = " << b04 << "\n"; } catch (exception &e) { std::cout << "success: b04\n"; }
	try { int8_t   b05 = (int8_t)   v; std::cout << "error:   b05 = " << b05 << "\n"; } catch (exception &e) { std::cout << "success: b05\n"; }
	try { uint16_t b06 = (uint16_t) v; std::cout << "error:   b06 = " << b06 << "\n"; } catch (exception &e) { std::cout << "success: b06\n"; }
	try { int16_t  b07 = (int16_t)  v; std::cout << "error:   b07 = " << b07 << "\n"; } catch (exception &e) { std::cout << "success: b07\n"; }
	try { uint32_t b08 = (uint32_t) v; std::cout << "error:   b08 = " << b08 << "\n"; } catch (exception &e) { std::cout << "success: b08\n"; }
	try { int32_t  b09 = (int32_t)  v; std::cout << "error:   b09 = " << b09 << "\n"; } catch (exception &e) { std::cout << "success: b09\n"; }
	try { uint64_t b10 = (uint64_t) v; std::cout << "error:   b10 = " << b10 << "\n"; } catch (exception &e) { std::cout << "success: b10\n"; }
	try { int64_t  b11 = (int64_t)  v; std::cout << "error:   b11 = " << b11 << "\n"; } catch (exception &e) { std::cout << "success: b11\n"; }

	std::cout << std::endl;
}

/**
 * convert03 - char*
 */
void convert03 (void)
{
	Variant v ("this is a message");

	std::cout << v << '\n';

	try { string   c01 = (string)   v; std::cout << "success: c01 = " << c01 << "\n"; } catch (exception &e) { std::cout << "error:   c01\n"; }
	try { double   c02 = (double)   v; std::cout << "error:   c02 = " << c02 << "\n"; } catch (exception &e) { std::cout << "success: c02\n"; }
	try { bool     c03 = (bool)     v; std::cout << "error:   c03 = " << c03 << "\n"; } catch (exception &e) { std::cout << "success: c03\n"; }
	try { uint8_t  c04 = (uint8_t)  v; std::cout << "error:   c04 = " << c04 << "\n"; } catch (exception &e) { std::cout << "success: c04\n"; }
	try { int8_t   c05 = (int8_t)   v; std::cout << "error:   c05 = " << c05 << "\n"; } catch (exception &e) { std::cout << "success: c05\n"; }
	try { uint16_t c06 = (uint16_t) v; std::cout << "error:   c06 = " << c06 << "\n"; } catch (exception &e) { std::cout << "success: c06\n"; }
	try { int16_t  c07 = (int16_t)  v; std::cout << "error:   c07 = " << c07 << "\n"; } catch (exception &e) { std::cout << "success: c07\n"; }
	try { uint32_t c08 = (uint32_t) v; std::cout << "error:   c08 = " << c08 << "\n"; } catch (exception &e) { std::cout << "success: c08\n"; }
	try { int32_t  c09 = (int32_t)  v; std::cout << "error:   c09 = " << c09 << "\n"; } catch (exception &e) { std::cout << "success: c09\n"; }
	try { uint64_t c10 = (uint64_t) v; std::cout << "error:   c10 = " << c10 << "\n"; } catch (exception &e) { std::cout << "success: c10\n"; }
	try { int64_t  c11 = (int64_t)  v; std::cout << "error:   c11 = " << c11 << "\n"; } catch (exception &e) { std::cout << "success: c11\n"; }

	std::cout << std::endl;
}

/**
 * convert04 - double
 */
void convert04 (void)
{
	Variant v (3.141592654);

	std::cout << v << '\n';

	try { string   d01 = (string)   v; std::cout << "success: d01 = " << d01 << "\n"; } catch (exception &e) { std::cout << "error:   d01\n"; }
	try { double   d02 = (double)   v; std::cout << "success: d02 = " << d02 << "\n"; } catch (exception &e) { std::cout << "error:   d02\n"; }
	try { bool     d03 = (bool)     v; std::cout << "error:   d03 = " << d03 << "\n"; } catch (exception &e) { std::cout << "success: d03\n"; }
	try { uint8_t  d04 = (uint8_t)  v; std::cout << "error:   d04 = " << d04 << "\n"; } catch (exception &e) { std::cout << "success: d04\n"; }
	try { int8_t   d05 = (int8_t)   v; std::cout << "error:   d05 = " << d05 << "\n"; } catch (exception &e) { std::cout << "success: d05\n"; }
	try { uint16_t d06 = (uint16_t) v; std::cout << "error:   d06 = " << d06 << "\n"; } catch (exception &e) { std::cout << "success: d06\n"; }
	try { int16_t  d07 = (int16_t)  v; std::cout << "error:   d07 = " << d07 << "\n"; } catch (exception &e) { std::cout << "success: d07\n"; }
	try { uint32_t d08 = (uint32_t) v; std::cout << "error:   d08 = " << d08 << "\n"; } catch (exception &e) { std::cout << "success: d08\n"; }
	try { int32_t  d09 = (int32_t)  v; std::cout << "error:   d09 = " << d09 << "\n"; } catch (exception &e) { std::cout << "success: d09\n"; }
	try { uint64_t d10 = (uint64_t) v; std::cout << "error:   d10 = " << d10 << "\n"; } catch (exception &e) { std::cout << "success: d10\n"; }
	try { int64_t  d11 = (int64_t)  v; std::cout << "error:   d11 = " << d11 << "\n"; } catch (exception &e) { std::cout << "success: d11\n"; }

	std::cout << std::endl;
}

/**
 * convert05 - bool
 */
void convert05 (void)
{
	Variant v (true);

	std::cout << v << '\n';

	try { string   e01 = (string)   v; std::cout << "success: e01 = " << e01 << "\n"; } catch (exception &e) { std::cout << "error:   e01\n"; }
	try { double   e02 = (double)   v; std::cout << "error:   e02 = " << e02 << "\n"; } catch (exception &e) { std::cout << "success: e02\n"; }
	try { bool     e03 = (bool)     v; std::cout << "success: e03 = " << e03 << "\n"; } catch (exception &e) { std::cout << "error:   e03\n"; }
	try { uint8_t  e04 = (uint8_t)  v; std::cout << "error:   e04 = " << e04 << "\n"; } catch (exception &e) { std::cout << "success: e04\n"; }
	try { int8_t   e05 = (int8_t)   v; std::cout << "error:   e05 = " << e05 << "\n"; } catch (exception &e) { std::cout << "success: e05\n"; }
	try { uint16_t e06 = (uint16_t) v; std::cout << "error:   e06 = " << e06 << "\n"; } catch (exception &e) { std::cout << "success: e06\n"; }
	try { int16_t  e07 = (int16_t)  v; std::cout << "error:   e07 = " << e07 << "\n"; } catch (exception &e) { std::cout << "success: e07\n"; }
	try { uint32_t e08 = (uint32_t) v; std::cout << "error:   e08 = " << e08 << "\n"; } catch (exception &e) { std::cout << "success: e08\n"; }
	try { int32_t  e09 = (int32_t)  v; std::cout << "error:   e09 = " << e09 << "\n"; } catch (exception &e) { std::cout << "success: e09\n"; }
	try { uint64_t e10 = (uint64_t) v; std::cout << "error:   e10 = " << e10 << "\n"; } catch (exception &e) { std::cout << "success: e10\n"; }
	try { int64_t  e11 = (int64_t)  v; std::cout << "error:   e11 = " << e11 << "\n"; } catch (exception &e) { std::cout << "success: e11\n"; }

	std::cout << std::endl;
}

/**
 * convert06 - uint8_t
 */
void convert06 (void)
{
	Variant v ((uint8_t) 42);

	std::cout << v << '\n';

	try { string   f01 = (string)   v; std::cout << "success: f01 = " << f01 << "\n"; } catch (exception &e) { std::cout << "error:   f01\n"; }
	try { double   f02 = (double)   v; std::cout << "error:   f02 = " << f02 << "\n"; } catch (exception &e) { std::cout << "success: f02\n"; }
	try { bool     f03 = (bool)     v; std::cout << "error:   f03 = " << f03 << "\n"; } catch (exception &e) { std::cout << "success: f03\n"; }
	try { uint8_t  f04 = (uint8_t)  v; std::cout << "success: f04 = " << f04 << "\n"; } catch (exception &e) { std::cout << "error:   f04\n"; }
	try { int8_t   f05 = (int8_t)   v; std::cout << "error:   f05 = " << f05 << "\n"; } catch (exception &e) { std::cout << "success: f05\n"; }
	try { uint16_t f06 = (uint16_t) v; std::cout << "error:   f06 = " << f06 << "\n"; } catch (exception &e) { std::cout << "success: f06\n"; }
	try { int16_t  f07 = (int16_t)  v; std::cout << "error:   f07 = " << f07 << "\n"; } catch (exception &e) { std::cout << "success: f07\n"; }
	try { uint32_t f08 = (uint32_t) v; std::cout << "error:   f08 = " << f08 << "\n"; } catch (exception &e) { std::cout << "success: f08\n"; }
	try { int32_t  f09 = (int32_t)  v; std::cout << "error:   f09 = " << f09 << "\n"; } catch (exception &e) { std::cout << "success: f09\n"; }
	try { uint64_t f10 = (uint64_t) v; std::cout << "error:   f10 = " << f10 << "\n"; } catch (exception &e) { std::cout << "success: f10\n"; }
	try { int64_t  f11 = (int64_t)  v; std::cout << "error:   f11 = " << f11 << "\n"; } catch (exception &e) { std::cout << "success: f11\n"; }

	std::cout << std::endl;
}

/**
 * convert07 - int8_t
 */
void convert07 (void)
{
	Variant v ((int8_t) -42);

	std::cout << v << '\n';

	try { string   g01 = (string)   v; std::cout << "success: g01 = " << g01 << "\n"; } catch (exception &e) { std::cout << "error:   g01\n"; }
	try { double   g02 = (double)   v; std::cout << "error:   g02 = " << g02 << "\n"; } catch (exception &e) { std::cout << "success: g02\n"; }
	try { bool     g03 = (bool)     v; std::cout << "error:   g03 = " << g03 << "\n"; } catch (exception &e) { std::cout << "success: g03\n"; }
	try { uint8_t  g04 = (uint8_t)  v; std::cout << "error:   g04 = " << g04 << "\n"; } catch (exception &e) { std::cout << "success: g04\n"; }
	try { int8_t   g05 = (int8_t)   v; std::cout << "success: g05 = " << g05 << "\n"; } catch (exception &e) { std::cout << "error:   g05\n"; }
	try { uint16_t g06 = (uint16_t) v; std::cout << "error:   g06 = " << g06 << "\n"; } catch (exception &e) { std::cout << "success: g06\n"; }
	try { int16_t  g07 = (int16_t)  v; std::cout << "error:   g07 = " << g07 << "\n"; } catch (exception &e) { std::cout << "success: g07\n"; }
	try { uint32_t g08 = (uint32_t) v; std::cout << "error:   g08 = " << g08 << "\n"; } catch (exception &e) { std::cout << "success: g08\n"; }
	try { int32_t  g09 = (int32_t)  v; std::cout << "error:   g09 = " << g09 << "\n"; } catch (exception &e) { std::cout << "success: g09\n"; }
	try { uint64_t g10 = (uint64_t) v; std::cout << "error:   g10 = " << g10 << "\n"; } catch (exception &e) { std::cout << "success: g10\n"; }
	try { int64_t  g11 = (int64_t)  v; std::cout << "error:   g11 = " << g11 << "\n"; } catch (exception &e) { std::cout << "success: g11\n"; }

	std::cout << std::endl;
}

/**
 * convert08 - uint16_t
 */
void convert08 (void)
{
	Variant v ((uint16_t) 1042);

	std::cout << v << '\n';

	try { string   h01 = (string)   v; std::cout << "success: h01 = " << h01 << "\n"; } catch (exception &e) { std::cout << "error:   h01\n"; }
	try { double   h02 = (double)   v; std::cout << "error:   h02 = " << h02 << "\n"; } catch (exception &e) { std::cout << "success: h02\n"; }
	try { bool     h03 = (bool)     v; std::cout << "error:   h03 = " << h03 << "\n"; } catch (exception &e) { std::cout << "success: h03\n"; }
	try { uint8_t  h04 = (uint8_t)  v; std::cout << "error:   h04 = " << h04 << "\n"; } catch (exception &e) { std::cout << "success: h04\n"; }
	try { int8_t   h05 = (int8_t)   v; std::cout << "error:   h05 = " << h05 << "\n"; } catch (exception &e) { std::cout << "success: h05\n"; }
	try { uint16_t h06 = (uint16_t) v; std::cout << "success: h06 = " << h06 << "\n"; } catch (exception &e) { std::cout << "error:   h06\n"; }
	try { int16_t  h07 = (int16_t)  v; std::cout << "error:   h07 = " << h07 << "\n"; } catch (exception &e) { std::cout << "success: h07\n"; }
	try { uint32_t h08 = (uint32_t) v; std::cout << "error:   h08 = " << h08 << "\n"; } catch (exception &e) { std::cout << "success: h08\n"; }
	try { int32_t  h09 = (int32_t)  v; std::cout << "error:   h09 = " << h09 << "\n"; } catch (exception &e) { std::cout << "success: h09\n"; }
	try { uint64_t h10 = (uint64_t) v; std::cout << "error:   h10 = " << h10 << "\n"; } catch (exception &e) { std::cout << "success: h10\n"; }
	try { int64_t  h11 = (int64_t)  v; std::cout << "error:   h11 = " << h11 << "\n"; } catch (exception &e) { std::cout << "success: h11\n"; }

	std::cout << std::endl;
}

/**
 * convert09 - int16_t
 */
void convert09 (void)
{
	Variant v ((int16_t) -1042);

	std::cout << v << '\n';

	try { string   i01 = (string)   v; std::cout << "success: i01 = " << i01 << "\n"; } catch (exception &e) { std::cout << "error:   i01\n"; }
	try { double   i02 = (double)   v; std::cout << "error:   i02 = " << i02 << "\n"; } catch (exception &e) { std::cout << "success: i02\n"; }
	try { bool     i03 = (bool)     v; std::cout << "error:   i03 = " << i03 << "\n"; } catch (exception &e) { std::cout << "success: i03\n"; }
	try { uint8_t  i04 = (uint8_t)  v; std::cout << "error:   i04 = " << i04 << "\n"; } catch (exception &e) { std::cout << "success: i04\n"; }
	try { int8_t   i05 = (int8_t)   v; std::cout << "error:   i05 = " << i05 << "\n"; } catch (exception &e) { std::cout << "success: i05\n"; }
	try { uint16_t i06 = (uint16_t) v; std::cout << "error:   i06 = " << i06 << "\n"; } catch (exception &e) { std::cout << "success: i06\n"; }
	try { int16_t  i07 = (int16_t)  v; std::cout << "success: i07 = " << i07 << "\n"; } catch (exception &e) { std::cout << "error:   i07\n"; }
	try { uint32_t i08 = (uint32_t) v; std::cout << "error:   i08 = " << i08 << "\n"; } catch (exception &e) { std::cout << "success: i08\n"; }
	try { int32_t  i09 = (int32_t)  v; std::cout << "error:   i09 = " << i09 << "\n"; } catch (exception &e) { std::cout << "success: i09\n"; }
	try { uint64_t i10 = (uint64_t) v; std::cout << "error:   i10 = " << i10 << "\n"; } catch (exception &e) { std::cout << "success: i10\n"; }
	try { int64_t  i11 = (int64_t)  v; std::cout << "error:   i11 = " << i11 << "\n"; } catch (exception &e) { std::cout << "success: i11\n"; }

	std::cout << std::endl;
}

/**
 * convert10 - uint32_t
 */
void convert10 (void)
{
	Variant v ((uint32_t) 1000042);

	std::cout << v << '\n';

	try { string   j01 = (string)   v; std::cout << "success: j01 = " << j01 << "\n"; } catch (exception &e) { std::cout << "error:   j01\n"; }
	try { double   j02 = (double)   v; std::cout << "error:   j02 = " << j02 << "\n"; } catch (exception &e) { std::cout << "success: j02\n"; }
	try { bool     j03 = (bool)     v; std::cout << "error:   j03 = " << j03 << "\n"; } catch (exception &e) { std::cout << "success: j03\n"; }
	try { uint8_t  j04 = (uint8_t)  v; std::cout << "error:   j04 = " << j04 << "\n"; } catch (exception &e) { std::cout << "success: j04\n"; }
	try { int8_t   j05 = (int8_t)   v; std::cout << "error:   j05 = " << j05 << "\n"; } catch (exception &e) { std::cout << "success: j05\n"; }
	try { uint16_t j06 = (uint16_t) v; std::cout << "error:   j06 = " << j06 << "\n"; } catch (exception &e) { std::cout << "success: j06\n"; }
	try { int16_t  j07 = (int16_t)  v; std::cout << "error:   j07 = " << j07 << "\n"; } catch (exception &e) { std::cout << "success: j07\n"; }
	try { uint32_t j08 = (uint32_t) v; std::cout << "success: j08 = " << j08 << "\n"; } catch (exception &e) { std::cout << "error:   j08\n"; }
	try { int32_t  j09 = (int32_t)  v; std::cout << "error:   j09 = " << j09 << "\n"; } catch (exception &e) { std::cout << "success: j09\n"; }
	try { uint64_t j10 = (uint64_t) v; std::cout << "error:   j10 = " << j10 << "\n"; } catch (exception &e) { std::cout << "success: j10\n"; }
	try { int64_t  j11 = (int64_t)  v; std::cout << "error:   j11 = " << j11 << "\n"; } catch (exception &e) { std::cout << "success: j11\n"; }

	std::cout << std::endl;
}

/**
 * convert11 - int32_t
 */
void convert11 (void)
{
	Variant v ((int32_t) -1000042);

	std::cout << v << '\n';

	try { string   k01 = (string)   v; std::cout << "success: k01 = " << k01 << "\n"; } catch (exception &e) { std::cout << "error:   k01\n"; }
	try { double   k02 = (double)   v; std::cout << "error:   k02 = " << k02 << "\n"; } catch (exception &e) { std::cout << "success: k02\n"; }
	try { bool     k03 = (bool)     v; std::cout << "error:   k03 = " << k03 << "\n"; } catch (exception &e) { std::cout << "success: k03\n"; }
	try { uint8_t  k04 = (uint8_t)  v; std::cout << "error:   k04 = " << k04 << "\n"; } catch (exception &e) { std::cout << "success: k04\n"; }
	try { int8_t   k05 = (int8_t)   v; std::cout << "error:   k05 = " << k05 << "\n"; } catch (exception &e) { std::cout << "success: k05\n"; }
	try { uint16_t k06 = (uint16_t) v; std::cout << "error:   k06 = " << k06 << "\n"; } catch (exception &e) { std::cout << "success: k06\n"; }
	try { int16_t  k07 = (int16_t)  v; std::cout << "error:   k07 = " << k07 << "\n"; } catch (exception &e) { std::cout << "success: k07\n"; }
	try { uint32_t k08 = (uint32_t) v; std::cout << "error:   k08 = " << k08 << "\n"; } catch (exception &e) { std::cout << "success: k08\n"; }
	try { int32_t  k09 = (int32_t)  v; std::cout << "success: k09 = " << k09 << "\n"; } catch (exception &e) { std::cout << "error:   k09\n"; }
	try { uint64_t k10 = (uint64_t) v; std::cout << "error:   k10 = " << k10 << "\n"; } catch (exception &e) { std::cout << "success: k10\n"; }
	try { int64_t  k11 = (int64_t)  v; std::cout << "error:   k11 = " << k11 << "\n"; } catch (exception &e) { std::cout << "success: k11\n"; }

	std::cout << std::endl;
}

/**
 * convert12 - uint64_t
 */
void convert12 (void)
{
	Variant v ((uint64_t) 1000000000042);

	std::cout << v << '\n';

	try { string   l01 = (string)   v; std::cout << "success: l01 = " << l01 << "\n"; } catch (exception &e) { std::cout << "error:   l01\n"; }
	try { double   l02 = (double)   v; std::cout << "error:   l02 = " << l02 << "\n"; } catch (exception &e) { std::cout << "success: l02\n"; }
	try { bool     l03 = (bool)     v; std::cout << "error:   l03 = " << l03 << "\n"; } catch (exception &e) { std::cout << "success: l03\n"; }
	try { uint8_t  l04 = (uint8_t)  v; std::cout << "error:   l04 = " << l04 << "\n"; } catch (exception &e) { std::cout << "success: l04\n"; }
	try { int8_t   l05 = (int8_t)   v; std::cout << "error:   l05 = " << l05 << "\n"; } catch (exception &e) { std::cout << "success: l05\n"; }
	try { uint16_t l06 = (uint16_t) v; std::cout << "error:   l06 = " << l06 << "\n"; } catch (exception &e) { std::cout << "success: l06\n"; }
	try { int16_t  l07 = (int16_t)  v; std::cout << "error:   l07 = " << l07 << "\n"; } catch (exception &e) { std::cout << "success: l07\n"; }
	try { uint32_t l08 = (uint32_t) v; std::cout << "error:   l08 = " << l08 << "\n"; } catch (exception &e) { std::cout << "success: l08\n"; }
	try { int32_t  l09 = (int32_t)  v; std::cout << "error:   l09 = " << l09 << "\n"; } catch (exception &e) { std::cout << "success: l09\n"; }
	try { uint64_t l10 = (uint64_t) v; std::cout << "success: l10 = " << l10 << "\n"; } catch (exception &e) { std::cout << "error:   l10\n"; }
	try { int64_t  l11 = (int64_t)  v; std::cout << "error:   l11 = " << l11 << "\n"; } catch (exception &e) { std::cout << "success: l11\n"; }

	std::cout << std::endl;
}

/**
 * convert13 - int64_t
 */
void convert13 (void)
{
	Variant v ((int64_t) -1000000000042);

	std::cout << v << '\n';

	try { string   m01 = (string)   v; std::cout << "success: m01 = " << m01 << "\n"; } catch (exception &e) { std::cout << "error:   m01\n"; }
	try { double   m02 = (double)   v; std::cout << "error:   m02 = " << m02 << "\n"; } catch (exception &e) { std::cout << "success: m02\n"; }
	try { bool     m03 = (bool)     v; std::cout << "error:   m03 = " << m03 << "\n"; } catch (exception &e) { std::cout << "success: m03\n"; }
	try { uint8_t  m04 = (uint8_t)  v; std::cout << "error:   m04 = " << m04 << "\n"; } catch (exception &e) { std::cout << "success: m04\n"; }
	try { int8_t   m05 = (int8_t)   v; std::cout << "error:   m05 = " << m05 << "\n"; } catch (exception &e) { std::cout << "success: m05\n"; }
	try { uint16_t m06 = (uint16_t) v; std::cout << "error:   m06 = " << m06 << "\n"; } catch (exception &e) { std::cout << "success: m06\n"; }
	try { int16_t  m07 = (int16_t)  v; std::cout << "error:   m07 = " << m07 << "\n"; } catch (exception &e) { std::cout << "success: m07\n"; }
	try { uint32_t m08 = (uint32_t) v; std::cout << "error:   m08 = " << m08 << "\n"; } catch (exception &e) { std::cout << "success: m08\n"; }
	try { int32_t  m09 = (int32_t)  v; std::cout << "error:   m09 = " << m09 << "\n"; } catch (exception &e) { std::cout << "success: m09\n"; }
	try { uint64_t m10 = (uint64_t) v; std::cout << "error:   m10 = " << m10 << "\n"; } catch (exception &e) { std::cout << "success: m10\n"; }
	try { int64_t  m11 = (int64_t)  v; std::cout << "success: m11 = " << m11 << "\n"; } catch (exception &e) { std::cout << "error:   m11\n"; }

	std::cout << std::endl;
}


/**
 * main
 */
int main (int argc, char *argv[])
{
	//test1();

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


