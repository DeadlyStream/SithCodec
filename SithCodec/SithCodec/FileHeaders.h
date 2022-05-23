/**
 *	@file fileheaders.h
 *	@brief Contains header data of audo file formats from <em>Star Wars:
 *		   Knights of the Old Republic</em>.
 *
 *	@copyright GNU General Public License
 *	@parblock
 *		Copyright (C) 2022 Brendan Brassil
 *
 *		This file is part of %SithCodec.
 *
 *		%SithCodec is free software: you can redistribute it and/or modify
 *		it under the terms of the GNU General Public License as published by
 *		the Free Software Foundation, either version 3 of the License, or
 *		(at your option) any later version.
 *
 *		%SithCodec is distributed in the hope that it will be useful,
 *		but WITHOUT ANY WARRANTY; without even the implied warranty of
 *		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *		GNU General Public License for more details.
 *
 *		You should have received a copy of the GNU General Public License
 *		along with %SithCodec. If not, see <https://www.gnu.org/licenses/>.
 *	@endparblock
 */

#ifndef SITHCODEC_FILEHEADERS_H
#define SITHCODEC_FILEHEADERS_H

#include <cstddef>

namespace SithCodec {
	/**
	 *	@brief Audio headers for <em>Star Wars: Knights of the Old Republic</em>.
	 */
	namespace Header {
		namespace {
			constexpr std::streamsize
				maxSize = 470,
				sfxSize = 470,
				voSize = 58;

			constexpr char sfx[sfxSize]{
				(char)0xffffffff,
				(char)0xfffffff3,
				(char)0x60,
				(char)0xffffffc4,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x3,
				(char)0x48,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x4c,
				(char)0x41,
				(char)0x4d,
				(char)0x45,
				(char)0x33,
				(char)0x2e,
				(char)0x39,
				(char)0x33,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x4c,
				(char)0x41,
				(char)0x4d,
				(char)0x45,
				(char)0x33,
				(char)0x2e,
				(char)0x39,
				(char)0x33,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0xffffffff,
				(char)0xfffffff3,
				(char)0x62,
				(char)0xffffffc4,
				(char)0xffffff8f,
				(char)0x0,
				(char)0x0,
				(char)0x3,
				(char)0x48,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x4c,
				(char)0x41,
				(char)0x4d,
				(char)0x45,
				(char)0x33,
				(char)0x2e,
				(char)0x39,
				(char)0x33,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0xffffffff,
				(char)0xfffffff3,
				(char)0x62,
				(char)0xffffffc4,
				(char)0xffffffff,
				(char)0x0,
				(char)0x0,
				(char)0x3,
				(char)0x48,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55,
				(char)0x55
			};

			constexpr char vo[voSize]{
				(char)0x52,
				(char)0x49,
				(char)0x46,
				(char)0x46,
				(char)0x32,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x57,
				(char)0x41,
				(char)0x56,
				(char)0x45,
				(char)0x66,
				(char)0x6d,
				(char)0x74,
				(char)0x20,
				(char)0x12,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x1,
				(char)0x0,
				(char)0x1,
				(char)0x0,
				(char)0x22,
				(char)0x56,
				(char)0x0,
				(char)0x0,
				(char)0x22,
				(char)0x56,
				(char)0x0,
				(char)0x0,
				(char)0x1,
				(char)0x0,
				(char)0x8,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x66,
				(char)0x61,
				(char)0x63,
				(char)0x74,
				(char)0x4,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x64,
				(char)0x61,
				(char)0x74,
				(char)0x61,
				(char)0x0,
				(char)0x0,
				(char)0x0,
				(char)0x0
			};
		}
	}
}

#endif