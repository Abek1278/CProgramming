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

## 📂 Folder-by-Folder Chronological Breakdown

### `01-introduction/`
- `01` → [`01-hello_world.c`](01-introduction/01-hello_world.c) — Hello World Program (00:24:47)

### `02-variables-and-data-types/`
- `01` → [`01-comments.c`](02-variables-and-data-types/01-comments.c) — Single-line & Multi-line Comments (00:25:01)
- `02` → [`02-variables.c`](02-variables-and-data-types/02-variables.c) — Declaring & Printing Variables (00:42:17)
- `03` → [`03-data_types.c`](02-variables-and-data-types/03-data_types.c) — Primitive Data Types & Format Specifiers (00:54:40)
- `04` → [`04-escape_sequences.c`](02-variables-and-data-types/04-escape_sequences.c) — Escape Sequences & Special Characters (01:01:07)
- `05` → [`05-sum_of_constants.c`](02-variables-and-data-types/05-sum_of_constants.c) — Sum of Two Constant Numbers (01:06:02)
- `06` → [`06-arithmetic_constants.c`](02-variables-and-data-types/06-arithmetic_constants.c) — Arithmetic Operations on Constants (01:07:29)
- `07` → [`07-input.c`](02-variables-and-data-types/07-input.c) — User Input with scanf (01:14:12)
- `08` → [`08-input_buffer_char_after_int.c`](02-variables-and-data-types/08-input_buffer_char_after_int.c) — Input Buffer Traps (Char after Int) (01:24:45)
- `09` → [`09-sum_two_numbers_input.c`](02-variables-and-data-types/09-sum_two_numbers_input.c) — Sum of Two Numbers from scanf (01:27:31)
- `10` → [`10-swap_two_numbers.c`](02-variables-and-data-types/10-swap_two_numbers.c) — Swap Two Numbers Using a 3rd Variable (01:29:19)

### `03-operators/`
- `01` → [`01-arithmetic.c`](03-operators/01-arithmetic.c) — Arithmetic Operators (+, -, *, /, %) (01:36:26)
- `02` → [`02-increment_decrement_operators.c`](03-operators/02-increment_decrement_operators.c) — Pre/Post Increment & Decrement (01:40:45)
- `03` → [`03-comparison.c`](03-operators/03-comparison.c) — Relational / Comparison Operators (01:46:28)
- `04` → [`04-assignment.c`](03-operators/04-assignment.c) — Compound Assignment Operators (01:50:55)
- `05` → [`05-sizeof_operator.c`](03-operators/05-sizeof_operator.c) — Inspecting Memory Sizes with sizeof (01:54:57)
- `06` → [`06-logical.c`](03-operators/06-logical.c) — Logical Operators (&&, ||, !) (01:58:32)
- `07` → [`07-bitwise.c`](03-operators/07-bitwise.c) — Bitwise Operators (&, |, ^, ~, <<, >>) (02:01:00)
- `08` → [`08-area_perimeter_rectangle.c`](03-operators/08-area_perimeter_rectangle.c) — Area & Perimeter of Rectangle (02:08:34)
- `09` → [`09-area_circumference_circle.c`](03-operators/09-area_circumference_circle.c) — Area & Circumference of Circle (02:10:11)
- `10` → [`10-simple_interest.c`](03-operators/10-simple_interest.c) — Simple Interest Formula (02:12:41)
- `11` → [`11-compound_interest.c`](03-operators/11-compound_interest.c) — Compound Interest Formula (02:14:58)

### `04-header-files/`
- `01` → [`01-math_header_functions.c`](04-header-files/01-math_header_functions.c) — <math.h> Standard Library Functions (02:04:15)
- `02` → [`02-main.c`](04-header-files/02-main.c) — Program Entry Point for Custom Headers (02:06:00)
- `03` → [`03-math_utils.c`](04-header-files/03-math_utils.c) — Custom Header Implementation File (02:07:00)

