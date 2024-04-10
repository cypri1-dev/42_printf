##
<h1 align="center"> <img src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/covers/cover-ft_printf.png" </h1>

## Description
Ft_printf is a custom implementation of the printf function in C. It provides a flexible and customizable way to format and print data to the standard output stream. With ft_printf, you can format various types of data including strings, integers, floating-point numbers, and more. It supports many formatting options such as specifying field width, precision, flags for alignment, and conversion specifiers. This library allows developers to have greater control over output formatting and is useful for creating formatted output in a variety of contexts, including command-line interfaces, logging, and file generation.

## Project Components Table

The following table describes the various components and files included in the ft_printf project:

| File/Header File              | Description                                                                                   |
|-------------------------------|-----------------------------------------------------------------------------------------------|
| `ft_printf.c`                 | The main file containing the ft_printf function, which handles formatting and printing data according to user specifications.                              |
| `ft_printf.h`                 | The header file containing function prototypes and macro declarations necessary for using ft_printf.                                                     |
| `libft`                       | A directory containing the Libft library, used for some auxiliary functions required for the implementation of ft_printf.                                     |
| `Makefile`                    | The Makefile script for automating project compilation. It includes rules for compiling ft_printf and additional rules for project management.           |
| `main.c`                      | A test file containing examples of using the ft_printf function with different types of data and formatting options.                                         |

This table provides an overview of the main components of the ft_printf project and their function in the implementation of the ft_printf function.

## Installation and compilation
1. Clone this repository into your project:
```bash
git clone https://github.com/cypri1-dev/42_printf.git
cd 42_printf
```
2. Run the following command:
```bash
make
```

## Features

The ft_printf project offers the following features:

- **Powerful Formatting**: With ft_printf, you can format and display a wide range of data types, including strings, integers, floating-point numbers, pointers, and more.

- **Advanced Formatting Options**: ft_printf supports many formatting options such as specifying field width, precision, flags for alignment, zero-padding, signs, and more.

- **Color Handling**: ft_printf also allows integrating ANSI color codes to add colors and enhance the readability of the output.

- **Easy Customization**: You can easily extend and customize ft_printf by adding new features or modifying formatting options according to your specific needs.

- **Compatible with Libft**: ft_printf is designed to be used in conjunction with the Libft library, providing a solid foundation of auxiliary functions to complement your project.

- **Comprehensive Testing**: Test files are provided to allow you to validate the proper functioning of ft_printf with different usage scenarios and data types.
