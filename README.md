*This project has been created as part of the 42 curriculum by hes-sofy.*

# 📚 Libft

## 🎯 1. Project Overview

**Libft** is one of the first projects in the **42 / 1337 curriculum**. Its main goal is to recreate a set of standard C library functions and develop additional utilities for string manipulation, memory management, and linked lists.

This project helps develop a deeper understanding of how these functions work internally while strengthening essential C programming skills, particularly in pointers and memory management.

Libft contains **43 functions** divided into three parts, compiled into a static library named `libft.a` that can be reused in future C projects.

## 🗂️ 2. Project Structure

The project is organized into three main parts, each focusing on different aspects of C programming.

### 🧩 Part 1 — Standard C Functions (23 functions)

Reimplementation of fundamental functions for working with strings and memory.

- `ft_memmove` — Copies memory while handling overlapping regions.
- `ft_strlcat` — Concatenates strings with a specified size limit.
- `ft_strnstr` — Searches for a substring within a limited length.
- `ft_calloc` — Allocates memory and initializes it to zero.

### 🛠️ Part 2 — Additional Functions (11 functions)

A collection of utilities for string manipulation, conversion, and output.

- `ft_substr` — Extracts a substring from a string.
- `ft_strtrim` — Removes specified characters from the beginning and end of a string.
- `ft_split` — Splits a string into an array of strings using a delimiter.
- `ft_itoa` — Converts an integer into a string.

### 🔗 Part 3 — Linked Lists (9 functions)

Implementation of functions for creating, managing, and freeing linked lists.

- `ft_lstnew` — Creates a new list element.
- `ft_lstadd_back` — Adds an element to the end of a list.
- `ft_lstclear` — Deletes all elements of a list and frees their memory.
- `ft_lstmap` — Creates a new list by applying a function to each element of an existing list.

## 🧠 3. Technical Concepts

The project covers several fundamental concepts in C programming:

- **Pointers:** Working with memory addresses and accessing data.
- **Memory Management:** Allocating and freeing memory while handling allocation failures.
- **String and Memory Manipulation:** Working with strings and manipulating data at the byte level.
- **Linked Lists:** Creating nodes, connecting elements, traversing lists, and managing their memory.
- **Edge Cases:** Testing different scenarios, including empty strings, null pointers, and memory boundaries.

## ⚙️ 4. Development & Standards

The project emphasizes code quality, reliable behavior, and adherence to the requirements of the 42 / 1337 curriculum.

- **Code Organization:** Writing clear, reusable, and well-structured functions.
- **Coding Standards:** Following the project's required coding conventions.
- **Compilation:** Using `-Wall -Wextra -Werror` to detect compiler warnings and errors.
- **Testing:** Checking function behavior with different inputs and edge cases.
- **Memory Management:** Ensuring that memory is allocated and freed correctly.

## 🚀 5. Skills & Learning Outcomes

Through this project, I developed and strengthened several technical skills:

- **C Programming:** Deepened my understanding of C functions and data handling.
- **Pointers and Memory:** Improved my understanding of pointers, memory allocation, and deallocation.
- **String Manipulation:** Gained practical experience working with strings and memory.
- **Linked Lists:** Learned to create, manage, and manipulate linked data structures.
- **Debugging and Testing:** Practiced identifying bugs, analyzing their causes, and verifying function behavior.
