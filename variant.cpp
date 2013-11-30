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
#include <stdexcept>

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
 * ~Variant
 */
Variant::~Variant()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	clear();
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
 * Variant (char *)
 */
Variant::Variant (const char *value) :
	Variant (std::string (value))
{
}

/**
 * Variant (double)
 */
Variant::Variant (double value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type   = Tag::t_double;
	u_double = value;
}

/**
 * Variant (bool)
 */
Variant::Variant (bool value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type   = Tag::t_bool;
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
 * Variant (copy)
 */
Variant::Variant (const Variant &v)
{
	type = v.type;
	//std::cout << "copy constructor " << this << "\n";
	std::cout << "copy constructor\n";
	switch (type) {
		case Variant::Tag::t_unset:                        break;
		case Variant::Tag::t_string: Variant (v.u_string); break;
		case Variant::Tag::t_double: Variant (v.u_double); break;
		case Variant::Tag::t_bool:   Variant (v.u_bool);   break;
		case Variant::Tag::t_ubyte:  Variant (v.u_ubyte);  break;
		case Variant::Tag::t_sbyte:  Variant (v.u_sbyte);  break;
		case Variant::Tag::t_ushort: Variant (v.u_ushort); break;
		case Variant::Tag::t_sshort: Variant (v.u_sshort); break;
		case Variant::Tag::t_uint:   Variant (v.u_uint);   break;
		case Variant::Tag::t_sint:   Variant (v.u_sint);   break;
		case Variant::Tag::t_ulong:  Variant (v.u_ulong);  break;
		case Variant::Tag::t_slong:  Variant (v.u_slong);  break;
	}
}

/**
 * Variant (move)
 */
Variant::Variant (Variant &&v)
{
	swap(*this, v);
	std::cout << "move constructor\n";
}


/**
 * operator= (copy)
 */
Variant &
Variant::operator= (const Variant &v)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	clear();
	switch (type) {
		case Variant::Tag::t_unset:                        break;
		case Variant::Tag::t_string: Variant (v.u_string); break;
		case Variant::Tag::t_double: Variant (v.u_double); break;
		case Variant::Tag::t_bool:   Variant (v.u_bool);   break;
		case Variant::Tag::t_ubyte:  Variant (v.u_ubyte);  break;
		case Variant::Tag::t_sbyte:  Variant (v.u_sbyte);  break;
		case Variant::Tag::t_ushort: Variant (v.u_ushort); break;
		case Variant::Tag::t_sshort: Variant (v.u_sshort); break;
		case Variant::Tag::t_uint:   Variant (v.u_uint);   break;
		case Variant::Tag::t_sint:   Variant (v.u_sint);   break;
		case Variant::Tag::t_ulong:  Variant (v.u_ulong);  break;
		case Variant::Tag::t_slong:  Variant (v.u_slong);  break;
	}

	return *this;
}

/**
 * operator= (move)
 */
Variant &
Variant::operator= (Variant &&v)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	clear();
	switch (type) {
		case Variant::Tag::t_unset:                        break;
		case Variant::Tag::t_string: Variant (v.u_string); break;
		case Variant::Tag::t_double: Variant (v.u_double); break;
		case Variant::Tag::t_bool:   Variant (v.u_bool);   break;
		case Variant::Tag::t_ubyte:  Variant (v.u_ubyte);  break;
		case Variant::Tag::t_sbyte:  Variant (v.u_sbyte);  break;
		case Variant::Tag::t_ushort: Variant (v.u_ushort); break;
		case Variant::Tag::t_sshort: Variant (v.u_sshort); break;
		case Variant::Tag::t_uint:   Variant (v.u_uint);   break;
		case Variant::Tag::t_sint:   Variant (v.u_sint);   break;
		case Variant::Tag::t_ulong:  Variant (v.u_ulong);  break;
		case Variant::Tag::t_slong:  Variant (v.u_slong);  break;
	}

	return *this;
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
		case Variant::Tag::t_double: os << "double," << v.u_double; break;
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


/**
 * cast (std::string)
 */
Variant::operator std::string()
{
	switch (type) {
		case Variant::Tag::t_string: return u_string;			// Match

		case Variant::Tag::t_double: return std::to_string (u_double);	// Promotions
		case Variant::Tag::t_bool:   return std::to_string (u_bool);
		case Variant::Tag::t_ubyte:  return std::to_string (u_ubyte);
		case Variant::Tag::t_sbyte:  return std::to_string (u_sbyte);
		case Variant::Tag::t_ushort: return std::to_string (u_ushort);
		case Variant::Tag::t_sshort: return std::to_string (u_sshort);
		case Variant::Tag::t_uint:   return std::to_string (u_uint);
		case Variant::Tag::t_sint:   return std::to_string (u_sint);
		case Variant::Tag::t_ulong:  return std::to_string (u_ulong);
		case Variant::Tag::t_slong:  return std::to_string (u_slong);

		case Variant::Tag::t_unset:					// Failure
		default:
			throw std::runtime_error ("variant not set");
	}
}

/**
 * cast (double)
 */
Variant::operator double()
{
	if (type == Variant::Tag::t_double)
		return u_double;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (bool)
 */
Variant::operator bool()
{
	if (type == Variant::Tag::t_bool)
		return u_bool;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (unsigned char)
 */
Variant::operator unsigned char()
{
	if (type == Variant::Tag::t_ubyte)
		return u_ubyte;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (signed char)
 */
Variant::operator signed char()
{
	if (type == Variant::Tag::t_sbyte)
		return u_sbyte;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (unsigned short)
 */
Variant::operator unsigned short()
{
	if (type == Variant::Tag::t_ushort)
		return u_ushort;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (signed short)
 */
Variant::operator signed short()
{
	if (type == Variant::Tag::t_sshort)
		return u_sshort;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (unsigned int)
 */
Variant::operator unsigned int()
{
	if (type == Variant::Tag::t_uint)
		return u_uint;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (signed int)
 */
Variant::operator signed int()
{
	if (type == Variant::Tag::t_sint)
		return u_sint;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (unsigned long)
 */
Variant::operator unsigned long()
{
	if (type == Variant::Tag::t_ulong)
		return u_ulong;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (signed long)
 */
Variant::operator signed long()
{
	if (type == Variant::Tag::t_slong)
		return u_slong;
	else
		throw std::runtime_error ("variant bad cast");
}


