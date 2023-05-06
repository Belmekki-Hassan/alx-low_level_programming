#!/bin/bash
betty 1*.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o print_binary
