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

/* list of coercions
 *	unset	-> none
 *	string	-> string
 *	char	-> char, string
 *	bool	-> string, bool, byte, short, int, long
 *	byte	-> string, byte, short, int, long
 *	short	-> string, short, int, long
 *	int	-> string, int, long
 *	long	-> string, long
 */


/**
 * class Variant
 */
class Variant
{
public:
	Variant (void);
	Variant (const std::string &value);
	Variant (bool value);
	Variant (unsigned char  value);
	Variant (  signed char  value);
	Variant (unsigned short value);
	Variant (  signed short value);
	Variant (unsigned int   value);
	Variant (  signed int   value);
	Variant (unsigned long  value);
	Variant (  signed long  value);
	virtual ~Variant();

	Variant (const Variant &v);
	Variant (const Variant &&v);
	Variant & operator= (const Variant &v);

protected:
	friend void swap (Variant &first, Variant &second);
	friend std::ostream & operator<< (std::ostream &os, const Variant *v);
	friend std::ostream & operator<< (std::ostream &os, const Variant &v);

	void clear (void);

	enum class Tag {
		t_unset,	// Empty
		t_string,	// Text
		t_bool,		//  1 bit
		t_ubyte,	//  8 bits unsigned
		t_sbyte,	//         signed
		t_ushort,	// 16 bits unsigned
		t_sshort,	//         signed
		t_uint,		// 32 bits unsigned
		t_sint,		//         signed
		t_ulong,	// 64 bits unsigned
		t_slong		//         signed
	} type;

	union {
		std::string	u_string;
		bool		u_bool;
		unsigned char	u_ubyte;
		  signed char	u_sbyte;
		unsigned short	u_ushort;
		  signed short	u_sshort;
		unsigned int	u_uint;
		  signed int	u_sint;
		unsigned long	u_ulong;
		  signed long	u_slong;
	};
};


#endif // _VARIANT_H_

