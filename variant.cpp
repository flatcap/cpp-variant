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
#include <cstdint>

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
	type     = Tag::t_double;
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
 * Variant (uint8_t)
 */
Variant::Variant (uint8_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type = Tag::t_u8;
	u_u8 = value;
}

/**
 * Variant (int8_t)
 */
Variant::Variant (int8_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type = Tag::t_s8;
	u_s8 = value;
}

/**
 * Variant (uint16_t)
 */
Variant::Variant (uint16_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_u16;
	u_u16 = value;
}

/**
 * Variant (int16_t)
 */
Variant::Variant (int16_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_s16;
	u_s16 = value;
}

/**
 * Variant (uint32_t)
 */
Variant::Variant (uint32_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_u32;
	u_u32 = value;
}

/**
 * Variant (int32_t)
 */
Variant::Variant (int32_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_s32;
	u_s32 = value;
}

/**
 * Variant (uint64_t)
 */
Variant::Variant (uint64_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_u64;
	u_u64 = value;
}

/**
 * Variant (int64_t)
 */
Variant::Variant (int64_t value)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	type  = Tag::t_s64;
	u_s64 = value;
}


/**
 * Variant (copy)
 */
Variant::Variant (const Variant &v)
{
	type = v.type;
	std::cout << "copy constructor\n";
	switch (type) {
		case Variant::Tag::t_unset:                        break;
		case Variant::Tag::t_string: Variant (v.u_string); break;
		case Variant::Tag::t_double: Variant (v.u_double); break;
		case Variant::Tag::t_bool:   Variant (v.u_bool);   break;
		case Variant::Tag::t_u8:     Variant (v.u_u8);     break;
		case Variant::Tag::t_s8:     Variant (v.u_s8);     break;
		case Variant::Tag::t_u16:    Variant (v.u_u16);    break;
		case Variant::Tag::t_s16:    Variant (v.u_s16);    break;
		case Variant::Tag::t_u32:    Variant (v.u_u32);    break;
		case Variant::Tag::t_s32:    Variant (v.u_s32);    break;
		case Variant::Tag::t_u64:    Variant (v.u_u64);    break;
		case Variant::Tag::t_s64:    Variant (v.u_s64);    break;
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
		case Variant::Tag::t_u8:     Variant (v.u_u8);     break;
		case Variant::Tag::t_s8:     Variant (v.u_s8);     break;
		case Variant::Tag::t_u16:    Variant (v.u_u16);    break;
		case Variant::Tag::t_s16:    Variant (v.u_s16);    break;
		case Variant::Tag::t_u32:    Variant (v.u_u32);    break;
		case Variant::Tag::t_s32:    Variant (v.u_s32);    break;
		case Variant::Tag::t_u64:    Variant (v.u_u64);    break;
		case Variant::Tag::t_s64:    Variant (v.u_s64);    break;
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
		case Variant::Tag::t_u8:     Variant (v.u_u8);     break;
		case Variant::Tag::t_s8:     Variant (v.u_s8);     break;
		case Variant::Tag::t_u16:    Variant (v.u_u16);    break;
		case Variant::Tag::t_s16:    Variant (v.u_s16);    break;
		case Variant::Tag::t_u32:    Variant (v.u_u32);    break;
		case Variant::Tag::t_s32:    Variant (v.u_s32);    break;
		case Variant::Tag::t_u64:    Variant (v.u_u64);    break;
		case Variant::Tag::t_s64:    Variant (v.u_s64);    break;
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
		case Variant::Tag::t_unset:  os << "unset";                       break;
		case Variant::Tag::t_string: os << "string," <<       v.u_string; break;
		case Variant::Tag::t_double: os << "double," <<       v.u_double; break;
		case Variant::Tag::t_bool:   os << "bool,"   <<       v.u_bool;   break;
		case Variant::Tag::t_u8:     os << "uint8,"  << (int) v.u_u8;     break;
		case Variant::Tag::t_s8:     os << "int8,"   << (int) v.u_s8;     break;
		case Variant::Tag::t_u16:    os << "uint16," <<       v.u_u16;    break;
		case Variant::Tag::t_s16:    os << "int16,"  <<       v.u_s16;    break;
		case Variant::Tag::t_u32:    os << "uint32," <<       v.u_u32;    break;
		case Variant::Tag::t_s32:    os << "int32,"  <<       v.u_s32;    break;
		case Variant::Tag::t_u64:    os << "uint64," <<       v.u_u64;    break;
		case Variant::Tag::t_s64:    os << "int64,"  <<       v.u_s64;    break;
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

		case Variant::Tag::t_double: return std::to_string (u_double);	// Promotion
		case Variant::Tag::t_bool:   return std::to_string (u_bool);
		case Variant::Tag::t_u8:     return std::to_string (u_u8);
		case Variant::Tag::t_s8:     return std::to_string (u_s8);
		case Variant::Tag::t_u16:    return std::to_string (u_u16);
		case Variant::Tag::t_s16:    return std::to_string (u_s16);
		case Variant::Tag::t_u32:    return std::to_string (u_u32);
		case Variant::Tag::t_s32:    return std::to_string (u_s32);
		case Variant::Tag::t_u64:    return std::to_string (u_u64);
		case Variant::Tag::t_s64:    return std::to_string (u_s64);

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
 * cast (uint8_t)
 */
Variant::operator uint8_t()
{
	if (type == Variant::Tag::t_u8)
		return u_u8;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (int8_t)
 */
Variant::operator int8_t()
{
	if (type == Variant::Tag::t_s8)
		return u_s8;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (uint16_t)
 */
Variant::operator uint16_t()
{
	if (type == Variant::Tag::t_u16)
		return u_u16;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (int16_t)
 */
Variant::operator int16_t()
{
	if (type == Variant::Tag::t_s16)
		return u_s16;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (uint32_t)
 */
Variant::operator uint32_t()
{
	if (type == Variant::Tag::t_u32)
		return u_u32;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (int32_t)
 */
Variant::operator int32_t()
{
	if (type == Variant::Tag::t_s32)
		return u_s32;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (uint64_t)
 */
Variant::operator uint64_t()
{
	if (type == Variant::Tag::t_u64)
		return u_u64;
	else
		throw std::runtime_error ("variant bad cast");
}

/**
 * cast (int64_t)
 */
Variant::operator int64_t()
{
	if (type == Variant::Tag::t_s64)
		return u_s64;
	else
		throw std::runtime_error ("variant bad cast");
}


