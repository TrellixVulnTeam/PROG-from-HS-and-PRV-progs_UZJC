#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
char text [1024];
FILE * p_soubor = fopen("dopis1.txt", "a"); // musi byt vytvoren txt dopis1.txt

if (p_soubor == NULL)
	{
	 printf("Soubor se nepoda�ilo otev��t pro z�pis, zkontrolujte pros�m opr�vn�n�.");
	}

printf("Zadejte text pro pridani: ");
scanf(" %1023[^\n]", text); // samotne zapsani max 1023 znaku

fputs(text, p_soubor);
fputs("\n",p_soubor);

if (fclose(p_soubor) == EOF) // zav�en� souboru 
    {
     printf("Soubor se nepoda�ilo uzav��t.");
     return 1;
    }

return (EXIT_SUCCESS);

}
