#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE * p_soubor = fopen("neco.txt", "r"); // soubor musi bejt v defaultu �ili na plo�e
    FILE * p_soubor2 = fopen("kopie.txt", "w"); // musi existovat
if (p_soubor == NULL) // pro original
    {
     printf("Soubor se nepoda�ilo otev��t pro �ten�, zkontrolujte pros�m zda existuje.");
     return 1;
    }
if (p_soubor2 == NULL) // pro kopii
    {
     printf("Soubor se nepoda�ilo otev��t pro z�pis, zkontrolujte pros�m zda existuje.");
     return 1;
    }

char buffer[1024]; // buffer - dav�me r�dek ze souboru
fputs("TOTO JE KOPIE!", p_soubor2);
fputs("\n", p_soubor2);
while (fscanf(p_soubor, " %1023[^\n]", buffer) != EOF) // fscanf zapisuje do souboru p_soubor, ^ aby fscanf fungoval do entru ne do mezery, %1023 max.1023 znak�,
													  // != EOF konec souboru
    {
     printf("%s\n", buffer); // vyp�eme r�dek z bufferu na obrazovku
	 fputs(buffer, p_soubor2);
     fputs("\n", p_soubor2);
    }

if (fclose(p_soubor) == EOF) // zav�en� souboru 
    {
     printf("Soubor se nepoda�ilo uzav��t.");
     return 1;
    }
if (fclose(p_soubor2) == EOF) // zav�en� souboru 
    {
     printf("Soubor se nepoda�ilo uzav��t.");
     return 1;
    }

return (EXIT_SUCCESS);
}
