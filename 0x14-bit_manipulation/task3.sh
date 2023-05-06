#!/bin/bash
betty 3*.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o set_bit
if [$? -eq 0 ]
then
rm set_bit
git add . && git commit -m "Task 0 updated" && git push
else
echo "Task cannot be done, try again"
rm set_bit
fi