### `05-conditional-statements/`
- `01` → [`01-traffic_light_signal.c`](05-conditional-statements/01-traffic_light_signal.c) — Traffic Light Signal Decision (02:17:29)
- `02` → [`02-pass_or_fail.c`](05-conditional-statements/02-pass_or_fail.c) — Student Pass / Fail Check (02:18:45)
- `03` → [`03-if_else.c`](05-conditional-statements/03-if_else.c) — If-Else Branching Basics (02:22:00)
- `04` → [`04-nested_if.c`](05-conditional-statements/04-nested_if.c) — Nested If-Else Statements (02:30:00)
- `05` → [`05-greater_of_two_numbers.c`](05-conditional-statements/05-greater_of_two_numbers.c) — Find Greater of Two Numbers (02:35:41)
- `06` → [`06-check_even_odd.c`](05-conditional-statements/06-check_even_odd.c) — Check Even or Odd Number (02:37:12)
- `07` → [`07-check_voting_eligibility.c`](05-conditional-statements/07-check_voting_eligibility.c) — Voting Age Eligibility (02:41:31)
- `08` → [`08-vowel_or_consonant.c`](05-conditional-statements/08-vowel_or_consonant.c) — Check Vowel or Consonant (02:44:39)
- `09` → [`09-check_leap_year.c`](05-conditional-statements/09-check_leap_year.c) — Leap Year Checker (02:48:59)
- `10` → [`10-movie_rating_system.c`](05-conditional-statements/10-movie_rating_system.c) — Movie Rating System (03:00:02)
- `11` → [`11-shop_discount.c`](05-conditional-statements/11-shop_discount.c) — Shop Tiered Discount Calculator (03:04:09)
- `12` → [`12-ternary.c`](05-conditional-statements/12-ternary.c) — Ternary Conditional Operator (?:) (03:06:13)
- `13` → [`13-type_conversion.c`](05-conditional-statements/13-type_conversion.c) — Implicit Conversion & Explicit Casting (03:09:11)
- `14` → [`14-switch.c`](05-conditional-statements/14-switch.c) — Day of Week Using switch (03:12:44)
- `15` → [`15-switch_vowel_fallthrough.c`](05-conditional-statements/15-switch_vowel_fallthrough.c) — Switch Fall-through for Vowel Check (03:24:45)

### `06-loops/`
- `01` → [`01-for_loop.c`](06-loops/01-for_loop.c) — Print Numbers 1 to N Using for (03:29:24)
- `02` → [`02-for_loop_reverse_countdown.c`](06-loops/02-for_loop_reverse_countdown.c) — Reverse Countdown N to 1 (03:50:29)
- `03` → [`03-sum_and_average_1_to_n.c`](06-loops/03-sum_and_average_1_to_n.c) — Sum & Average of 1 to N (03:50:33)
- `04` → [`04-multiplication_table.c`](06-loops/04-multiplication_table.c) — Multiplication Table (03:53:00)
- `05` → [`05-factorial_of_number.c`](06-loops/05-factorial_of_number.c) — Factorial of a Number (03:55:32)
- `06` → [`06-factors_of_number.c`](06-loops/06-factors_of_number.c) — Find All Factors of a Number (03:57:17)
- `07` → [`07-check_prime_number.c`](06-loops/07-check_prime_number.c) — Prime Number Check (03:59:18)
- `08` → [`08-while_loop.c`](06-loops/08-while_loop.c) — while Loop Syntax & Control (04:05:00)
- `09` → [`09-while_loop_sum_of_digits.c`](06-loops/09-while_loop_sum_of_digits.c) — Extract Digits & Sum of Digits (04:09:11)
- `10` → [`10-while_loop_reverse_number.c`](06-loops/10-while_loop_reverse_number.c) — Reverse an Integer (04:13:32)
- `11` → [`11-check_palindrome_number.c`](06-loops/11-check_palindrome_number.c) — Palindrome Number Check (04:18:19)
- `12` → [`12-do_while.c`](06-loops/12-do_while.c) — do-while Loop Demonstration (04:20:15)
- `13` → [`13-guess_the_number_game.c`](06-loops/13-guess_the_number_game.c) — Guess the Number Game (04:30:02)
- `14` → [`14-nested_loops.c`](06-loops/14-nested_loops.c) — Nested Loops Introduction (04:31:30)
- `15` → [`15-pattern_solid_square.c`](06-loops/15-pattern_solid_square.c) — Pattern: Solid Square (04:32:27)
- `16` → [`16-pattern_right_triangle.c`](06-loops/16-pattern_right_triangle.c) — Pattern: Right Triangle (04:38:10)
- `17` → [`17-pattern_inverted_triangle.c`](06-loops/17-pattern_inverted_triangle.c) — Pattern: Inverted Right Triangle (04:44:30)
- `18` → [`18-pattern_number_triangle.c`](06-loops/18-pattern_number_triangle.c) — Pattern: Number Triangle (04:50:15)
- `19` → [`19-pattern_mirrored_triangle.c`](06-loops/19-pattern_mirrored_triangle.c) — Pattern: Mirrored Right Triangle (05:21:07)
- `20` → [`20-pattern_pyramid.c`](06-loops/20-pattern_pyramid.c) — Pattern: Full Pyramid (05:24:50)

