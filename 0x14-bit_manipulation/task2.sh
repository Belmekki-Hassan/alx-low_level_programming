#!/bin/bash
betty 2*.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o get_bit
if [$? -eq 0 ]
then
git add . && git commit -m "Task 2 added" && git push
else
echo "Task cannot be done, try again"
fi
