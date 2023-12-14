# SmartCalc Application (s21)

This Makefile is designed to build the SmartCalc application and perform various tasks related to testing, distribution, and cleaning.

## Makefile Usage

### Targets

- **all/build**: Generates the SmartCalc application using the provided SmartCalc.pro file.
- **install**: Builds and installs the application to the specified directory.
- **test**: Compiles the unit tests and executes them.
- **dist**: Creates a tar archive of the application and documentation for distribution.
- **clean**: Removes generated files and artifacts.

### Description

The SmartCalc application is designed for performing operations on numbers or algebraic formulas. It consists of two main sections:

1. **Default Calculator**: Performs mathematical calculations and can plot functions in two dimensions.
2. **Credit Calculator**: Calculates loans based on parameters like loan amount, interest rate, and term.

## SmartCalc Documents

### Default Calculator

To calculate an expression, enter it into the input line and press equals. It also supports mathematical expressions involving the variable 'x' for specific values.

### Credit Calculator

For loan calculations, specify the interest rate, term, loan amount, and loan type. Some restrictions apply:
- Maximum loan amount: 100 million.
- Maximum loan term: 60 years.
- Input expression length should not exceed 255 characters.
- Graphing constraints: Abscissa and ordinate axes capped at 1000000.

### Supported Operations and Functions

#### Operations

- Brackets: (a+b)
- Addition: a+b
- Subtraction: a-b
- Multiplication: a*b
- Division: a/b
- Power: a^b
- Modulus: a mod b
- Unary plus: +a
- Unary minus: -a

#### Functions

- Cosine: cos(x)
- Sine: sin(x)
- Tangent: tan(x)
- Arc cosine: acos(x)
- Arc sine: asin(x)
- Arc tangent: atan(x)
- Square root: sqrt(x)
- Natural logarithm: ln(x)
- Common logarithm: log(x)

These functions and operations are available within the SmartCalc application.


