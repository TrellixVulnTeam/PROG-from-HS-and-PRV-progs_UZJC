#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
int i; // co chci umocnit
int j;  // na kolik�tou mocnim
scanf("%d",&i);    
scanf("%d",&j);
	double vysledek = pow(i,j);
    printf("%lf", vysledek);
    return (EXIT_SUCCESS);
}
