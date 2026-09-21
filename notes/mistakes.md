# Common Mistakes & Pitfalls Log

A running journal to document mistakes encountered, why they happen, and how to fix them.

---

## 1. Missing the Address-of (`&`) Operator in `scanf`

* **Symptom**: Segmentation fault or garbage input values.
* **Why it happens**: `scanf` expects a pointer to store the parsed input. Passing `age` passes the integer value rather than the memory address.
* **Bad**:
  ```c
  int age;
  scanf("%d", age); // Bug!
  ```
* **Fix**:
  ```c
  int age;
  scanf("%d", &age); // Correct
  ```
  *(Note: Array names decay to pointers, so `scanf("%s", str)` does not use `&`).*

---

## 2. Forgetting the String Null-Terminator (`\0`)

* **Symptom**: Garbage characters printed after strings, or crashes when calling `strlen`.
* **Why it happens**: Allocating exact character count without an extra byte for `'\0'`.
* **Bad**:
  ```c
  char word[4] = "code"; // Bug: 'c','o','d','e' fills all 4 bytes, no space for '\0'!
  ```
* **Fix**:
  ```c
  char word[5] = "code"; // Correct: 4 chars + 1 null terminator
  // Or let compiler calculate size:
  char word[] = "code";
  ```

---

## 3. Off-by-One Errors in Loops

* **Symptom**: Reading or writing out-of-bounds array elements.
* **Bad**:
  ```c
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i <= 5; i++) { // Bug: index 5 is out of bounds!
      printf("%d ", arr[i]);
  }
  ```
* **Fix**:
  ```c
  for (int i = 0; i < 5; i++) {
      printf("%d ", arr[i]);
  }
  ```

---

## 4. Integer Division Truncation

* **Symptom**: `5 / 2` evaluates to `2` instead of `2.5`.
* **Why it happens**: In C, dividing two integers performs integer division, discarding any fractional remainder.
* **Bad**:
  ```c
  float result = 5 / 2; // result becomes 2.000000
  ```
* **Fix**:
  ```c
  float result = 5.0f / 2; // result becomes 2.500000
  // Or with explicit cast:
  int a = 5, b = 2;
  float result = (float)a / b;
  ```

---

## 5. Dangling Pointers and Memory Leaks

* **Symptom**: Memory usage grows unbounded, or accessing freed memory corrupts data.
* **Fix Rule**:
  1. Every `malloc` / `calloc` must have a corresponding `free`.
  2. After `free(ptr)`, set `ptr = NULL;` so subsequent accidental reads/writes fail fast.
