#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

float a;
printf("Zadej nejake cislo \n");
scanf("%f", &a);
if (a >= 5) { // Ne st�edn�k p�� by to zobrazilo ��dek pod if
	printf("Zadal jsi cislo vetsi nebo rovno nez 5! \n");
	printf("Zadal si cislo %.2f \n", a);
}
printf("Dekuji za zadani \n");
	return (EXIT_SUCCESS);
}
