#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -o liball.so *.o
