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

## 🔀 Minus-C Syntax Mapping (Dictionary)

Minus-C replaces verbose standard C keywords with ultra-short aliases via compile-time preprocessor macros, maintaining 100% execution efficiency with zero runtime overhead.

| Standard C | Minus-C | Description |
| :--- | :--- | :--- |
| `uint8_t` / `int32_t` | `u8` / `i32` | Compressed fixed-width integer types |
| `if` / `else if` / `else` | `_if` / `_ei` / `_el` | Shortened conditional branching |
| `while` / `for` / `do` | `whl` / `_for` / `_do` | Minified loop constructs |
| `struct` / `union` / `enum` | `str` / `uni` / `enm` | Condensed data structures |
| `break` / `continue` / `return`| `brk` / `cnt` / `rtn` | Minimal control flow exits |
