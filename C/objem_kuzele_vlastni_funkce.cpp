#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float objem_kuzele (float a, float b) //a=polomer, b=vyska
{
    return(M_PI*a*a*b/3); //navratov� hodnota
}

int main(int argc, char** argv) 
{
float v,r,p; // v��ka, polom��, p��rustek
int poc; // po�et hodnot
r=0;

printf("Tabulka hodnot objemu ku�ele\n");
scanf("%f",&p);
printf("------------------\n");
printf("Zadejte vysku\n");
scanf("%f",&v); // p��rustek
printf("Zadejte pocet hodnot\n");
scanf("%f",&poc);
printf(".......................\n");
for(int i=0;i<poc;i++)
    {
r=r+p;
printf(" r= %6.2f   Objem kuzele = :%12.4f\n", r,objem_kuzele(r,v));
    }
return 0;
}
