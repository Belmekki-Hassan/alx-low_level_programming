#!/bin/bash
betty 0*.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_to_unit
if [$? -eq 0 ]
then
rm binary_to_unit
git add . && git commit -m "Task 0 updated" && git push
else
echo "Task cannot be done, try again"
rm binary_to_uint
fi
