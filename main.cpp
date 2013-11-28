/* Copyright (c 2013 Richard Russon (FlatCap
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

#include "variant.h"

/**
 * main
 */
int main (int, char *[])
{
	std::string     str    = "a very long message that exceeds thirty-two characters";
	bool		b      = ~0;
	unsigned char	ubyte  = ~0;
	  signed char	sbyte  = ~0;
	unsigned short	ushort = ~0;
	  signed short	sshort = ~0;
	unsigned int	uint   = ~0;
	  signed int	sint   = ~0;
	unsigned long	ulong  = ~0;
	  signed long	slong  = ~0;

	std::cout << "std::string	str:    " << str    << std::endl;
	std::cout << "bool		b:      " << b      << std::endl;
	std::cout << "unsigned char	ubyte:  " << ubyte  << std::endl;
	std::cout << "  signed char	sbyte:  " << sbyte  << std::endl;
	std::cout << "unsigned short	ushort: " << ushort << std::endl;
	std::cout << "  signed short	sshort: " << sshort << std::endl;
	std::cout << "unsigned int	uint:   " << uint   << std::endl;
	std::cout << "  signed int	sint:   " << sint   << std::endl;
	std::cout << "unsigned long	ulong:  " << ulong  << std::endl;
	std::cout << "  signed long	slong:  " << slong  << std::endl;

	Variant v_str    (str);
	Variant v_b      (b);
	Variant v_ubyte  (ubyte);
	Variant v_sbyte  (sbyte);
	Variant v_ushort (ushort);
	Variant v_sshort (sshort);
	Variant v_uint   (uint);
	Variant v_sint   (sint);
	Variant v_ulong  (ulong);
	Variant v_slong  (slong);

	return 0;
}


