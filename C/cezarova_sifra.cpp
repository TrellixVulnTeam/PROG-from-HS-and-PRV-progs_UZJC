#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

// C�zarova �ifra funguje tak �e m�sto p�vodn�ho p�smena nap�e p�smeno o 1 v�t�� p�. a=b
// retezec k zasifrovani
char s[100];
int posun; // o kolik se m� posunout
int i;
printf("Zadejte o kolik se ma posunout\n");
scanf("%d",&posun);
printf("Zadejte vetu\n");
scanf("%s",s);
printf("Puvodni zprava: %s\n", s);
// hlavni cyklus
for (i = 0; s[i] != '\0'; i++) // 
{
    s[i] = s[i] + posun; // zpr�va=zpr�va+posun 
}

printf("Zasifrovana zprava: %s\n", s);

	return (EXIT_SUCCESS);
}
