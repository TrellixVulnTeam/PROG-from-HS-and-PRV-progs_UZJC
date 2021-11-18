#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE * p_soubor = fopen("dopis.txt", "w"); // fopen n�zev souboru, w=write/r=reade/a=apende
    if (p_soubor == NULL) // kontrolujem jestli soubor existuje/je m�sto na disku/m�me pr�va k p��stupu
    {
        printf("Soubor se nepoda�ilo otev��t pro z�pis, zkontrolujte pros�m opr�vn�n�.");
        return 1; // program kon��
    }

    fprintf(p_soubor, "Drah� Brynn,\n");
    fprintf(p_soubor, "opatruj se, Malcolm unikl a jist� si pro mne brzy p�ijde jako pro prvn�ho.\n");
    fprintf(p_soubor, "Mus� nav�st Brandona, dov�st ho k amuletu, kl��em k za��k�vadlu by mo�n�\n");
    fprintf(p_soubor, "mohla b�t levandulov� r��e.\n\n");
    fprintf(p_soubor, "Kallak\n");

    if (fclose(p_soubor) == EOF) // zav�en� souboru
    {
        printf("Soubor se nepoda�ilo uzav��t.");
        return 1;
    }

    return (EXIT_SUCCESS);
}
