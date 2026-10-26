*This project has been created as part of the 42 curriculum by hes-sofy.*

# 📚 Libft

## 🎯 1. Description

**Libft** is a foundational project in the **42 / 1337 curriculum**. Its goal is to recreate standard C library functions and develop additional utilities to gain a deeper understanding of how they work internally.

The project focuses on essential C programming concepts, including pointers, memory management, string manipulation, and linked lists.

Libft contains **43 functions divided into three parts**, compiled into a static library named `libft.a` that can be reused in future C projects.

### 🧩 Part 1 — Libc Functions (23 functions)

Reimplementation of standard C library functions for character classification, string manipulation, and memory operations.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills a memory region with a specified byte value. |
| `ft_bzero` | Sets a specified number of bytes to zero. |
| `ft_memcpy` | Copies a specified number of bytes between memory regions. |
| `ft_memmove` | Copies memory while handling overlapping regions. |
| `ft_strlcpy` | Copies a string with a specified destination size limit. |
| `ft_strlcat` | Concatenates strings with a specified destination size limit. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_memchr` | Searches for a byte within a memory region. |
| `ft_memcmp` | Compares two memory regions byte by byte. |
| `ft_strnstr` | Searches for a substring within a specified search length. |
| `ft_atoi` | Converts the initial numeric portion of a string into an integer. |
| `ft_calloc` | Allocates memory for multiple elements and initializes it to zero. |
| `ft_strdup` | Creates a dynamically allocated copy of a string. |

### 🛠️ Part 2 — Additional Functions (11 functions)

Additional utilities for string processing, conversion, and output.

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring from a specified starting index and maximum length. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_strmapi` | Creates a new string by applying a function to each character and its index. |
| `ft_striteri` | Applies a function to each character of a string, passing its index. |
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### 🔗 Part 3 — Linked Lists (9 functions)

Implementation of functions for creating, manipulating, traversing, and freeing singly linked lists.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node and frees its content using a specified function. |
| `ft_lstclear` | Deletes and frees a node and all its successors. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

### 🔧 Technical Notes

- **`ft_calloc`:** Handles zero-size requests according to the project requirements and checks for allocation-size overflow.
- **`ft_split`:** Frees previously allocated strings and the array if an allocation fails, then returns `NULL`.
- **`ft_lstmap`:** Frees the partially created list using the provided deletion function if an allocation fails, then returns `NULL`.
- **Linked Lists:** The linked-list functions include `NULL` checks where relevant.

## ⚙️ 2. Instructions

### Requirements

- A C compiler (`cc`).
- `make`.
- `ar` for creating the static library.

### Compilation

Run the following command from the project root:

```bash
make
```

This compiles the source files and creates `libft.a` at the root of the repository.

### Makefile Rules

| Command | Description |
|---|---|
| `make` | Builds the library. |
| `make clean` | Removes the object files (`.o`). |
| `make fclean` | Removes the object files and `libft.a`. |
| `make re` | Rebuilds the library from scratch. |

### Using the Library

Include `libft.h` in your C source files and link the generated `libft.a` library when compiling a program that uses Libft functions.

For example:

```c
#include "libft.h"
```

Compile and link your program with:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o app
```

This example assumes that `main.c`, `libft.h`, and `libft.a` are located in the current directory.

## 🧠 3. Technical Concepts & Standards

The project covers several fundamental C programming concepts:

- **Pointers:** Working with memory addresses and accessing data.
- **Memory Management:** Allocating, using, and freeing dynamically allocated memory.
- **String and Memory Manipulation:** Processing strings and working directly with memory at the byte level.
- **Linked Lists:** Creating nodes, traversing lists, and managing their contents.
- **Error Handling:** Handling allocation failures and relevant edge cases.

### Project Standards

- Written in C and compiled using `cc` with `-Wall -Wextra -Werror`.
- Uses `ar` to create the static library.
- Contains no global variables, as required by the subject.
- Includes the required Makefile rules: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- Follows the project specifications and avoids unnecessary relinking.

## 🚀 4. Skills & Learning Outcomes

Through Libft, I developed and strengthened the following skills:

- **C Programming:** Deepened my understanding of C functions and data handling.
- **Pointers and Memory:** Improved my understanding of pointers, dynamic allocation, and deallocation.
- **String Manipulation:** Gained practical experience working with strings and memory.
- **Linked Lists:** Learned to create, manage, and manipulate linked data structures.
- **Problem Solving:** Practiced breaking down problems into smaller, reusable functions.
- **Debugging and Testing:** Practiced investigating bugs and checking function behavior with different inputs.
- **Code Organization:** Built a reusable static library for future C projects.

## 📖 5. Resources

### References

- **Libft Subject — 42 / 1337:** Project requirements, function specifications, and evaluation guidelines.
- **C Library Manual Pages:** Documentation for standard functions such as `strlen`, `memcpy`, and `calloc`.
- **cppreference — C Language:** https://en.cppreference.com/w/c
- **GNU Make Manual:** https://www.gnu.org/software/make/manual/

### 🤖 AI Usage

AI was used as a learning aid to support my understanding and testing of the project.

- **🧠 Code Review and Understanding:** After implementing the functions, I used AI as a tutor to review my understanding through questions about memory management, edge cases, and data types.
- **💡 Technical Explanations:** I used AI to clarify concepts such as pointers, `t_list **`, the difference between `head->next` and `head->next->content`, file descriptors, and the causes of segmentation faults in test programs.
- **🧪 Testing Guidance:** I used AI to better understand testing approaches and how to verify function behavior using practical examples and different test cases.

I wrote the implementations of all 43 library functions and the Makefile myself. AI assisted me with learning, understanding concepts, and testing, rather than writing the library implementations or the Makefile.