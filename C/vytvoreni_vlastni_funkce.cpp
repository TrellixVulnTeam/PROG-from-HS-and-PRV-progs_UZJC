#include <stdio.h>
#include <stdlib.h>

void pozdrav(void) // void nem� ��dnou n�vratovou hodnotu
{
    printf("Ahoj, v�ele t� tu v�t�m!\n"); // vytvo�en� funkce
}

int main(int argc, char** argv)
{

pozdrav(); // zavol�n� funkce

    return (EXIT_SUCCESS);
}
