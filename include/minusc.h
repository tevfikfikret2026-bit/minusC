/*
 * minusc.h - The Minus-C Core Syntax Dictionary
 * Minimizes standard C constructs into ultra-short keywords.
 */

#ifndef MINUSC_H
#define MINUSC_H

#include <stdint.h>

// --- Data Types (Veri Tipleri) ---
#define u8   uint8_t   // 1 byte unsigned int
#define i8   int8_t    // 1 byte signed int
#define u16  uint16_t  // 2 byte unsigned int
#define i16  int16_t   // 2 byte signed int
#define u32  uint32_t  // 4 byte unsigned int
#define i32  int32_t   // 4 byte signed int
#define chr  char      // Character
#define v_d  void      // Void

// --- Storage & Qualifiers (Belirteçler) ---
#define cst  const     // Read-only memory
#define stc  static    // File-scope or persistent
#define vol  volatile  // Non-optimizable

// --- Control Flow (Kontrol Akış Yapıları) ---
#define _if  if
#define _el  else
#define _ei  else if
#define swc  switch
#define cse  case
#define dfl  default
#define whl  while
#define _do  do
#define _for for
#define brk  break
#define cnt  continue
#define rtn  return

// --- User-Defined Structures (Yapılar) ---
#define str  struct
#define uni  union
#define enm  enum
#define tdef typedef

#endif // MINUSC_H
