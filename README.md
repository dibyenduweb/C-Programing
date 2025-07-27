# 📚 C Programming Tutorial: From Basics to Advanced

&#x20;&#x20;

A complete C programming tutorial with examples covering fundamental concepts to advanced topics. Perfect for beginners and intermediate programmers looking to master C.

## 📌 Table of Contents

## 🚀 Introduction

C is a procedural programming language developed in 1972 by Dennis Ritchie at Bell Labs. It's considered the mother of all modern programming languages and is widely used in:

* Operating systems development
* Embedded systems
* Game development
* System programming
* High-performance applications

## 🛠️ Getting Started

### Detailed Installation Guide

**Windows Setup:**

1. Download MinGW from [mingw-w64.org](https://mingw-w64.org/)
2. Run the installer and select:

   * Architecture: x86\_64
   * Threads: posix
   * Exception: seh
3. Add `C:\MinGW\bin` to your system PATH
4. Verify with `gcc --version` in Command Prompt

**Linux Setup (Debian/Ubuntu):**

```bash
sudo apt update
sudo apt install build-essential
sudo apt install gdb # For debugging
```

**MacOS Setup:**

```bash
xcode-select --install # Install Xcode tools
brew install gcc
```

### Your First C Program Tutorial

1. Create a file named `hello.c`

```c
#include <stdio.h> // Standard Input/Output library

/* This is a multi-line comment
   The main function is program's entry point */
int main() {
    // Single line comment
    printf("Hello, World!\n"); // \n for new line
    return 0; // Exit status
}
```

2. Compile and run:

```bash
gcc hello.c -o hello  # Compile
./hello               # Execute
```

## 📚 Basic Concepts

### Variables and Data Types Tutorial

```c
#include <stdio.h>
#include <limits.h>

int main() {
    // Integer types
    short s = 32767;                  // 2 bytes
    int i = 2147483647;               // 4 bytes (usually)
    long l = 9223372036854775807L;    // 8 bytes

    // Floating-point types
    float f = 3.14159f;               // 4 bytes
    double d = 3.141592653589793;     // 8 bytes

    // Character type
    char c = 'A';                     // 1 byte

    printf("Short max: %hd\n", SHRT_MAX);
    printf("Int max: %d\n", INT_MAX);
    printf("Float precision: %.5f\n", f);

    return 0;
}
```

### Constants and Literals Tutorial

```c
#include <stdio.h>
#define PI 3.14159 // Macro constant

int main() {
    const int MAX = 100; // Constant variable

    // Different number systems
    int decimal = 100;
    int octal = 0144;    // Prefix with 0
    int hex = 0x64;      // Prefix with 0x

    printf("PI: %.5f\n", PI);
    printf("MAX: %d\n", MAX);
    printf("Hex 0x64 = %d\n", hex);

    return 0;
}
```

## 🔀 Control Structures

### If-Else Tutorial with Examples

```c
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Simple if
    if(age >= 18) {
        printf("You can vote!\n");
    }

    // If-else ladder
    if(age < 13) {
        printf("Child\n");
    }
    else if(age < 20) {
        printf("Teenager\n");
    }
    else {
        printf("Adult\n");
    }

    // Ternary operator
    (age >= 21) ? printf("Legal drinking age\n") : printf("Underage\n");

    return 0;
}
```

### Loop Structures Tutorial

```c
#include <stdio.h>

int main() {
    // For loop - count up
    printf("Counting up:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // While loop - count down
    printf("\nCounting down:\n");
    int j = 5;
    while(j > 0) {
        printf("%d ", j);
        j--;
    }

    // Do-while loop - runs at least once
    printf("\nDo-while example:\n");
    int k = 10;
    do {
        printf("%d ", k);
        k++;
    } while(k < 5); // Condition fails but runs once

    return 0;
}
```

## 📋 Functions

### Complete Function Tutorial

```c
#include <stdio.h>

// Function prototype (declaration)
int multiply(int a, int b);

// Main function
int main() {
    int x = 5, y = 3;
    int result = multiply(x, y);
    printf("%d * %d = %d\n", x, y, result);

    // Function with no return value
    print_hello();

    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}

void print_hello() {
    printf("Hello from function!\n");
}
```

### Recursion Tutorial

```c
#include <stdio.h>

// Recursive factorial function
unsigned long factorial(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num = 5;
    printf("Factorial of %d is %lu\n", num, factorial(num));

    // Fibonacci sequence
    printf("Fibonacci sequence:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}

// Recursive Fibonacci
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
```

## 🧩 Arrays & Pointers

### Comprehensive Array Tutorial

```c
#include <stdio.h>

int main() {
    // 1D Array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Array traversal
    printf("1D Array:\n");
    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // 2D Array (matrix)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\n2D Array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Pointer Deep Dive

```c
#include <stdio.h>

int main() {
    int var = 42;
    int *ptr = &var;

    printf("Variable value: %d\n", var);
    printf("Pointer holds address: %p\n", ptr);
    printf("Dereferenced value: %d\n", *ptr);

    // Pointer arithmetic
    printf("\nPointer Arithmetic:\n");
    int arr[3] = {10, 20, 30};
    int *arr_ptr = arr;

    for(int i = 0; i < 3; i++) {
        printf("arr[%d] = %d at %p\n",
               i, *(arr_ptr + i), arr_ptr + i);
    }

    // Pointer to pointer
    int **pptr = &ptr;
    printf("\nPointer to pointer:\n");
    printf("Original value: %d\n", **pptr);

    return 0;
}
```

## 🤝 How to Contribute

We welcome contributions! Here's a detailed guide:

1. **Setting Up:**

   ```bash
   git clone https://github.com/yourusername/c-programming-tutorial.git
   cd c-programming-tutorial
   ```

2. **Creating a Branch:**

   ```bash
   git checkout -b feature/new-tutorial-section
   ```

3. **Coding Standards:**

   * Follow ANSI C standards
   * Use descriptive variable names
   * Include comments explaining complex logic
   * Keep line length under 80 characters

4. **Commit Message Format:**

   ```
   [Category]: Brief description

   Detailed explanation (if needed)
   ```

5. **Example Commit:**

   ```
   [Functions]: Add recursion tutorial

   Added detailed examples of recursive functions including:
   - Factorial calculation
   - Fibonacci sequence
   - Explanation of base cases
   ```

## 📜 License

MIT License

Copyright (c) \[year] \[fullname]

Permission is hereby granted... (standard MIT license text)

---

Happy Coding! 💻✨ Let's build something amazing together!
