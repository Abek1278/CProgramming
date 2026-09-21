# C Quick Reference Cheatsheet

A concise syntax and reference guide for daily C programming practice.

---

## 1. Common Format Specifiers

Used with `printf` and `scanf`:

| Specifier | Type | Example |
| :--- | :--- | :--- |
| `%d` / `%i` | Signed integer (`int`) | `printf("%d", 42);` |
| `%u` | Unsigned integer (`unsigned int`) | `printf("%u", 100);` |
| `%f` | Floating point (`float`) | `printf("%.2f", 3.1415);` |
| `%lf` | Double precision float (`double`) | `printf("%lf", 3.14159265);` |
| `%c` | Single character (`char`) | `printf("%c", 'A');` |
| `%s` | String (null-terminated `char[]`) | `printf("%s", "Hello");` |
| `%p` | Pointer memory address (hex) | `printf("%p", (void*)&x);` |
| `%zu` | `size_t` (from `sizeof`) | `printf("%zu bytes", sizeof(int));` |

---

## 2. Basic Data Types (Typical 32/64-bit GCC)

| Type | Typical Size | Value Range |
| :--- | :--- | :--- |
| `char` | 1 byte | -128 to 127 |
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `short` | 2 bytes | -32,768 to 32,767 |
| `long` | 4 or 8 bytes | Platform dependent |
| `float` | 4 bytes | ~6-7 decimal digits precision |
| `double` | 8 bytes | ~15-17 decimal digits precision |

---

## 3. Essential Headers

```c
#include <stdio.h>    // I/O operations (printf, scanf, fopen, fgets)
#include <stdlib.h>   // Memory allocation (malloc, free), system utilities, exit()
#include <string.h>   // String manipulation (strlen, strcpy, strcmp, strcat)
#include <stdbool.h>  // Boolean type (bool, true, false - C99)
#include <math.h>     // Math functions (sqrt, pow, fabs, floor, ceil)
```

---

## 4. Operator Precedence (Quick Guide)

1. **Primary**: `()`, `[]`, `->`, `.`
2. **Unary**: `!`, `~`, `++`, `--`, `+`, `-`, `*` (dereference), `&` (address-of), `sizeof`
3. **Multiplicative**: `*`, `/`, `%`
4. **Additive**: `+`, `-`
5. **Relational**: `<`, `<=`, `>`, `>=`
6. **Equality**: `==`, `!=`
7. **Logical AND / OR**: `&&`, `||`
8. **Conditional**: `?:`
9. **Assignment**: `=`, `+=`, `-=`, etc.

---

## 5. Standard Main Signature

```c
#include <stdio.h>

int main(void) {
    // Code goes here
    return 0; // 0 indicates successful execution
}
```
