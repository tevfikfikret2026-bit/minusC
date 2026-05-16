# ⚡ Tiny-Embedded-C

A comprehensive guide and repository dedicated to stripping down the C programming language to its bare essentials for resource-constrained microcontrollers ($\mu$C). By bypassing bloated standard libraries and vendor-provided Hardware Abstraction Layers (HAL), this project focuses on direct register manipulation, tight memory budgeting, and aggressive compiler optimizations.

---

## 🎯 Core Philosophies

### 1. Zero Bloat (HAL-less Design)
Standard vendor functions (e.g., Arduino's `digitalWrite()`) carry heavy safety checks that waste valuable Flash memory and CPU cycles. We interact directly with memory-mapped I/O registers using bitwise operators.

### 2. Strict Type Discipline
We completely avoid the native `int` or `long` types, which vary across architectures. Every single byte is audited using fixed-width types from `<stdint.h>` (`uint8_t`, `int8_t`, etc.).

### 3. Ban on Heavy Subsystems
* **No Dynamic Allocation:** `malloc()` and `free()` are banned to avoid Heap fragmentation and runtime overhead. All memory is static.
* **No `printf` / `sprintf`:** Formatting libraries introduce massive underlying overhead. Custom, lean lookup tables or lightweight bit-shifting text utilities are used instead.

---

## 🗺️ Complete Keyword Mapping (Standard C vs. Minus-C)

Every single architectural component of the C language is mapped to a highly compressed format:

| Category | Standard C Keywords | Minus-C Target |
| :--- | :--- | :--- |
| **Fixed Width Integers** | `uint8_t`, `int8_t`, `uint16_t`, `int32_t` | `u8`, `i8`, `u16`, `i32` |
| **Standard Primitives** | `char`, `float`, `double`, `void`, `_Bool` | `chr`, `flt`, `dbl`, `v_d`, `bln` |
| **Control Flow** | `if`, `else if`, `else`, `goto` | `_if`, `_ei`, `_el`, `gto` |
| **Loops & Jumps** | `while`, `do`, `for`, `break`, `continue` | `whl`, `_do`, `_for`, `brk`, `cnt` |
| **Structures** | `struct`, `union`, `enum`, `typedef` | `str`, `uni`, `enm`, `tdef` |
| **Memory Modifiers**| `const`, `static`, `volatile`, `extern` | `cst`, `stc`, `vol`, `ext` |
| **System Evaluation**| `sizeof`, `return` | `szo`, `rtn` |
