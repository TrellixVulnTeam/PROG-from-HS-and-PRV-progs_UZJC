#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

printf("Zadej sv� jm�no: ");
char jmeno[51];
scanf("%50[^\n]s", jmeno); // ^ ukon�� v�pis a� po zn��knut� ENTER
printf("Ahoj u�ivateli %s, v�t�m t�!", jmeno);
	return (EXIT_SUCCESS);
}
