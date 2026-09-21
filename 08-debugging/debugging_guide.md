# Debugging Guide for C

Effective strategies for finding and resolving bugs in C programs.

---

## 1. Compiler Flags are Your Best Friend

Always compile with warning flags enabled to catch mistakes at compile-time:

```bash
gcc -Wall -Wextra -std=c99 your_file.c -o your_file
```

* `-Wall`: Enables all common compiler warnings.
* `-Wextra`: Enables additional helpful warnings.
* `-g`: Adds debug symbols for tools like GDB.

---

## 2. Printf Debugging

When a program misbehaves:
1. Print variable values at key transition points:
   ```c
   printf("[DEBUG] line %d: counter = %d\n", __LINE__, counter);
   ```
2. Flush the stdout buffer if experiencing immediate crashes:
   ```c
   fflush(stdout);
   ```

---

## 3. GDB (GNU Debugger) Quick Commands

```bash
# Compile with debug info
gcc -g program.c -o program

# Launch GDB
gdb ./program

# Inside GDB:
(gdb) run                # Run the program
(gdb) break main         # Set breakpoint at main
(gdb) break file.c:25    # Set breakpoint at line 25
(gdb) next               # Step over next line
(gdb) step               # Step into function
(gdb) print variableName # Print variable value
(gdb) backtrace          # Show call stack upon crash (segfault)
(gdb) quit               # Exit GDB
```
