//////////////////////////////////////////////////////////////////////////////
//
//  File        : msg_de.hh
//
//  Author      : Tom Mortensen - Copyright (C) 1999
//
//  Description : German assembler messages
//
//  History
//  ========================================================================
//
//  980127      : Tom - File created - Messages received from Uwe Bonnes.
//  991222      : Kurt- New command line option -x
//  040306      : Dariusz Kowalewski <darekk@automex.pl> added messages for
//                      W_DEF_REDEF, E_DEV_REDEF and E_DEV_AFTER_DSEG_DATA
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

#ifndef _MSG_DE_HH_
#define _MSG_DE_HH_

// Command line info /////////////////////////////////////////////////////////

#define HELPSTR                                            \
"usage: tavrasm [-vwclxmihjgbafd] <infile> "               \
"               [-I <includepath>]... [-o <outfile>] [-r <rom>] [-e <listfile>]\n" \
"       -v verbose\n"                                      \
"       -w no warnings\n"                                  \
"       -c case sensitive labels/defines\n"                \
"       -l limit log width to 80 characters\n"             \
"       -x allow local labels\n"                           \
"       -m output Motorola S-record format\n"              \
"       -i output Intel HEX format (default)\n"            \
"       -h omit address extension record from Intel HEX files\n" \
"       -j output .obj format\n"                           \
"       -g output generic hex\n"                           \
"       -b output binary format\n"                         \
"       -a wrap relative jumps\n"                          \
"       -f allow forward org's\n"                          \
"       -d list supported devices\n"                           

/// Message strings //////////////////////////////////////////////////////////

#ifdef _UTILS_CC_

