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

#include <iostream>

#include "variant.h"

/**
 * Variant (default)
 */
Variant::Variant (void)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type = Tag::t_unset;
}

/**
 * Variant (string)
 */
Variant::Variant (const std::string &value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type = Tag::t_string;
	new (&u_string) std::string(value);	// placement new
}

/**
 * Variant (bool)
 */
Variant::Variant (bool value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type   = Tag::t_unset;
	u_bool = value;
}

/**
 * Variant (unsigned byte)
 */
Variant::Variant (unsigned char value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type   = Tag::t_ubyte;
	u_ubyte = value;
}

/**
 * Variant (signed byte)
 */
Variant::Variant (signed char value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type   = Tag::t_sbyte;
	u_sbyte = value;
}

/**
 * Variant (unsigned short)
 */
Variant::Variant (unsigned short value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type    = Tag::t_ushort;
	u_ushort = value;
}

/**
 * Variant (signed short)
 */
Variant::Variant (signed short value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type    = Tag::t_sshort;
	u_sshort = value;
}

/**
 * Variant (unsigned int)
 */
Variant::Variant (unsigned int value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_uint;
	u_uint = value;
}

/**
 * Variant (signed int)
 */
Variant::Variant (signed int value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_sint;
	u_sint = value;
}

/**
 * Variant (unsigned long)
 */
Variant::Variant (unsigned long value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type   = Tag::t_ulong;
	u_ulong = value;
}

/**
 * Variant (signed long)
 */
Variant::Variant (signed long value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type   = Tag::t_slong;
	u_slong = value;
}

/**
 * ~Variant
 */
Variant::~Variant()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	clear();
}


/**
 * Variant (copy)
 */
Variant::Variant (const Variant &v)
{
	type = v.type;
	//std::cout << "copy constructor " << this << "\n";
	std::cout << "copy constructor\n";
	switch (type) {
		case Variant::Tag::t_unset:                         break;
		case Variant::Tag::t_string: u_string = v.u_string; break;
		case Variant::Tag::t_bool:   u_bool   = v.u_bool;   break;
		case Variant::Tag::t_ubyte:  u_ubyte  = v.u_ubyte;  break;
		case Variant::Tag::t_sbyte:  u_sbyte  = v.u_sbyte;  break;
		case Variant::Tag::t_ushort: u_ushort = v.u_ushort; break;
		case Variant::Tag::t_sshort: u_sshort = v.u_sshort; break;
		case Variant::Tag::t_uint:   u_uint   = v.u_uint;   break;
		case Variant::Tag::t_sint:   u_sint   = v.u_sint;   break;
		case Variant::Tag::t_ulong:  u_ulong  = v.u_ulong;  break;
		case Variant::Tag::t_slong:  u_slong  = v.u_slong;  break;
	}
}

/**
 * Variant (move)
 */
Variant::Variant (const Variant &&v)
{
	//std::cout << "move constructor " << this << "\n";
	std::cout << "move constructor\n";
	clear();
	switch (type) {
		case Variant::Tag::t_unset:                         break;
		case Variant::Tag::t_string: u_string = v.u_string; break;
		case Variant::Tag::t_bool:   u_bool   = v.u_bool;   break;
		case Variant::Tag::t_ubyte:  u_ubyte  = v.u_ubyte;  break;
		case Variant::Tag::t_sbyte:  u_sbyte  = v.u_sbyte;  break;
		case Variant::Tag::t_ushort: u_ushort = v.u_ushort; break;
		case Variant::Tag::t_sshort: u_sshort = v.u_sshort; break;
		case Variant::Tag::t_uint:   u_uint   = v.u_uint;   break;
		case Variant::Tag::t_sint:   u_sint   = v.u_sint;   break;
		case Variant::Tag::t_ulong:  u_ulong  = v.u_ulong;  break;
		case Variant::Tag::t_slong:  u_slong  = v.u_slong;  break;
	}
}


/**
 * swap
 */
void
swap (Variant &first, Variant &second)
{
	std::cout << "swap " << first << " and " << second << "\n";
	std::swap (first.type, second.type);
}

/**
 * operator<< (Variant*)
 */
std::ostream &
operator<< (std::ostream &os, const Variant *v)
{
	if (v)
		return operator<< (os, *v);
	else
		return os;
}

/**
 * operator<< (Variant&)
 */
std::ostream &
operator<< (std::ostream &os, const Variant &v)
{
	os << "Variant: [";
	switch (v.type) {
		case Variant::Tag::t_unset:  os << "unset";                 break;
		case Variant::Tag::t_string: os << "string," << v.u_string; break;
		case Variant::Tag::t_bool:   os << "bool,"   << v.u_bool;   break;
		case Variant::Tag::t_ubyte:  os << "ubyte,"  << v.u_ubyte;  break;
		case Variant::Tag::t_sbyte:  os << "sbyte,"  << v.u_sbyte;  break;
		case Variant::Tag::t_ushort: os << "ushort," << v.u_ushort; break;
		case Variant::Tag::t_sshort: os << "sshort," << v.u_sshort; break;
		case Variant::Tag::t_uint:   os << "uint,"   << v.u_uint;   break;
		case Variant::Tag::t_sint:   os << "sint,"   << v.u_sint;   break;
		case Variant::Tag::t_ulong:  os << "ulong,"  << v.u_ulong;  break;
		case Variant::Tag::t_slong:  os << "slong,"  << v.u_slong;  break;
	}
	os << "]";

	return os;
}


/**
 * operator=
 */
Variant &
Variant::operator= (const Variant &v)
{
	//std::cout << "copy assignment " << this << "\n";
	std::cout << "copy assignment\n";
	clear();
	switch (type) {
		case Variant::Tag::t_unset:                         break;
		case Variant::Tag::t_string: u_string = v.u_string; break;
		case Variant::Tag::t_bool:   u_bool   = v.u_bool;   break;
		case Variant::Tag::t_ubyte:  u_ubyte  = v.u_ubyte;  break;
		case Variant::Tag::t_sbyte:  u_sbyte  = v.u_sbyte;  break;
		case Variant::Tag::t_ushort: u_ushort = v.u_ushort; break;
		case Variant::Tag::t_sshort: u_sshort = v.u_sshort; break;
		case Variant::Tag::t_uint:   u_uint   = v.u_uint;   break;
		case Variant::Tag::t_sint:   u_sint   = v.u_sint;   break;
		case Variant::Tag::t_ulong:  u_ulong  = v.u_ulong;  break;
		case Variant::Tag::t_slong:  u_slong  = v.u_slong;  break;
	}
#if 0
	if ((type == Tag::text) && (v.type == Tag::text)) {
		s = v.s;
		return *this;
	}

	if (type == Tag::text) {
		s.~string();
	}

	switch (v.type) {
		case Tag::point: p = v.p; break;	// normal copy
		case Tag::number: i = v.i; break;
		case Tag::text: new(&s)(v.s); break;	// placement new
	}
	type = v.type;
#endif
	return *this;
}

/**
 * clear
 */
void
Variant::clear (void)
{
	if (type == Tag::t_string) {
		u_string.std::string::~string();
	}
	type = Tag::t_unset;
}


