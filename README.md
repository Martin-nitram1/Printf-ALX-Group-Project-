#_PRINTF FUNCTION

##Description

_printf is a custom implementation of the printf function in C. It allows formatted output to be printed to the standard output stream (stdout) and supports various format specifiers for printing different data types.

##Format Specifiers

The _printf function supports the following format specifiers:

%c: Prints a single character.
%s: Prints a string of characters.
%%: Prints a percent symbol (%).
%d, %i: Prints a signed integer.
%u: Prints an unsigned integer.
%b: Prints an integer in binary format.
%o: Prints an integer in octal format.
%x: Prints an integer in lowercase hexadecimal format (0-9, a-f).
%X: Prints an integer in uppercase hexadecimal format (0-9, A-F).
%r: Prints a string in reverse.
%R: Prints a string in ROT13 encryption.

##Usage

To use the _printf function, include the "main.h" header file in your C source code:
```#include "main.h"```

Call the _printf function with the desired format and arguments:
```_printf("Hello, %s!\n", "World");
_printf("The answer is %d\n", 42);
_printf("Binary representation of 10: %b\n", 10);
_printf("Reverse of 'hello': %r\n", "hello");```

##Return Value

Upon successful execution, _printf returns the total number of characters printed (excluding the null byte used to end output to strings). If an error occurs, the function returns -1.

##Installation

Clone this repository to your local machine

```git clone https://github.com/your_username/printf.git```

Compile your C source code with the _printf function:

```gcc -Wall -Werror -Wextra -pedantic main.c _printf.c -o my_program```

Run your compiled program:

```./my_program```

##Requirements

This version of _printf was developed and tested on a Linux operating system.
The _printf function requires the "main.h" header file and the following standard libraries:
+stdarg.h
+unistd.h
+limits.h

##Bugs and Issues

If you encounter any bugs or issues with the _printf function, please report them on the Issues section of this repository.

##License

This custom _printf function is open-source software released under the MIT License. See the LICENSE file for details.
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

##Acknowledgments

The _printf function was developed as part of ALX SE _Printf Group Project, inspired by the original printf function in the C standard library. Special thanks to Martin Omondi & Justus Gugwa for the development and contributions to this project.

##Contact Information

For questions or inquiries, please contact info.martinomondi@gmail.com.

