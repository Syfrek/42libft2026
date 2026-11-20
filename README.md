*This activity has been created as part of the 42 curriculum by racornu.*

## Description

This project consists of creating a custom C library.

The goal is to implement several useful functions
that can be reused in future C projects.

The library provides functions for string manipulation,
memory management and other common operations.

## Instuctions

### Compilation
```
make
```

### Cleaning

To remove object files:
```
make clean
```
To remove all generated files:
```
make fclean
```

## Ressources

The documentation uses linked lists : https://chgi.developpez.com/liste/

The documentation uses makefile : https://dev.to/ashcript/comprendre-le-makefile-exemple-avec-le-langage-c-47n9

The documentation uses malloc and free : https://www.ibm.com/docs/fr/aix/7.3.0?topic=m-malloc-free-realloc-calloc-mallopt-mallinfo-mallinfo-heap-alloca-valloc-posix-memalign-subroutine

### Ia Used

Using AI for code comprehension.

## Descriptions of functions

### Part 1 - Libc functions

| Function | Prototype | Description |
| --- | --- | --- |
| isalpha | `int ft_isalpha(int c)` | Checks for a letter. |
| isdigit | `int ft_isdigit(int c)` | Checks for a digit. |
| isalnum | `int ft_isalnum(int c)` | Checks for a letter or digit. |
| isascii | `int ft_isascii(int c)` | Checks for an ASCII character. |
| isprint | `int ft_isprint(int c)` | Checks for a printable character. |
| strlen | `size_t ft_strlen(const char *str)` | Returns the string length. |
| memset | `void *ft_memset(void *s, int c, size_t n)` | Fills memory with a byte. |
| bzero | `void ft_bzero(void *s, size_t n)` | Zeros a memory area. |
| memcpy | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies memory. |
| memmove | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies overlapping memory safely. |
| strlcpy | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies a string with a size limit. |
| strlcat | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends a string with a size limit. |
| toupper | `int ft_toupper(int c)` | Converts a letter to uppercase. |
| tolower | `int ft_tolower(int c)` | Converts a letter to lowercase. |
| strchr | `char *ft_strchr(const char *s, int c)` | Finds the first character. |
| strrchr | `char *ft_strrchr(const char *s, int c)` | Finds the last character. |
| strncmp | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares strings up to n bytes. |
| memchr | `void *ft_memchr(const void *s, int c, size_t n)` | Finds a byte in memory. |
| memcmp | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares memory areas. |
| strnstr | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Finds a substring within a limit. |
| atoi | `int ft_atoi(const char *str)` | Converts a string to an integer. |

### Part 2 - Additional functions

| Function | Prototype | Description |
| --- | --- | --- |
| calloc | `void *ft_calloc(size_t n, size_t size)` | Allocates zeroed memory. |
| strdup | `char *ft_strdup(const char *src)` | Duplicates a string. |
| substr | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Extracts a substring. |
| strjoin | `char *ft_strjoin(char const *s1, char const *s2)` | Joins two strings. |
| strtrim | `char *ft_strtrim(char const *s1, char const *set)` | Trims characters from both ends. |
| split | `char **ft_split(char const *s, char c)` | Splits a string by a delimiter. |
| itoa | `char *ft_itoa(int n)` | Converts an integer to a string. |
| strmapi | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Maps a function over a string. |
| striteri | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies a function to each character. |
| putchar_fd | `void ft_putchar_fd(char c, int fd)` | Writes a character to a file descriptor. |
| putstr_fd | `void ft_putstr_fd(char *s, int fd)` | Writes a string to a file descriptor. |
| putendl_fd | `void ft_putendl_fd(char *s, int fd)` | Writes a string and newline. |
| putnbr_fd | `void ft_putnbr_fd(int n, int fd)` | Writes a number to a file descriptor. |

### Part 3 - Linked list functions

| Function | Prototype | Description |
| --- | --- | --- |
| lstnew | `t_list *ft_lstnew(void *content)` | Creates a list element. |
| lstadd_front | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds an element at the front. |
| lstsize | `unsigned int ft_lstsize(t_list *lst)` | Counts list elements. |
| lstlast | `t_list *ft_lstlast(t_list *lst)` | Returns the last element. |
| lstadd_back | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds an element at the back. |
| lstdelone | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Deletes one element. |
| lstclear | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees a list. |
| lstiter | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies a function to each element. |
| lstmap | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a transformed list. |