### `07-algorithms/`
- `01` → [`01-linear_search.c`](07-algorithms/01-linear_search.c) — Linear Search in Array (07:11:01)

### `08-debugging/`
- `01` → [`01-debugging_basics.c`](08-debugging/01-debugging_basics.c) — Debugging Workflow & Breakpoints (04:59:00)

### `09-functions/`
- `01` → [`01-functions.c`](09-functions/01-functions.c) — Function Declaration, Definition, Call (05:35:02)
- `02` → [`02-parameters.c`](09-functions/02-parameters.c) — Arguments & Pass-by-Value (05:42:37)
- `03` → [`03-return_values.c`](09-functions/03-return_values.c) — Return Types & Values (05:46:00)
- `04` → [`04-function_check_even_odd.c`](09-functions/04-function_check_even_odd.c) — Function: Even or Odd (05:51:18)
- `05` → [`05-function_find_maximum.c`](09-functions/05-function_find_maximum.c) — Function: Maximum of Two (05:53:44)
- `06` → [`06-function_factorial.c`](09-functions/06-function_factorial.c) — Function: Factorial (05:59:31)
- `07` → [`07-menu_driven_calculator.c`](09-functions/07-menu_driven_calculator.c) — Menu-Driven Calculator (06:05:48)
- `08` → [`08-recursion_print_1_to_n.c`](09-functions/08-recursion_print_1_to_n.c) — Recursion: Print 1 to N (06:16:32)
- `09` → [`09-recursion.c`](09-functions/09-recursion.c) — Recursion: Factorial (06:17:59)
- `10` → [`10-recursion_fibonacci.c`](09-functions/10-recursion_fibonacci.c) — Recursion: N-th Fibonacci (06:19:10)

### `10-arrays/`
- `01` → [`01-arrays.c`](10-arrays/01-arrays.c) — Array Input & Traversal (06:23:58)
- `02` → [`02-array_sum_and_average.c`](10-arrays/02-array_sum_and_average.c) — Sum & Average of Array (06:44:55)
- `03` → [`03-array_max_and_min.c`](10-arrays/03-array_max_and_min.c) — Find Maximum & Minimum (06:58:10)
- `04` → [`04-array_reverse.c`](10-arrays/04-array_reverse.c) — In-place Reverse Array (07:03:00)
- `05` → [`05-array_left_rotate_by_one.c`](10-arrays/05-array_left_rotate_by_one.c) — Left Rotate Array by 1 (07:07:21)
- `06` → [`06-multidimensional_arrays.c`](10-arrays/06-multidimensional_arrays.c) — 2D Matrix Input & Display (07:19:22)
- `07` → [`07-matrix_diagonal_sum.c`](10-arrays/07-matrix_diagonal_sum.c) — Diagonal Sum of Square Matrix (07:26:52)

### `11-strings/`
- `01` → [`01-strings.c`](11-strings/01-strings.c) — String Input & Output (fgets, puts) (07:37:28)
- `02` → [`02-string_functions.c`](11-strings/02-string_functions.c) — Standard Library Functions (strlen, strcpy, strcat, strcmp) (07:41:07)
- `03` → [`03-string_custom_length.c`](11-strings/03-string_custom_length.c) — Calculate Length Without strlen (07:47:00)
- `04` → [`04-string_check_palindrome.c`](11-strings/04-string_check_palindrome.c) — Palindrome String Check (07:47:47)
- `05` → [`05-string_problems.c`](11-strings/05-string_problems.c) — String Manipulation Techniques (07:50:00)
- `06` → [`06-string_toggle_case.c`](11-strings/06-string_toggle_case.c) — Toggle Case of Characters (07:52:28)

