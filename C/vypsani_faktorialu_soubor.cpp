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
FILE * soubor1 = fopen("faktorial.txt", "w"); // vytvo�en� txt souboru	

if (soubor1 == NULL) // kontrola pro otev�en�  
	{
	 printf("Soubor se nepoda�ilo otev��t pro z�pis, zkontrolujte pros�m opr�vn�n�.");
	 return 1;
	}

int n;
printf("Zadejte stupen faktorialu: \n");
scanf("%d",&n);

for(int i=1;i<=n;i++)
	{
     fprintf(soubor1,"%d!=%f \n",i, faktorial(i)); // vyps�n� do souboru
	}

if (fclose(soubor1) == EOF) // zav�en� souboru 
    {
     printf("Soubor se nepoda�ilo uzav��t.");
     return 1;
    }
    
return (EXIT_SUCCESS);

}
