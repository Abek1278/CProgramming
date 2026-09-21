# Important C Concepts to Master Deeply

Key conceptual foundations for building a solid understanding of C and low-level computer architecture.

---

## 1. Memory Layout: Stack vs Heap

Programs are allocated virtual memory divided into distinct regions:

```
+------------------------------------+ High Memory
| Stack (Local variables, frames)    |  ↓ Grows downward
+------------------------------------+
|                ↓                   |
|                ↑                   |
+------------------------------------+
| Heap (Dynamic memory: malloc/free) |  ↑ Grows upward
+------------------------------------+
| BSS / Data (Global & static vars)  |
+------------------------------------+
| Text / Code (Compiled instructions)|
+------------------------------------+ Low Memory
```

* **Stack**: Fast, automatic allocation and deallocation, managed by CPU/compiler. Limited in size; local variables disappear when their scope ends.
* **Heap**: Manual allocation (`malloc`, `calloc`), persists until explicitly freed with `free()`. Larger capacity, but prone to leaks if forgotten.

---

## 2. Pointers Demystified

A pointer is simply a variable whose value is the **memory address** of another variable.

```c
int score = 95;
int *ptr = &score; // ptr holds the memory address of score

printf("Address: %p\n", (void*)ptr);
printf("Value:   %d\n", *ptr);  // Dereferencing: read value at address
*ptr = 100;                     // Mutate value directly in memory
```

* `&` (Address-of operator): "Where is this variable located?"
* `*` (Dereference operator): "Give me the value stored at this address."

---

## 3. Pass by Value vs "Pass by Reference" (Simulated via Pointers)

In C, **everything is passed by value**. When you pass an argument to a function, a copy is made.

To modify the original variable inside a function, pass its memory address:

```c
// Does NOT modify original
void badSwap(int a, int b) {
    int temp = a; a = b; b = temp;
}

// DOES modify original by dereferencing pointers
void goodSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

---

## 4. Strings are Null-Terminated Arrays

In C, there is no primitive `string` type. A string is an array of characters terminated by the null character `'\0'` (ASCII code 0).

* An array holding `"Hello"` requires at least 6 bytes: `'H'`, `'e'`, `'l'`, `'l'`, `'o'`, `'\0'`.
* Without `'\0'`, string functions (`printf("%s")`, `strlen`) will read past the array boundary into invalid memory.

---

## 5. Buffer Overflows & Bounds Safety

C does not perform bounds checking on arrays. Accessing index `arr[10]` on an array of 5 elements is undefined behavior (can corrupt stack frames, cause segmentation faults, or create security vulnerabilities).
