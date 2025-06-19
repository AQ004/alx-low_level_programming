Dynamic Libraries
.dll (dynamic link lib) (Win)
.so (shared objects) (linux)


static libraries
.lib (win)
.a (archive) (linux)



$ gcc -c -fPIC *.c

$ ls

0-isupper.c  0-strcat.o   1-memcpy.c   2-strchr.o   3-islower.c  3-strcmp.o   4-strpbrk.c  6-abs.o     _putchar.o
0-isupper.o  100-atoi.c   1-memcpy.o   2-strlen.c   3-islower.o  3-strspn.c   4-strpbrk.o  9-strcpy.c  README.md
0-memset.c   100-atoi.o   1-strncat.c  2-strlen.o   3-puts.c     3-strspn.o   5-strstr.c   9-strcpy.o
0-memset.o   1-isdigit.c  1-strncat.o  2-strncpy.c  3-puts.o     4-isalpha.c  5-strstr.o   main.h
0-strcat.c   1-isdigit.o  2-strchr.c   2-strncpy.o  3-strcmp.c   4-isalpha.o  6-abs.c      _putchar.c

$ gcc -shared *.o -o libdynamic.so