### `12-pointers/`
- `01` → [`01-pointer_basics.c`](12-pointers/01-pointer_basics.c) — Address-of (&) & Dereference (*) (08:05:52)
- `02` → [`02-swap_by_reference.c`](12-pointers/02-swap_by_reference.c) — Swap Two Numbers Using Pointers (08:08:27)
- `03` → [`03-pointer_arithmetic.c`](12-pointers/03-pointer_arithmetic.c) — Pointer Arithmetic & Offsets (08:10:00)
- `04` → [`04-pointers_and_arrays.c`](12-pointers/04-pointers_and_arrays.c) — Arrays as Constant Pointers (08:10:50)

### `13-structures/`
- `01` → [`01-struct.c`](13-structures/01-struct.c) — Declaration, Initialization & Access (08:11:27)
- `02` → [`02-struct_size_and_padding.c`](13-structures/02-struct_size_and_padding.c) — Structure Size & Memory Alignment Padding (08:18:17)
- `03` → [`03-struct_pointer_arrow_operator.c`](13-structures/03-struct_pointer_arrow_operator.c) — Structure Pointers & Arrow Operator (->) (08:21:12)
- `04` → [`04-struct_array_records.c`](13-structures/04-struct_array_records.c) — Array of Structures (Student Records) (08:26:19)
- `05` → [`05-typedef.c`](13-structures/05-typedef.c) — Type Aliasing with typedef (08:30:00)
- `06` → [`06-nested_struct.c`](13-structures/06-nested_struct.c) — Nested Structures (08:34:00)

### `14-unions/`
- `01` → [`01-union.c`](14-unions/01-union.c) — Union Shared Memory Demonstration (08:39:41)

### `15-constants-and-enums/`
- `01` → [`01-preprocessor_define_macros.c`](15-constants-and-enums/01-preprocessor_define_macros.c) — Preprocessor #define & Macros (08:56:40)
- `02` → [`02-constants.c`](15-constants-and-enums/02-constants.c) — Read-only Constants via const (09:01:15)
- `03` → [`03-enum.c`](15-constants-and-enums/03-enum.c) — Enumerated Types (enum) (09:04:00)

### `16-dynamic-memory/`
- `01` → [`01-malloc.c`](16-dynamic-memory/01-malloc.c) — Dynamic Memory Allocation with malloc (09:15:23)
- `02` → [`02-calloc.c`](16-dynamic-memory/02-calloc.c) — Contiguous Zero-Initialized Allocation with calloc (09:24:00)
- `03` → [`03-realloc.c`](16-dynamic-memory/03-realloc.c) — Resizing Heap Memory with realloc (09:26:23)
- `04` → [`04-free.c`](16-dynamic-memory/04-free.c) — Freeing Memory & Avoiding Dangling Pointers (09:29:30)

### `17-file-handling/`
- `01` → [`01-file_write.c`](17-file-handling/01-file_write.c) — File Creation & Writing ("w" mode) (09:30:31)
- `02` → [`02-file_read.c`](17-file-handling/02-file_read.c) — Reading from File ("r" mode) (09:48:53)
- `03` → [`03-file_operations.c`](17-file-handling/03-file_operations.c) — Reading Until EOF & Stream Closing (09:53:25)
- `04` → [`04-file_append_data.c`](17-file-handling/04-file_append_data.c) — Appending Data ("a" mode) (10:02:16)

### `18-projects/`
- `01` → [`01-student_management_system.c`](18-projects/01-student_management_system.c) — Course Capstone: Student Management System (10:09:58)

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

* [Examples & Practice Index](examples.md) - Master tracking table of all 108 course examples with video timestamps.
* [C Cheatsheet](notes/c-cheatsheet.md) - Syntax, format specifiers, data type sizes, standard headers.
* [Important Concepts](notes/important-concepts.md) - Deep dive into stack vs heap, pointer mechanics, buffer safety.
* [Mistakes Log](notes/mistakes.md) - Personal journal of compiler errors, logic pitfalls, and bug fixes.

---

## 📜 License

This repository is open source and available under the [MIT License](LICENSE).
