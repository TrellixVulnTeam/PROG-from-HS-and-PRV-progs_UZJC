#include <stdio.h>
#include <stdlib.h>
#define POCET 100 //v�ude kde p�eklada� najde POCET dosad� cislo !mus� b�t velk�mi p�smeny!

int main(int argc, char** argv) {
    // Vytvo�en� pole
   long unsigned int soucet = 0; //aby se tam ve�lo v�c ��sel
    int pole[POCET];
    int i, max, min;


for (i = 0; i < POCET; i++)
    {
        pole[i] = i * 2;  //sud� ��slo i * 2, lich� ��slo i * 2 + 1
    }
min=pole[i];
max=pole[i];

    for (i = 0; i < POCET; i++)
    {
        printf("%5d ", pole[i]);
    }
    printf("\n");
for (i = 0; i<POCET; i++)
{
	if(pole[i]>max)
        max = pole[i]; //hled� maximum
    if(pole[i]<min)
        min=pole[i]; //hled� minimum
soucet = soucet +pole[i]; //sou�et pole
}
printf("----------------------------------------------------------\n");
printf("Soucte prvku pole je %d, min je %d, max je %d, prumer hodnot je %d", soucet,min,max,soucet/POCET);
    return (EXIT_SUCCESS);
}
