# Algorithms: Flowcharts and Pseudocode

Before writing code in C, algorithms are planned using flowcharts and pseudocode to structure logic clearly.

---

## 1. Flowchart Symbols

| Symbol | Name | Description |
| :--- | :--- | :--- |
| Oval | Terminator | Start and End points |
| Parallelogram | Input / Output | Reading user input or displaying results |
| Rectangle | Process | Computations, assignments, data manipulations |
| Diamond | Decision | Conditional branching (True / False paths) |
| Arrows | Flowlines | Indicates the execution path |

---

## 2. Pseudocode Conventions

Pseudocode is language-agnostic structured English:

```text
Algorithm: FindMaximum(A, B)
Input: Two numbers A and B
Output: The larger of the two numbers

BEGIN
    PROMPT "Enter first number: "
    READ A
    PROMPT "Enter second number: "
    READ B

    IF A > B THEN
        SET Max = A
    ELSE
        SET Max = B
    ENDIF

    PRINT "Maximum is: ", Max
END
```

---

## 3. Translating to C

Take pseudocode step-by-step:
1. Replace `READ` / `PRINT` with `scanf` / `printf`.
2. Map variables to C data types (`int`, `float`, etc.).
3. Translate `IF / THEN / ELSE` into C `if (...) { ... } else { ... }`.
