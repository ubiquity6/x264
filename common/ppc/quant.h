/*****************************************************************************
* quant.h: h264 encoder library
*****************************************************************************
* Authors: Guillaume Poirier <poirierg@gmail.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
*****************************************************************************/

#ifndef _PPC_QUANT_H
#define _PPC_QUANT_H 1

void x264_quant_4x4_altivec( int16_t dct[4][4], uint16_t mf[16], uint16_t bias[16] );
void x264_quant_8x8_altivec( int16_t dct[8][8], uint16_t mf[64], uint16_t bias[64] );

void x264_quant_4x4_dc_altivec( int16_t dct[4][4], int mf, int bias );
void x264_quant_2x2_dc_altivec( int16_t dct[2][2], int mf, int bias );
#endif
