#  Our own "printf" function in C

This repository contains our own version of the `printf` function of the c language called **"_printf "** , which allows printing in the standard output, under different types of arguments or literal strings; In our files you will also find modifiers that the original function does not have.


# Files

 - **README.msc** : It contains all the information about the project and
   all its content. 
 - **holberton.h** : It is the header file that contains our main `struct` to analyze the cases of printing variables and there are also our function prototypes
 - **_printf.c** : This file contains the structure of the `printf` function and analyzes the different cases to print variables with the `%`
   sign.
 - **text.c** : This program has the functions for `%c`  `%s` cases, which print characters and strings.
 - **numbers.c** : This program has the functions for `%d`  `%I` cases, which print integers and unsigned integers.
 - **binary.c** : This translator prints any given number, at its value in binary.
 - **rot13.c** : String decoder in rot13 way with `%R`.
 - **reverse.c** : Reverser of literal strings with the`%r` command.

##  To compile 

You can use your own `main.c` file or modify the one that already exists, to test the different functions. you just have to compile it like this,

    $ gcc -Wall -Werror -Wextra -pedantic holberton.h *.c

##  Requirements

 - Ubuntu 14.04 LTS 
 - Funtions and files will be compiles with gcc 4.8.4
   with flags 
   
 - All the files must have [Betty](https://github.com/holbertonschool/Betty/wiki) style


## Authors

 - **Diego Lopez** : [@LopezDfelo93](https://twitter.com/LopezDfelo93) 
 - **Juan Carlos Hernandez** : [@luigi_jong](https://twitter.com/luigi_jong)
 - **Julio Arenas** : [@JulioAr73961918](https://twitter.com/JulioAr73961918)

##  info

 - 20 / 10 / 2020 
 - Holberton school Colombia 
 - Cohort #13
