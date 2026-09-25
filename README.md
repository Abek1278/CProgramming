# C Programming Learning Journey

> My complete C programming journey, covering fundamentals, problem-solving, memory management, data structures, file handling, and practical projects.

[![C](https://img.shields.io/badge/Language-C99-00599C?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compiler](https://img.shields.io/badge/Compiler-GCC%20%2F%20MinGW-blue.svg)](https://gcc.gnu.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

---

## 🎯 Purpose of This Repository

This repository documents my hands-on learning journey as I work through a comprehensive C programming curriculum. Rather than passively following along or collecting tutorial code, this space is an active **learning laboratory** for:
- Writing and dissecting core C concepts from scratch.
- Breaking code purposefully to understand compiler diagnostics, memory limits, and runtime behaviors.
- Capturing personal notes, debugging techniques, and conceptual mental models.
- Progressively designing real-world projects and problem solutions.

---

## 💡 Learning Philosophy

> **Learn the concept → Write the code → Break the code → Fix it → Build something with it.**

True understanding comes from seeing how memory, pointers, and the compiler behave under the hood.

---

## 🛠️ Tools & Environment

* **Language Standard**: C99 / C11
* **Compiler**: GCC (MinGW on Windows)
* **Editor**: Visual Studio Code (C/C++ extension pack)
* **Debugger**: GDB
* **Version Control**: Git & GitHub

---

## 📂 Repository Structure

```text
c-programming/
├── README.md                          # Repository overview and progress tracker
├── .gitignore                         # Build artifact ignore rules
├── LICENSE                            # MIT License
│
├── 01-introduction/                   # Setup, platforms, Hello World
├── 02-variables-and-data-types/       # Variables, types, sizeof, user input
├── 03-operators/                      # Arithmetic, relational, logical, bitwise
├── 04-header-files/                   # Custom headers, prototypes, include guards
├── 05-conditional-statements/         # If/else, switch, ternary, casting
├── 06-loops/                          # For, while, do-while, nested loops
├── 07-algorithms/                     # Flowcharts, pseudocode, linear search
├── 08-debugging/                      # Debugging strategies, assertions, GDB
├── 09-functions/                      # Functions, pass-by-value, recursion
├── 10-arrays/                         # 1D arrays, matrices / 2D arrays
├── 11-strings/                        # Null termination, string.h, algorithms
├── 12-pointers/                       # Memory addresses, dereferencing, pointer math
├── 13-structures/                     # Structs, nested structs, typedef
├── 14-unions/                         # Union memory sharing
├── 15-constants-and-enums/            # const, #define macros, enum types
├── 16-dynamic-memory/                 # malloc, calloc, realloc, free
├── 17-file-handling/                  # File I/O (r, w, a), streams, operations
├── 18-projects/                       # Applied standalone projects
├── notes/                             # Cheatsheets, deep concepts, mistake log
└── examples.md                        # Master index for all 92 course examples & practice files
```

---

## 📋 Course Curriculum & Progress

- [x] **01-introduction**
  - [x] Introduction & What is Programming
  - [x] Platform Architecture & History of C
  - [x] Environment Setup (GCC & Editor)
  - [x] Anatomy of a C Code Snippet ([hello_world.c](01-introduction/hello_world.c))
- [x] **02-variables-and-data-types**
  - [x] Comments ([comments.c](02-variables-and-data-types/comments.c))
  - [x] Variables & Scope ([variables.c](02-variables-and-data-types/variables.c))
  - [x] Primitive Data Types ([data_types.c](02-variables-and-data-types/data_types.c))
  - [x] Reading Input with `scanf` ([input.c](02-variables-and-data-types/input.c))
- [x] **03-operators**
  - [x] Arithmetic Operators ([arithmetic.c](03-operators/arithmetic.c))
  - [x] Assignment Operators ([assignment.c](03-operators/assignment.c))
  - [x] Comparison / Relational Operators ([comparison.c](03-operators/comparison.c))
  - [x] Logical Operators ([logical.c](03-operators/logical.c))
  - [x] Bitwise Operators ([bitwise.c](03-operators/bitwise.c))
- [x] **04-header-files**
  - [x] Standard vs Custom Headers ([main.c](04-header-files/main.c))
  - [x] Header Guards & Prototypes ([math_utils.h](04-header-files/math_utils.h))
- [x] **05-conditional-statements**
  - [x] If-Else Branching ([if_else.c](05-conditional-statements/if_else.c))
  - [x] Nested Conditions ([nested_if.c](05-conditional-statements/nested_if.c))
  - [x] Ternary Operator ([ternary.c](05-conditional-statements/ternary.c))
  - [x] Switch-Case Statements ([switch.c](05-conditional-statements/switch.c))
  - [x] Type Conversion & Casting ([type_conversion.c](05-conditional-statements/type_conversion.c))
- [x] **06-loops**
  - [x] `for` Loop ([for_loop.c](06-loops/for_loop.c))
  - [x] `while` Loop ([while_loop.c](06-loops/while_loop.c))
  - [x] `do-while` Loop ([do_while.c](06-loops/do_while.c))
  - [x] Nested Loops & Patterns ([nested_loops.c](06-loops/nested_loops.c))
- [x] **07-algorithms**
  - [x] Flowcharts & Pseudocode ([flowchart_and_pseudocode.md](07-algorithms/flowchart_and_pseudocode.md))
  - [x] Search Fundamentals ([linear_search.c](07-algorithms/linear_search.c))
- [x] **08-debugging**
  - [x] Compiler Flags & Debugging Workflow ([debugging_guide.md](08-debugging/debugging_guide.md))
  - [x] Assertions & Diagnostic Macros ([debugging_basics.c](08-debugging/debugging_basics.c))
- [x] **09-functions**
  - [x] Function Prototypes & Calls ([functions.c](09-functions/functions.c))
  - [x] Function Parameters & Pass-by-Value ([parameters.c](09-functions/parameters.c))
  - [x] Return Values ([return_values.c](09-functions/return_values.c))
  - [x] Recursion ([recursion.c](09-functions/recursion.c))
- [x] **10-arrays**
  - [x] 1D Arrays ([arrays.c](10-arrays/arrays.c))
  - [x] Multidimensional Arrays / Matrices ([multidimensional_arrays.c](10-arrays/multidimensional_arrays.c))
- [x] **11-strings**
  - [x] Character Arrays & Null Termination ([strings.c](11-strings/strings.c))
  - [x] Standard String Library Functions ([string_functions.c](11-strings/string_functions.c))
  - [x] Palindrome & In-Place Reversal ([string_problems.c](11-strings/string_problems.c))
- [x] **12-pointers**
  - [x] Addresses & Dereferencing ([pointer_basics.c](12-pointers/pointer_basics.c))
  - [x] Pointer Arithmetic ([pointer_arithmetic.c](12-pointers/pointer_arithmetic.c))
  - [x] Arrays as Pointers ([pointers_and_arrays.c](12-pointers/pointers_and_arrays.c))
- [x] **13-structures**
  - [x] `struct` Definition & Access ([struct.c](13-structures/struct.c))
  - [x] Nested Structures ([nested_struct.c](13-structures/nested_struct.c))
  - [x] `typedef` Aliases ([typedef.c](13-structures/typedef.c))
- [x] **14-unions**
  - [x] Memory Sharing in `union` ([union.c](14-unions/union.c))
- [x] **15-constants-and-enums**
  - [x] `const` Qualifier & `#define` ([constants.c](15-constants-and-enums/constants.c))
  - [x] Enumerated Types (`enum`) ([enum.c](15-constants-and-enums/enum.c))
- [x] **16-dynamic-memory**
  - [x] `malloc` Allocation ([malloc.c](16-dynamic-memory/malloc.c))
  - [x] `calloc` Zero-Initialization ([calloc.c](16-dynamic-memory/calloc.c))
  - [x] `realloc` Resizing ([realloc.c](16-dynamic-memory/realloc.c))
  - [x] `free` & Dangling Pointer Prevention ([free.c](16-dynamic-memory/free.c))
- [x] **17-file-handling**
  - [x] Writing Files (`"w"`) ([file_write.c](17-file-handling/file_write.c))
  - [x] Reading Files (`"r"`) ([file_read.c](17-file-handling/file_read.c))
  - [x] Appending & File Operations (`"a"`) ([file_operations.c](17-file-handling/file_operations.c))
- [ ] **18-projects** (See [18-projects/README.md](18-projects/README.md))

---

## 🚀 Projects Roadmap

See details in [18-projects/](18-projects/README.md):
- [ ] CLI Calculator
- [ ] Number Guessing Game
- [ ] Student Management System
- [ ] Bank Management System
- [ ] File Handling Project

---

## 📖 Quick Notes & Reference

* [Examples & Practice Index](examples.md) - Master tracking table of all 92 course examples with video timestamps.
* [C Cheatsheet](notes/c-cheatsheet.md) - Syntax, format specifiers, data type sizes, standard headers.
* [Important Concepts](notes/important-concepts.md) - Deep dive into stack vs heap, pointer mechanics, buffer safety.
* [Mistakes Log](notes/mistakes.md) - Personal journal of compiler errors, logic pitfalls, and bug fixes.

---

## 📜 License

This repository is open source and available under the [MIT License](LICENSE).
