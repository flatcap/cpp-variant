/* Copyright (c) 2013 Richard Russon (FlatCap)
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
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

#ifndef _VARIANT_H_
#define _VARIANT_H_

#include <string>
#include <iostream>
#include <cstdint>

/**
 * class Variant
 */
class Variant
{
public:
	Variant (void);				// default constructor
	virtual ~Variant();

	Variant (const std::string &value);	// typed constructors
	Variant (const char *value);
	Variant (double   value);
	Variant (bool     value);
	Variant (uint8_t  value);
	Variant ( int8_t  value);
	Variant (uint16_t value);
	Variant ( int16_t value);
	Variant (uint32_t value);
	Variant ( int32_t value);
	Variant (uint64_t value);
	Variant ( int64_t value);

	Variant (const Variant &v);		// copy constructor
	Variant (Variant &&v);			// move constructor

	Variant & operator= (const Variant &v);	// copy assignment
	Variant & operator= (Variant &&v);	// move assignment

	operator std::string();			// cast Variant to type
	operator double();
	operator bool();
	operator uint8_t();
	operator  int8_t();
	operator uint16_t();
	operator  int16_t();
	operator uint32_t();
	operator  int32_t();
	operator uint64_t();
	operator  int64_t();

	enum class Tag {
		t_unset,	// Empty
		t_string,	// Text
		t_double,	// Floating point
		t_bool,		//  1 bit
		t_u8,		//  8 bits unsigned integer
		t_s8,		//         signed
		t_u16,		// 16 bits unsigned integer
		t_s16,		//         signed
		t_u32,		// 32 bits unsigned integer
		t_s32,		//         signed
		t_u64,		// 64 bits unsigned integer
		t_s64		//         signed
	} type;

protected:
	friend void swap (Variant &first, Variant &second);
	friend std::ostream & operator<< (std::ostream &os, const Variant *v);
	friend std::ostream & operator<< (std::ostream &os, const Variant &v);

	void clear (void);

	union {
		std::string	u_string;
		double		u_double;
		bool		u_bool;
		uint8_t		u_u8;
		 int8_t		u_s8;
		uint16_t	u_u16;
		 int16_t	u_s16;
		uint32_t	u_u32;
		 int32_t	u_s32;
		uint64_t	u_u64;
		 int64_t	u_s64;
	};
};


#endif // _VARIANT_H_

