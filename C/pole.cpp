#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {


int pole[10]; // v[]je doln� index 
int i;
for (i = 0; i < 10; i++) 
{
    pole[i] = i +1;//sud� ��slo i * 2, lich� ��slo i * 2 + 1
}

for (i = 0; i < 10; i++) //provede 10 cykl� sud� ��slo i * 2, lich� ��slo i * 2 + 1
{
    printf("%d ", pole[i]); // vyp�e ��sla v indexu 1 a� 10
}
	return (EXIT_SUCCESS);
}

