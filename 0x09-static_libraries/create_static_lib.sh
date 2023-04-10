#!bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar -r liball.a *.o
ranlib liball.a
