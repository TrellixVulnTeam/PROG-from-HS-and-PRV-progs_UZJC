#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

int i;
char veta[1501];
printf ("Zadejte vetu: \n");
scanf (" %1500[^\n]s", veta);
for (i = 0; veta[i] != '\0'; i++) //podminka funguje dokud znak ve v�t� je r�zn� od 0, !=0
    printf("%c ", veta[i]); // %c jednotliv� znak, mezera za %c mezi ka�d�m zankem mezera 
	return (EXIT_SUCCESS);
}
