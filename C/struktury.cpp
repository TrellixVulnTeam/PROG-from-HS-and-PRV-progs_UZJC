#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct // definice nov�ho typu, jedn� se o strukturu, jedn� se o prom�nnou
{
    char jmeno[51]; // pole, rozsah 51
    int vek; // int 
    char ulice[51]; // pole, rozsah 51
    int psc;
    char mesto[51];  
    int mobil;
    char emial[51]; 
} ZACI;// n�zev prom�nn�(m��e i mal� p�smena)

int main(int argc, char** argv) // vlastn� program
{
	ZACI uzivatele[10]; //  

	//vytvo�en� u�ivatele 0
    strcpy(uzivatele[0].jmeno, "subjekt1"); // strcpy - kop�ruje �et�zec "Tom� Marn�" do �et�zce uzivatele[0].jmeno
    uzivatele[0].vek = 33; 
    strcpy(uzivatele[0].ulice, "ulice1");
    uzivatele[0].psc = 27401;
    strcpy(uzivatele[0].mesto, "mesto1");
    uzivatele[0].mobil = 123456789;
    strcpy(uzivatele[0].emial, "email1");

	//vytvo�en� u�ivatele 1
    strcpy(uzivatele[1].jmeno, "subjekt2"); // strcpy - kop�ruje �et�zec "Tom� Marn�" do �et�zce uzivatele[0].jmeno
    uzivatele[1].vek = 33; 
    strcpy(uzivatele[1].ulice, "ulice2");
    uzivatele[1].psc = 27401;
    strcpy(uzivatele[1].mesto, "mesto2");
    uzivatele[1].mobil = 123456789;
    strcpy(uzivatele[1].emial, "email2");
    
     strcpy(uzivatele[2].jmeno, "subjekt3"); // strcpy - kop�ruje �et�zec "Tom� Marn�" do �et�zce uzivatele[0].jmeno
    uzivatele[2].vek = 33; 
    strcpy(uzivatele[2].ulice, "ulice3");
    uzivatele[2].psc = 27401;
    strcpy(uzivatele[2].mesto, "mesto3");
    uzivatele[1].mobil = 123456789;
    strcpy(uzivatele[1].emial, "email3");
    
     strcpy(uzivatele[3].jmeno, "subjekt4"); // strcpy - kop�ruje �et�zec "Tom� Marn�" do �et�zce uzivatele[0].jmeno
    uzivatele[3].vek = 33; 
    strcpy(uzivatele[3].ulice, "ulice4");
    uzivatele[3].psc = 27401;
    strcpy(uzivatele[3].mesto, "mesto4");
    uzivatele[3].mobil = 123456789;
    strcpy(uzivatele[3].emial, "email4");

    int i; // definice 
    for (i = 0; i < 4; i++) // cyklus kter� vyp�e v�echny u�ivatele	
    {
    	printf("________________________\n");
        printf("U�ivatel na indexu %d\n", i);
        printf("Jm�no: %s\n", uzivatele[i].jmeno);
        printf("V�k: %d\n", uzivatele[i].vek);
        printf("Ulice: %s\n\n", uzivatele[i].ulice);
        printf("psc: %d\n\n", uzivatele[i].psc);
        printf("mesto: %s\n\n", uzivatele[i].mesto);
        printf("mobil: %d\n\n", uzivatele[i].mobil);
        printf("emial: %s\n\n", uzivatele[i].emial);
    }
    return (EXIT_SUCCESS);
}