char messages[MESSAGE_COUNT][MESSAGES_LEN]=
{
  "Keine Warnung",
  "Ung�ltiger Character \'%c\' im Quelltext",
  "Ung�ltiger Character 0x%02X im Quelltext",
  "Argument @%i angegeben, aber nicht im Makro benutzt",
  "Argument @%i nicht angegeben, aber im Makro benutzt",
  "\'%s\' wurde schon in Zeile %i in Routine \'%s als Label definiert\'",
  "\'%s\' wurde schon in Zeile %i in Routine \'%s definiert\'",
  "Ganzzahlergebnis von EXP2(%i) wurde Null gesetzt",
  "Ganzzahlergebnis von LOG2(%i) wurde Null gesetzt",
  "Bit Nummer '\%i\' ist au�erhalb des Bereichs (0-7)",
  "I/O Port 0x%X ist au�erhalb des Bereichs (0x00-0x1F)",
  "I/O Port 0x%X ist au�erhalb des Bereichs (0x00-0x3F)",
  "Bit mask 0x%X ist au�erhalb des Bereichs (0x00-0xFF)",
  "Konstante 0x%X ist au�erhalb des Bereichs (0x00-0x3F)",
  "Konstante 0x%X ist au�erhalb des Bereichs (0x00-0xFF)",
  "Konstante 0x%X ist au�erhalb des Bereichs (0x00-0xFFFF)",
  "Adresse 0x%X ist au�erhalb des Bereichs (0x0-0xFFFF)",
  "Versatz \'%X\' ist au�erhalb des Bereichs (0x00 - 0x3F)",
  "ZielAdresse \'0x%X\' ist au�erhalb des Bereichs (0x0-0x3FFFFF)",
  "Wert %i ist au�erhalb des Bereichs .db (-128 to 255)",
  "Wert %i ist au�erhalb des Bereichs .dw (-32768 to 65535)",
  "Wert %i setzt PC (um %i Worte) im Kode zur�ck",
  "Wert %i �berschreibt EEPROM Daten (um %i Byte(s))",
  "Wert %i �berschreibt Daten (um %i Byte(s))",
  "Wert %i �berschreibt Register oder I/O Bereich (um %i Byte(s))",
  "SRAM Gr��e um %i byte(s) �berschritten",
  "Unbenutzter Parameter @%i in Makro Definition",
  "Directive '.listmac' nicht unterst�tzt (ignoriert)",
  "Directive '.list' nicht unterst�tzt (ignoriert)",
  "Directive '.nolist' nicht unterst�tzt (ignoriert)",
  "\'%s\' f�r diesen Baustein nicht unterst�tzt",
  "Unbekannter Baustein \'%s\'",
  "Konstante zu gro�",
  "Bezeichner zu lang",
  "EEPROM Gr��e um %i byte(s) �berschritten",
  "Illegaler oktaler Escapewert",
  "Illegaler hex Escapewert",
  "Oktaler Escapewert au�erhalb des Bereichs",
  "Illegale Character Konstante",
  "Flash Speichergr��e um %i word(s) �berschritten",
  "Macro name too long",
  "Consecutive '.device' directive (\'%s\', ignored)",

  /// Error messages /////////////////////////////////////////////////////////

  "Undefinierte Variable referenziert",
  "Undefinierte Variable referenziert in Bit Nummer",
  "Undefinierte Variable referenziert in I/O Port Adresse",
  "Undefinierte Variable referenziert in Sprung",
  "Undefinierte Variable referenziert in Bitmaske",
  "Undefinierte Variable referenziert in Konstante",
  "Undefinierte Variable referenziert in Adresse",
  "Undefinierte Variable referenziert in Versatz",
  "Undefinierte Variable referenziert in relativen Aufruf",
  "Undefinierte Variable referenziert in relativen Sprung",
  "Undefinierte Variable referenziert in Sprung/Aufruf",
  "Undefinierte Variable referenziert in Konstante in .db",
  "Undefinierte Variable referenziert in Konstante in .dw",
  "Undefinierte Variable referenziert in Offset",
  "Undefinierte Variable referenziert in Konstante in .byte",
  "Division durch Null",
  "Ung�ltiges register (r16-r31)",
  "Ung�ltiges register %s",
  "Verzweigung (r�ckw�rts) �berschreitet Bereich um %i Worte",
  "Verzweigung (vorw�rts) �berschreitet Bereich um %i Worte",
  "Ung�ltiges Register (r24/r26/r28/r30)",
  "Ung�ltiges Quellregister r%i (X/Y/Z)",
  "Ung�ltiges Zielregister r%i (X/Y/Z)",
  "Aufruf (r�ckw�rts) �berschreitet Bereich um %i Worte",
  "Aufruf (vorw�rts) �berschreitet Bereich um %i Worte",
  "Sprung (r�ckw�rts) �berschreitet Bereich um %i Worte",
  "Sprung (vorw�rts) �berschreitet Bereich um %i Worte",
  "Label \'%s\' bereits in Zeile %i in \'%s\' definiert",
  "Label \'%s\' bereits in Zeile %i in \'%s\' definiert",
  "Variable \'%s\' bereits in Zeile %i in \'%s\' als Label definiert",
  ".dw in DSEG (nur in CSEG and ESEG zul�ssig)",
  ".db in DSEG (nur in CSEG and ESEG zul�ssig)",
  "Makro \'%s\' bereits definiert (oder Label doppelt verwendet)",
  "Programkode in DSEG (nur in CSEG erlaubt)",
  "Programkode in ESEG (nur in CSEG erlaubt)",
  "Include \'%s\' kann nicht verarbeitet werden  - zu viele Includedateien", /*FIXME*/
  "Ung�ltiger Name f�r Includedatei",
  "Datei \'%s\' kann nicht ge�ffnet werden",
  "Makro kann nicht aufgel�st werden - zu viele Makroebenen",/*FIXME*/
  "Dateiende in Makrodefinition erreicht",
  "Dateiname zu lang in Zeile %i in \'%s\'",
  "Ung�ltiger Dateiname",
  "Register erwartet",
  "Ung�ltiges Register verwendet",
  "Ung�ltiges Register oder immediate",/*FIXME*/
  "Ung�ltige immediate Konstante",/*FIXME*/
  "Unerwartetes Argument",
  "Unbekannter Opcode",
  "ID = register erwartet",
  "Wert (,Wert ,...) erwartet",
  "Argumente d�rfen nicht angegeben werden",
  "Wert/Label erwartet",
  "ID = Ausdruck erwartet",
  "Bausteinname erwartet",
  "Variablen Deklaration in CSEG",
  "Macro ohne Name",
  "Undefinierte Escapesequence %s",
  "Kein Dateiname angegeben",
  "Macro vor Definition benutzt",
  "Undefinierte Escapesequence \'\\%c\'",
  ".endmacro Directive nicht erwartet",
  "Macro Definition innerhalb Makro nicht erlaubt",
  "Register, Versatz erwartet",
  "Versatz, Register erwartet",
  "F�r X kann kein Versatz angegeben werden ( nur f�r Y/Z)",
  "Invalid register r%d (expected r23-r31)",
  "Displacement can not be specified here",
  "Invalid register specified, expected 'Z'",
  "Pre-increment is invalid here (use 'Z' or 'Z+')",
  "Invalid register r%d (expected r%d-r%d)",
  "Invalid register r%d (expected r0, r2, ...)",
  "Undefinierte Variable referenziert in Konstante in .align",
  ".align Wert kein Exponent von Zwei",
  "Unexpected '.device' directive after DSEG data (\'%s\')",
  "Multiple '.device' directives ('%s\' and \'%s\')",

  /// Fatal errors ///////////////////////////////////////////////////////////

  "Kein fataler Fehler",
  "Speicherbedarf zu gro�",
  "Zeile zu kang in \'%s\'",
  "Makro mit zu langer Zeile in %i in \'%s\'",
  "Eingabedatei kann nicht ge�ffnet werden \'%s\'",
  "Listdatei kann nicht ge�ffnet werden \'%s\'",
  "Ausgabedatei kann nicht ge�ffnet werden\'%s\'",
  "ROM Datei kann nicht ge�ffnet werden \'%s\'",
  "Zu viele Includedateinen",
  "Kodegr��e �berschritten",
  "EEPROM Gr��e �berschritten",
  "Makroschachtelung zu tief",

  /// Messages ///////////////////////////////////////////////////////////////

  "Keine Mitteilung",
  "Leere ROM Datei",
  "ROM Datei kann nicht im .obj Formay gespeichert werden",
  "Keine Eingabedatei angegeben",
  "Unbekannte Option '%s'",
  "Mehr Optionen als m/i/j/b/h angegeben",
  "Keine ROM Datei angegeben",
  "Rom Dateiname zu lang",
  "Ung�ltiger Name f�r ROM Datei",
  "Keine Listdatei angegeben",
  "Name f�r Listdatei zu lang",
  "Ung�ltiger Name f�r Listdatei",
  "Name f�r Ausgabedatei fehlt",
  "Name f�r Ausgabedatei zu lang",
  "Ung�ltiger Name f�r Ausgabedatei",
  "Mehrere Namen f�r Ausgabedatei angegeben",
  "Name f�r Eingabedatei zu lang",
  "Ung�ltiger Name f�r Eingabedatei",
  "Mehrere Namen f�r Eingabedatei angegeben",
  "Fehler      : %i",
  "Warnungen   : %i",
  "Kode        : %i",
  "Rom         : %i",
  "Data        : %i",
  "Freier Kode : %i",
  "Freies Rom  : %i",
  "Kein Kode erzeugt",
  "| Bausteintype     | Ram Start |Flash Gr��e |Ram Gr��e |EEPROM Gr��e |",
  "No include path found after '-I' flag",
  "Too many include paths specified",
  "Include pathname too long"
};

#endif 

#endif /* _MSG_DE_HH_ */

/// END OF FILE //////////////////////////////////////////////////////////////
