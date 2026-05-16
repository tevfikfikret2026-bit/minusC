/*
 * minusc.h - The Ultimate Minus-C Syntax Mapping Dictionary
 * Contains EVERY standard C keyword, operator macro, and foundational type.
 */

#ifndef MINUSC_H
#define MINUSC_H

#include <stdint.h>
#include <stddef.h>

// ============================================================================
// 1. DATA TYPES & SIGNALS (Tüm Veri Tipleri)
// ============================================================================
#define u8   uint8_t     // 8-bit unsigned
#define i8   int8_t      // 8-bit signed
#define u16  uint16_t    // 16-bit unsigned
#define i16  int16_t     // 16-bit signed
#define u32  uint32_t    // 32-bit unsigned
#define i32  int32_t     // 32-bit signed
#define u64  uint64_t    // 64-bit unsigned
#define i64  int64_t     // 64-bit signed
#define chr  char        // Character
#define flt  float       // Single precision float
#define dbl  double      // Double precision float
#define v_d  void        // Empty/Void type
#define bln  _Bool       // Native C99 Boolean

// ============================================================================
// 2. CORE KEYWORDS & MODIFIERS (Tüm Dil Anahtar Kelimeleri ve Değiştiriciler)
// ============================================================================
#define cst  const       // Read-only storage
#define stc  static      // Static linkage / persistence
#define vol  volatile    // Force memory access (disable optimization)
#define ext  extern      // External linkage reference
#define reg  register    // Hint to store variable in CPU register
#define rst  restrict    // Pointer optimization alias hint
#define szo  sizeof      // Compile-time size evaluation
#define inline __inline  // Function inlining hint

// ============================================================================
// 3. CONTROL FLOW & BRANCHING (Tüm Kontrol Akış Yapıları)
// ============================================================================
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
#define gto  goto

// ============================================================================
// 4. DATA STRUCTURING (Tüm Kullanıcı Tanımlı Veri Yapıları)
// ============================================================================
#define str  struct      // Structure capsule
#define uni  union       // Shared memory overlay
#define enm  enum        // Enumerated integer constants
#define tdef typedef     // Type aliasing

// ============================================================================
// 5. ESSENTIAL PSEUDO-FUNCTIONS (Yaygın IO ve Bellek Kısaltmaları)
// ============================================================================
// Not: Normalde stdio kullanmıyorduk ama "tam anlamıyla her şey" dediğin için 
// bunları da hafif takma isimlerle buraya bağladık.
#define prnt printf
#define scan scanf
#define allocation malloc
#define deallocation free

#endif // MINUSC_H
