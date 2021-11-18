#include <stdio.h>
#include <stdlib.h>

double faktorial(int n) // vytvo�en� funkce faktorial
{
    if (n == 1)
        return 1;
    return n * faktorial(n - 1);
}
main() // samotn� program
{
FILE * soubor1 = fopen("faktorial.txt", "r"); // �ten� ze souboru	
FILE * soubor2 = fopen("faktorial_1.txt", "w");  // MUS� EXISTOVAT

if (soubor1 == NULL) // kontrola pro otev�en�  
	{
	 printf("Soubor se nepoda�ilo otev��t pro z�pis, zkontrolujte pros�m opr�vn�n�.");
	 return 1;
	}
	
char buffer[1024]; // buffer - dav�me r�dek ze souboru
fputs("TOTO JE KOPIE!", soubor2);
fputs("\n", soubor2);
while (fscanf(soubor1, " %1023[^\n]", buffer) != EOF)
    {
     printf("%s\n", buffer); // vyp�eme r�dek z bufferu na obrazovku
	 fputs(buffer, soubor2);
     fputs("\n", soubor2);
    }

if (fclose(soubor1) == EOF) // zav�en� souboru 
    {
     printf("Soubor se nepoda�ilo uzav��t.");
     return 1;
    }
if (fclose(soubor2) == EOF) // zav�en� souboru 
    {
     printf("Soubor se nepoda�ilo uzav��t.");
     return 1;
    }

return (EXIT_SUCCESS);
}
