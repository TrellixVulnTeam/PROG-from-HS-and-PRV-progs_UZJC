#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

char c; // znak, kter� zad�me
int i; // ASCII hodnota znaku

c = 'a'; 
i = (int)c; // konverze znaku na ASCII
printf("Znak %c jsme p�evedli na ASCII hodnotu %d\n", c, i);

i = 98;
c = (char)i; // konverze ASCII na znak
printf("ASCII hodnotu %d jsme p�evedli na znak %c", c, i);
	return (EXIT_SUCCESS);
}
