*This project has been created as part of the 42 curriculum by hes-sofy.*

# Libft

## 1. Description

Libft is a C library developed as part of the 42/1337 curriculum. It recreates common C library functions and adds utilities for string manipulation and linked lists.

The library contains 43 functions divided into three parts and is compiled into a static library named `libft.a`.

### Part 1 — Libc Functions (23 functions)

These functions cover character checks, strings, and memory operations.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is a letter. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is a letter or digit. |
| `ft_isascii` | Checks whether a value belongs to ASCII (0–127). |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_strlen` | Returns the length of a string. |
| `ft_memset` | Fills a memory area with a byte value. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies bytes between memory areas. |
| `ft_memmove` | Copies bytes while handling overlapping regions. |
| `ft_strlcpy` | Copies a string within a specified size. |
| `ft_strlcat` | Appends a string within a specified size. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Finds the first occurrence of a character. |
| `ft_strrchr` | Finds the last occurrence of a character. |
| `ft_strncmp` | Compares two strings up to a given length. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_strnstr` | Searches for a substring within a given length. |
| `ft_atoi` | Converts the initial numeric part of a string to an integer. |
| `ft_calloc` | Allocates memory and initializes it to zero. |
| `ft_strdup` | Creates a dynamically allocated copy of a string. |

### Part 2 — Additional Functions (11 functions)

These functions handle string operations, conversions, and output.

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring from a starting index and maximum length. |
| `ft_strjoin` | Joins two strings into a new string. |
| `ft_strtrim` | Removes specified characters from both ends of a string. |
| `ft_split` | Splits a string using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Creates a string by applying a function to each character and its index. |
| `ft_striteri` | Applies a function to each character, allowing it to be modified. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 — Linked Lists (9 functions)

These functions create, manage, traverse, and free singly linked lists.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Frees one node and its content using a deletion function. |
| `ft_lstclear` | Frees a node and all its successors. |
| `ft_lstiter` | Applies a function to each node's content. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## 2. Instructions

### Requirements

- A C compiler (`cc`).
- `make`.
- `ar` to create the static library.

### Compilation

Run the following command from the project root:

```bash
make
```

This compiles the source files and creates `libft.a`.

### Makefile Commands

| Command | Description |
|---|---|
| `make` | Builds the library. |
| `make clean` | Removes the object files (`.o`). |
| `make fclean` | Removes the object files and `libft.a`. |
| `make re` | Cleans and rebuilds the library. |

### Using the Library

Include the header in your C source file:

```c
#include "libft.h"
```

Compile and link your program with the library:

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o app
```

Then run it:

```bash
./app
```

## 3. Resources

- [Libft Subject — 42/1337](https://www.42network.org/)
- [W3Schools — C Tutorial](https://www.w3schools.com/c/)
- [Programiz — C Programming](https://www.programiz.com/c-programming)

### AI Usage

I used AI to clarify C concepts, understand errors, review code, and explore test cases while working on the three parts of Libft. I checked the suggestions against the subject and tested the code locally.