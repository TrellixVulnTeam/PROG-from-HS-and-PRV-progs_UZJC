#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

int j;
int i;
printf("Mala nasobilka pomoci dvou cyklu: \n");
for (j = 1; j <= 1000000; j++) //vn�j�� for -  i=1.��slo, i<=maxim�ln� ��slo kolik ��sel se bude n�sobit, ��dek 
{
    for (i = 1; i <= 1000000; i++) //vnit�n� for - j=1.��slo, j<=maxim�ln� ��slo co m� kolikr�t ud�lat,sloupec
        printf("%4d ", i * j);
    printf("\n");
}
	return (EXIT_SUCCESS);
}
