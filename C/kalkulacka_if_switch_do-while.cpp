#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>

int main(int argc, char** argv) {

double a;
double b;
int volba;
double vysledek;
char pokracovat;
do // do-while poka�d� ud�l� 1. cyklus a a� pak se zept� na podm�nku 
{ 
std::system( "cls" ); //po vypo�ten� p��kladu sma�e cmd konzoli a kurkor nastav�do v�choz� polohy 
printf("Vitejte v kalkulacce \n");
printf("===================== \n");

printf("Zvolte si operaci: \n");

printf("1 - scitani \n");
printf("2 - odcitani \n");
printf("3 - nasobeni \n");
printf("4 - deleni \n");
printf("5 - mocnina na x\n");
scanf("%d", &volba);

if ((volba > 0) && (volba <= 5)) // podminka k switch, musi se upravit s kazdym pridanym case
    printf("Zadejte prvni cislo: \n"),scanf("%lf", &a),printf("Zadejte druhe cislo: \n"),scanf("%lf", &b); // if mus� m�t jen jeden ��dek
    
else
    printf("Neplatna volba \n"); //kdy� se zad� v�t�� ��slo ne� je v if
    
switch(volba) //volba operace
{
    case 1:
        vysledek = a + b;
        break;
    case 2:
        vysledek = a - b;
        break;
    case 3:
        vysledek = a * b;
        break;
    case 4:
        vysledek = a / b;
        break;
    case 5:
    	vysledek = pow(a,b);
        break; 

}
printf("Vysledek: %f\n", vysledek);
printf("\n");
    printf("Prejete si zadat dalsi priklad? [1/0] \n"); //pat�� k do-while 
    scanf("%d",  &pokracovat); // pat�� k do-while

} while (pokracovat == 1); // prakticky jsme dali definici pokra�ovat = 1 dali sem 
printf("Dekuji za pouziti kalkulacky");
	return (EXIT_SUCCESS);
}
