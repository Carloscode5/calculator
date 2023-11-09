# Pocket Command-Line Calculator (C) 
#### Video Demo: [CS50 Final Project: Pocket Calculator](https://youtu.be/pCU8ZzSjatI)

## Description

This is a project I created for Harvard's CS50: Introduction to Computer Science. The contents of the calculator.c file consist of a simple pocket calculator program which I have written in the language of C. Pocket Calculator can be accessed on the commmand-line and it allows users to perform basic arithmetic operations which include the following (addition, subtraction, multiplication, and division). Simply type out a problem of your choosing within the acceptable parameters and voila, Pocket Calculator computes your results!

## Features

### User-Friendly Interface:

- In this program I have written an intiutive prompt that welcomes users with a friendly and welcoming message: "Solve a Problem! (e.g., 2 + 2):". This intuitive prompt will encourage users to type out their math expressions effortlessly.
- I have provided clear and consise instructions on how one would interact with Pocket Calculator, making it accessible for users of all levels of experience in math. In addition to the user friendly instructions, users can easily type out their math problems which in return, creates a nice and enjoyable experience.
- When thinking of responsive input handling I wrote this program so the user can not only have access to various math expressions, but a wide range of input formats which give the user a natural way to express thir calculations.

### Basic Arithmetic Operations:

- Being able to express flexibility within the program allows users to type out complex expressions with a number of arithmetic operations available.
- When brainstorming the initial idea, I realized there needed to be support for (Addition, Subtraction, Multiplication and Division) all the basic operations.
- The functionality handles all operations seemlessly to provide users with a versatile tool they can leverage for all their mathematical needs.

### Compilation and Execution Capabilities:

- The program offers a simple compilation process that provides straightforward instructions for compiling the Pocket Calculator through the GCC(GNU Compiler Collection). 
- With clear written out instructions, any user can quickly fire up the program and solve a problem without any confusion.
- By leveraging the design of the GCC within the IDE, this will give the user complete platform independence across all environments.  

### Example and Result Display

- There is a clear and illistrative example located within this README demonstrating how a user can input and solve any mathematical problem with Pocket Calculator.
- With real-time problem solving written within this program, any user can test Pocket Calculator with their own math expressions which in turn provide a hands-on experience. 
- Pocket Calculator was written with formatted result output, giving it the capabilities to output easy readable calculated values.

### Error Handling

- Within Pocket Calculator there is a robust division by zero check, which prevents the program from crashing and providing a seamless error message.
- The program offers user-friendly error reporting by mitigating cryptic messages and providing clear explanations in a language accessible to the user.
- By using Pocket Calculator users can be rest assured that the program maintains a consistent approach to error handling, which in turn creates a pleasant user experience.

### Contribution Guidlines:

- Pocket Calculator features and extends a warm invitation to open contibutions from the community.
- Open contributions to help enhance the calculator program are welcomed and valued.
- Contributors and those new to come across the project can easily follow the step-by-step guide to fork the repository and submit a pull request.

## Usage

To compile and run the program, follow these steps:

1. Clone or download this repository to your local machine.

2. Open your terminal or command prompt and navigate to the project directory.

3. Compile the program using GCC (GNU Compiler Collection):

   ```bash
   gcc -o calculator calculator.c

4. Run the program by simply typing the name of the generated executable and press Enter:

   ```bash
   ./calculator

5. Test the program, you will be prompted for input.

6. Exit te program, exit by simply pressing Ctrl+C.

## Example

   ```bash
   Pocket Calculator
   Solve a Problem! (e.g., 2 + 2): 2 + 5
   Result: 7.000000
```

## Contributing
If you would like to contribute to this project, please fork the repository and create a pull request. You can also report issues or request new features by opening an issue.

## Acknowledgments
This project was inspired by the professors who lead the Harvard CS50: Introduction to Computer Science Course!
