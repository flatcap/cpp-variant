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

#include <iostream>

#include "variant.h"

/**
 * main
 */
int main (int, char *[])
{
	std::string str        = "a very long message that exceeds thirty-two characters";
	bool        one        = ~0;
	char        eight      = ~0;
	short       sixteen    = ~0;
	int         thirty_two = ~0;
	long        sixty_four = ~0;

	std::cout << "string str:        " << str        << std::endl;
	std::cout << "bool   one:        " << one        << std::endl;
	std::cout << "char   eight:      " << eight      << std::endl;
	std::cout << "short  sixteen:    " << sixteen    << std::endl;
	std::cout << "int    thirty_two: " << thirty_two << std::endl;
	std::cout << "long   sixty_four: " << sixty_four << std::endl;

	Variant v_string (str);
	Variant v_bool (one);
	Variant v_byte (eight);
	Variant v_short (sixteen);
	Variant v_int (thirty_two);
	Variant v_long (sixty_four);

	return 0;
}


