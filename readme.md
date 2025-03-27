# _printf

## Description
`_printf` is a custom implementation of the standard `printf` function in C. It produces output according to a specified format and handles various conversion specifiers.

## Synopsis
```c
#include "main.h"

int _printf(const char *format, ...);
```

## Features
- Supports the following conversion specifiers:
  - `%c` : Prints a single character.
  - `%s` : Prints a string of characters.
  - `%d` : Prints an integer.
  - `%i` : Prints an integer.

## Return Value
- On success, returns the number of characters printed (excluding the null byte `\0`).
- On failure, returns `-1`.

## Example Usage
```c
#include "main.h"

int main(void)
{
    _printf("This is a simple printf %s made in %d\n", "Function", 2025);
    return 0;
}
```
### Expected Output:
```
This is a simple printf Function made in 2025
```

## See Also
- `man 3 printf`

## Authors
- Ealise Wang  
- Eli Malana  
- Kaj Kennedy  
- Kassandra Iatrou  


