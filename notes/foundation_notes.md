# Motivation for the OOP paradigm
- enable software engineers to design phenomena at a higher level of abstraction, leading to code which can be reasoned about with more ease amongst humans.
- it also usually results is more streamlined, readable code.

# Core Principles to achieve the ambition described above
- encapsulation
- reusability 
- maintainability
- modelling

# Learning OOP with C++
- language has been designed with OOP principles, rather than 'bolt on' features as are found in Python
- prepares for both (high tariff) university comp sci courses and software engineering roles in industry


# Introduction to C++

- C++ is a relaxed-strict object oriented programming language (meaning you can't realistically code like you would do in python). This is because most things have to be inside a class / object.
- Why it isn't fully strict is that some data can be stored not as objects - whereas in languages such as javascript, EVERYTHING is an object.

- There are 2 main types of files in C++ : Header files(.h, .hpp), and C files (.cpp). TO BE CONTINUED...

# Introduction to this specific c++ program

- Split the `Point` class into a header (`classes/point.hpp`) and implementation file (`classes/point.cpp`)
- Moved `main()` into `main.cpp` so the class and the program entry point are separate.
- Used include guards in the header to prevent multiple inclusion.
- Used trailing underscores for member variables (`x_`, `y_`) as a naming convention.
- Used short getter names (`x()`, `y()`) and marked them `const` because they do not modify the object.
- Used a constructor initializer list to initialize member variable

# Compiling with Makefiles

A compiled language requires the sourcecode of a program to be run through the compilation process, which can carry flags.
The purpose of the Makefile is to define the steps to automate this process.
Added a root `Makefile` to compile the project with `g++`.
- `make` builds the program into `point_app`.
- `make run` runs the executable.
- `make clean` removes the built executable.
- The `Makefile` compiles `main.cpp` and `classes/point.cpp` together.
- automation build systems link
