//////////////////////////////////////////////////////////////////////////////
//
//  File        : devices.hh
//
//  Author      : Tom Mortensen - Copyright (C) 1999
//
//  Description : AVR Controller descriptions
//
//  History
//  ========================================================================
//
//  980902      : Tom - File created.
//  990124      : Tom - Added GPL notice.
//  990721	: Tom - Added AT90S4433
//  021218	: Andreas Schwarz <andreas-s@web.de> added AT90S2333, ATmegaXX
//  040306      : Dariusz Kowalewski <darekk@automex.pl> fixes/updates for ATmega
//  050826      : Michael Baeuerle - Added ATtinyXX
//  050827      : Michael Baeuerle - Added ATmega165 and GENERIC2
//                                   ATmega reordered by flash memory size
//
//////////////////////////////////////////////////////// Tom did this ////////
//
// Copyright notice:
//
// tavrasm - A GNU/Linux assembler for the Atmel AVR series
// of microcontrollers. Copyright (C) 1999 Tom Mortensen
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
// 
// Tom Mortensen
//
// E-mail : tom@tavrasm.org
// WWW    : http://www.tavrasm.org
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _DEVICES_HH_
#define _DEVICES_HH_

/// Include //////////////////////////////////////////////////////////////////

#include "avrasm.hh"

/// Device descriptions //////////////////////////////////////////////////////
//
// struct deviceinfo {
//         char    name[MAX_DEVICE_NAME_LENGTH+1]; // Device name
//         int     datastart;                      // Registers + I/O ports
//         int     ramsize;                        // Size of ram
//         int     eepromsize;                     // Size of EEPROM
//         int     flashsize;                      // Size of flash (in words)
//         int     supported;                      // Unsupported instructions
// };
// 

deviceinfo devices[MAX_DEVICES] = {

  // ------------------------------------------------------------------------
  // Name       |Reg| Ram  | EEPROM |Flash Size | Unsupported instuctions   |
  // ------------------------------------------------------------------------
  //            |   |      |        |           |                           |
  { "GENERIC"   , 96, 65536, 0x10000, 0x1000000 , 0                        },
  { "GENERIC2"  ,256, 65536, 0x10000, 0x1000000 , 0                        },
  { "ATtiny12"  , 96,     0,      64,       512 , S_JMP   |S_CALL  |S_MUL   |
                                                  S_ADIW  |S_ICALL |S_IJMP  |
                                                  S_LD    |S_ST    |S_LDS   |
                                                  S_LPM   |S_PUSH  |S_POP   |
                                                  S_SBIW  |S_LDD   |S_STD   |
                                                  S_STS   |S_EXTENDED      },
  { "ATtiny13"  , 96,    64,      64,       512 , S_JMP   |S_CALL  |S_EIJMP |
                                                  S_EICALL|S_ELPM  |S_ESPM  |
                                                  S_MUL   |S_MULS  |S_MULSU |
                                                  S_FMUL  |S_FMULS |S_FMULSU             },
  { "ATtiny25"  , 96,   128,     128,      1024 , S_JMP   |S_CALL  |S_EIJMP |
                                                  S_EICALL|S_ELPM  |S_ESPM  |
                                                  S_MUL   |S_MULS  |S_MULSU |
                                                  S_FMUL  |S_FMULS |S_FMULSU             },
  { "ATtiny45"  , 96,   256,     256,      2048 , S_JMP   |S_CALL  |S_EIJMP |
                                                  S_EICALL|S_ELPM  |S_ESPM  |
                                                  S_MUL   |S_MULS  |S_MULSU |
                                                  S_FMUL  |S_FMULS |S_FMULSU             },
  { "ATtiny85"  , 96,   512,     512,      4096 , S_JMP   |S_CALL  |S_EIJMP |
                                                  S_EICALL|S_ELPM  |S_ESPM  |
                                                  S_MUL   |S_MULS  |S_MULSU |
                                                  S_FMUL  |S_FMULS |S_FMULSU             },
  { "AT90S1200" , 96,     0,      64,       512 , S_JMP   |S_CALL  |S_MUL   |
                                                  S_ADIW  |S_ICALL |S_IJMP  |
                                                  S_LD    |S_ST    |S_LDS   |
                                                  S_LPM   |S_PUSH  |S_POP   |
                                                  S_SBIW  |S_LDD   |S_STD   |
                                                  S_STS   |S_EXTENDED      },
  { "AT90S2313" , 96,   128,     128,      1024 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "AT90S2323" , 96,   128,     128,      1024 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "AT90S2343" , 96,   128,     128,      1024 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "AT90S4414" , 96,   256,     256,      2048 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "AT90S4433" , 96,   256,     256,      2048 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "AT90S4434" , 96,   256,     256,      2048 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "AT90S8515" , 96,   512,     512,      4096 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "AT90S8535" , 96,   512,     512,      4096 , S_JMP   |S_CALL  |S_MUL   | S_EXTENDED },
  { "ATmega48"  ,256,   512,     256,      2048 , 0                        },
  { "ATmega8"   , 96,  1024,     512,      4096 , 0                        },
  { "ATmega8515", 96,   512,     512,      4096 , 0                        },
  { "ATmega8535", 96,   512,     512,      4096 , 0                        },
  { "ATmega88"  ,256,  1024,     512,      4096 , 0                        },
  { "ATmega16"  , 96,  1024,     512,      8192 , 0                        },
  { "ATmega161" , 96,  1024,     512,      8192 , 0                        },
  { "ATmega162" ,256,  1024,     512,      8192 , 0                        },
  { "ATmega163" , 96,  1024,     512,      8192 , 0                        },
  { "ATmega165" ,256,  1024,     512,      8192 , 0                        },
  { "ATmega168" ,256,  1024,     512,      8192 , 0                        },
  { "ATmega169" ,256,  1024,     512,      8192 , 0                        },
  { "ATmega32"  , 96,  2048,    1024,     16384 , 0                        },
  { "ATmega323" , 96,  2048,    1024,     16384 , 0                        },
  { "ATmega64"  ,256,  4096,    2048,     32768 , 0                        },
  { "ATmega103" , 96,  4096,    4096,     65536 , S_MUL   |S_EXTENDED      },
  { "ATmega128" ,256,  4096,    4096,     65536 , 0                        },
  //            |   |      |        |           |                           |
  // ------------------------------------------------------------------------

  // Test device

  { ""          , 96,     2,       5,        10 , 0                        },

  // NULL - terminating device.

  { ""          ,  0,     0,   0x000, 0x1000000 , 0                        }

};

#endif /* _DEVICES_HH_ */

/// END OF FILE //////////////////////////////////////////////////////////////
