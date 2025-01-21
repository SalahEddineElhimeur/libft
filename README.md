
---

# Libft Project

42 School's first project, **Libft**, is about learning how the standard functions of C programming work by coding them from scratch and creating our very own library. The goal of this project is to implement some of the most commonly used C library functions and get familiar with how the standard C functions are designed.

This project has been archived in the state it was in at the time of evaluation.

**Libft** is an essential project since this library will be used in future 42 School assignments. If you're a 42 student, I highly recommend you go through the process of writing your own code, testing it yourself, and troubleshooting issues. Don't just copy-paste code you don't fully understand. If you’ve completed your piscine, there is no reason why you couldn't solve this project yourself! Be patient, test thoroughly, and always strive for understanding.

## Status
Finished: 2024-11-10. Grade: 125/100.

## Usage
To compile the mandatory functions:

```bash
make
```

To compile with the bonus functions:

```bash
make bonus
```

## Included Functions

### Mandatory Functions
The mandatory functions of **libft** are a mix of functions from the C standard library and some useful utility functions that you'll often need in other projects. Mastery of these 34 mandatory functions is essential for a 100% grade.

#### Functions to check and manipulate characters:
- `ft_isalpha` - Checks if the character is an alphabet letter.
- `ft_isdigit` - Checks if the character is a digit.
- `ft_isalnum` - Checks if the character is alphanumeric.
- `ft_isascii` - Checks if the character is a valid ASCII character.
- `ft_isprint` - Checks if the character is printable.
- `ft_toupper` - Converts a character to uppercase.
- `ft_tolower` - Converts a character to lowercase.

#### Functions to manipulate strings:
- `ft_strlen` - Returns the length of a string.
- `ft_strlcpy` - Copies a string with size limitation.
- `ft_strlcat` - Appends a string with size limitation.
- `ft_strchr` - Finds the first occurrence of a character in a string.
- `ft_strrchr` - Finds the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings.
- `ft_strnstr` - Finds the first occurrence of a substring in a string.
- `ft_substr` - Creates a substring.
- `ft_strjoin` - Joins two strings into one.
- `ft_strtrim` - Trims unwanted characters from a string.
- `ft_split` - Splits a string into an array of substrings.
- `ft_strmapi` - Applies a function to each character of a string and creates a new string.
- `ft_striteri` - Applies a function to each character of a string, modifying it in place.

#### Functions to manipulate memory:
- `ft_calloc` - Allocates memory and initializes it to zero.
- `ft_memset` - Fills a memory area with a specified value.
- `ft_bzero` - Sets a memory area to zero.
- `ft_memcpy` - Copies memory from one area to another.
- `ft_memmove` - Moves memory from one area to another, handling overlap.
- `ft_memchr` - Searches for a byte in a memory area.
- `ft_memcmp` - Compares two memory areas.
- `ft_strdup` - Duplicates a string by allocating memory for it.

#### Functions for numbers:
- `ft_atoi` - Converts a string to an integer.
- `ft_itoa` - Converts an integer to a string.

#### Functions to write to a file descriptor:
- `ft_putchar_fd` - Writes a character to a file descriptor.
- `ft_putstr_fd` - Writes a string to a file descriptor.
- `ft_putendl_fd` - Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Writes an integer to a file descriptor.

### Bonus Functions
The bonus functions of **libft** are focused on list manipulation, which is an important skill for data structures and algorithms. Completing the bonus part adds an extra 25% to your final grade.

- `ft_lstnew` - Creates a new list element.
- `ft_lstadd_front` - Adds a new element to the front of the list.
- `ft_lstsize` - Returns the size of the list.
- `ft_lstlast` - Returns the last element of the list.
- `ft_lstadd_back` - Adds a new element to the back of the list.
- `ft_lstdelone` - Deletes a single list element.
- `ft_lstclear` - Deletes all elements in the list.
- `ft_lstiter` - Iterates through a list and applies a function to each element.
- `ft_lstmap` - Creates a new list by applying a function to each element of an existing list.

## How to Contribute
Feel free to clone this repository and make improvements or share suggestions. Since this project is foundational, any changes or contributions that help improve the code quality and efficiency are always welcome.

---
