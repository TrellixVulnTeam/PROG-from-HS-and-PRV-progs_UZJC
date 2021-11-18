#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Otev�en� souboru pro p�ips�n�
    FILE * p_soubor = fopen("dopis.txt", "a"); // pro p�id�n�
    if (p_soubor == NULL)
    {
        printf("Soubor se nepoda�ilo otev��t pro p�ips�n�, zkontrolujte pros�m opr�vn�n�.");
        return 1;
    }

    // Z�pis ��dek do souboru
    fprintf(p_soubor, "\nPS: Vy��dej pomoc od Darma a Zanthie pro vybudov�n� sil amuletu.\n"); // dop�e naposledn� ��dnek

    // Uzav�en� souboru
    if (fclose(p_soubor) == EOF)
    {
        printf("Soubor se nepoda�ilo uzav��t.");
        return 1;
    }

    return (EXIT_SUCCESS);
}
