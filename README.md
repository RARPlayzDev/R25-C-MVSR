# R25-C-MVSR

Complete collection of C programming programs following the R25 Syllabus by MVSR (Maturi Venkata Subba Rao Engineering College).

## Overview

This repository contains a comprehensive set of C programs covering fundamental to intermediate level concepts including string manipulation, record handling, basic algorithms, and more. All programs are designed to help students understand core C programming principles.

## Repository Structure

```
R25-C-MVSR/
├── Beginners C/                       # Basic C Programs
├── Record Programs/                   # Record Programs
└── String Programs                    # String manipulation programs
```

## Program Categories

### String Programs (string1.c - string6.c)
- String manipulation and operations
- String copying with malloc
- String case conversion (strupper, strlower)
- User-defined string functions

### Beginners C Programs
Fundamental C programs for learning basic concepts:
- **areacr.c** - Calculate area of a circle
- **areasq.c** - Calculate area of a square
- **factor.c** - Calculate factorial of a number
- **hello.c** - Introduction to C (Hello World)
- **intrest.c** - Calculate simple interest
- **uplow.c** - Convert between uppercase and lowercase

### Record Programs (Q1-Q25)
Advanced programs covering:
- Structures and records
- File handling
- Array operations
- Complex data manipulation
- Problem-solving with records

## Getting Started

### Requirements
- GCC Compiler (or any C compiler)
- Linux/Unix/Windows environment with terminal access

### Compilation

To compile any program:
```bash
gcc -o program_name program_name.c
```

Example:
```bash
gcc -o hello hello.c
gcc -o string6 string6.c
```

### Running Programs

Execute the compiled program:
```bash
./program_name          # Linux/Unix
program_name.exe        # Windows
```

Example:
```bash
./hello
./string6
```


## Compilation and Execution Tips

1. **Compile with warnings:**
   ```bash
   gcc -Wall -o program_name program_name.c
   ```

2. **Compile with debugging symbols:**
   ```bash
   gcc -g -o program_name program_name.c
   ```

3. **Compile with optimization:**
   ```bash
   gcc -O2 -o program_name program_name.c
   ```

4. **Clean compiled files:**
   ```bash
   rm *.o *.exe
   ```

## Learning Path

Suggested learning order:
1. Start with **Beginners C** programs to understand fundamentals
2. Progress to **String Programs** for string manipulation
3. Complete **Record Programs (Q1-Q25)** for advanced concepts

## Key Concepts Covered

- Variables and Data Types
- Input/Output Operations
- Control Structures (if-else, loops)
- Functions and Recursion
- Arrays and Strings
- Structures (Records)
- Pointers and Dynamic Memory Allocation
- File Handling
- Searching and Sorting Algorithms

## Notes

- All programs are educational and designed for learning purposes
- Comments are provided where necessary for clarity
- Programs follow standard C conventions
- Some programs may require specific input formats

## Troubleshooting

**Common Issues:**

1. **Compilation Error: command not found**
   - Ensure GCC is installed and in your PATH

2. **Runtime Errors**
   - Check input formats expected by the program
   - Verify file paths for file I/O programs

3. **Memory Issues**
   - Programs using malloc ensure proper free() calls
   - Check for memory leaks in larger programs

## Author

RARPlayz aka Kaarthikeyan
MVSREC (Maturi Venkata Subba Rao Engineering College)

## Version

Version 1.0 - Initial Release

## License

Educational Use Only

---

**Last Updated:** 2026

**Total Programs:** 30+ C Programs
