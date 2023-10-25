# 0x1C. C - Makefiles

Makefiles hugely come in handy when we want to automate and manage the building process of a project such that it saves us the repeated typing of numerous commands risking occurrences of errors. This folder holds exercises and a showcase of the making and use of makefile. They cover the following key concepts on makefiles:

	- How to make makefiles
	- How to use them
	- The rules and how to set them
	- The makefile variables and how to set and use them


## Task 0: make -f 0-Makefile

File

	- 0-Makefile
Makefile that automatically executes .c files



## Task 1: make -f 1-Makefile

File

	- 1-Makefile
Compiles the 2 .c files and uses CC and SRC variables



## Task 2: make -f 2-Makefile

File

	- 2-Makefile
More macro on Names and Object files



## Task 3: make -f 3-Makefile

File

	- 3-Makefile
More rules that builds the executables and deletes the unwanted files



## Task : A complete Makefile

File

	- 4-Makefile
addition of the gcc flag  -Wall -Werror -Wextra -pedanticto ensure that rules do not fail



## Task 5: Interview Preparation Question

File

	- 5-island_perimeter.py
A python module that returns  the perimeter of the island described in grid:

grid is a list of list of integersi:

* 0 represents a water zone
* 1 represents a land zone
* One cell is a square with side length 1
* Grid cells are connected horizontally/vertically (not diagonally).
* Grid is rectangular, width and height don’t exceed 100

Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:

* First line contains #!/usr/bin/python3
* You are not allowed to import any module
* Module and function must be documented



## Task 6: make -f 100-Makefile

File

	- 100-Makefile
Makefile with the following restrictions
You are not allowed to have a list of all the .o files
You have to use $(RM) for the cleaning up rules, but you are not allowed to set the RM variable
You are not allowed to use the string $(CC) more than once in your Makefile
You are only allowed to use the string $(RM) twice in your Makefile
You are not allowed to use the string $(CFLAGS) (but the compiler should still use the flags you set in this variable)
You are not allowed to have an $(OBJ) rule
You are not allowed to use the %.o: %.c rule
Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
Your Makefile should not compile if the header file m.h is missing
