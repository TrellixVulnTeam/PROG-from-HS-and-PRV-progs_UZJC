#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char** argv) {

int maxInt = INT_MAX;
short maxShort = SHRT_MAX;
char maxChar = CHAR_MAX;
char sizeInt = sizeof(int);
char sizeShort = sizeof(short);
char sizeChar = sizeof(char);

printf("INT: zab�r� %d bajt/y/� a nejv�t�� mo�n� ��slo je %d\n", sizeInt, maxInt);
printf("SHORT: zab�r� %d bajt/y/� a nejv�t�� mo�n� ��slo je %d\n", sizeShort, maxShort);
printf("CHAR: zab�r� %d bajt/y/� a nejv�t�� mo�n� ��slo je %d\n", sizeChar, maxChar);

    return (EXIT_SUCCESS);
}

