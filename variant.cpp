/* Copyright (c) 2013 Richard Russon (FlatCap)
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Library General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "variant.h"

/**
 * Variant (default)
 */
Variant::Variant (void)
{
	type = Tag::t_unset;
}

/**
 * Variant (string)
 */
Variant::Variant (const std::string &value)
{
	type = Tag::t_string;
	new (&u_string) std::string(value);	// placement new
}

/**
 * Variant (bool)
 */
Variant::Variant (bool value)
{
	type   = Tag::t_unset;
	u_bool = value;
}

/**
 * Variant (unsigned byte)
 */
Variant::Variant (unsigned char value)
{
	type   = Tag::t_ubyte;
	u_ubyte = value;
}

/**
 * Variant (signed byte)
 */
Variant::Variant (signed char value)
{
	type   = Tag::t_sbyte;
	u_sbyte = value;
}

/**
 * Variant (unsigned short)
 */
Variant::Variant (unsigned short value)
{
	type    = Tag::t_ushort;
	u_ushort = value;
}

/**
 * Variant (signed short)
 */
Variant::Variant (signed short value)
{
	type    = Tag::t_sshort;
	u_sshort = value;
}

/**
 * Variant (unsigned int)
 */
Variant::Variant (unsigned int value)
{
	type  = Tag::t_uint;
	u_uint = value;
}

/**
 * Variant (signed int)
 */
Variant::Variant (signed int value)
{
	type  = Tag::t_sint;
	u_sint = value;
}

/**
 * Variant (unsigned long)
 */
Variant::Variant (unsigned long value)
{
	type   = Tag::t_ulong;
	u_ulong = value;
}

/**
 * Variant (signed long)
 */
Variant::Variant (signed long value)
{
	type   = Tag::t_slong;
	u_slong = value;
}

/**
 * ~Variant
 */
Variant::~Variant()
{
	if (type == Tag::t_string) {
		u_string.std::string::~string();
	}
}


#if 0
/**
 * operator=
 */
Variant & Variant::operator= (const Variant& w)
{
	if ((type == Tag::text) && (w.type == Tag::text)) {
		s = w.s;
		return *this;
	}

	if (type == Tag::text) {
		s.~string();
	}

	switch (w.type) {
		case Tag::point: p = w.p; break;	// normal copy
		case Tag::number: i = w.i; break;
		case Tag::text: new(&s)(w.s); break;	// placement new
	}
	type = w.type;
	return *this;
}

#endif
