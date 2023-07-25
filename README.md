![Let_make_a__printf](https://github.com/Martin-nitram1/printf/assets/134892561/980cb5bf-5ea5-4fc3-be72-df546776e634)

# **_PRINTF FUNCTION**

## Description

_printf is a custom implementation of the printf function in C. It allows formatted output to be printed to the standard output stream (stdout) and supports various format specifiers for printing different data types.

## Format Specifiers

The `_printf` function supports the following format specifiers:

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

## Usage

To use the `_printf` function, include the `"main.h"` header file in your C source code:

![carbon-9](https://github.com/Martin-nitram1/printf/assets/134892561/19eeabef-4a0d-486b-954b-b62add255131)


Call the `_printf` function with the desired format and arguments:

![carbon-2](https://github.com/Martin-nitram1/printf/assets/134892561/ba9e409e-e309-4312-a72d-b4bfa428dff1)


## Return Value

Upon successful execution, `_printf` returns the total number of characters printed (excluding the null byte used to end output to strings). If an error occurs, the function returns -1.

## Installation

Clone this repository to your local machine

![carbon-3](https://github.com/Martin-nitram1/printf/assets/134892561/60ff1f3c-9d62-4704-8160-9fef3dfd250d)

Compile your C source code with the _printf function:

![carbon-5](https://github.com/Martin-nitram1/printf/assets/134892561/3284ac4b-acbc-4727-a60f-3781f7c5d68d)

Run your compiled program:

![carbon-6](https://github.com/Martin-nitram1/printf/assets/134892561/e62b700c-7e4a-493d-86da-70baa354ee67)

## Requirements

This version of _printf was developed and tested on a Linux operating system.
The _printf function requires the "main.h" header file and the following standard libraries:

`stdarg.h`

`unistd.h`

`limits.h`

## Bugs and Issues

If you encounter any bugs or issues with the _printf function, please report them on the Issues section of this repository.

## License

This custom _printf function is open-source software released under the MIT License. See the LICENSE file for details.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## Acknowledgments

The _printf function was developed as part of ALX SE _Printf Group Project, inspired by the original printf function in the C standard library. Special thanks to Martin Omondi & Justus Gugwa for the development and contributions to this project.

## Contact Information

For questions or inquiries, please contact info.martinomondi@gmail.com.

