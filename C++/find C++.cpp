#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    const int delkaPole = 5; 
    int pole[delkaPole] = { 1, 7, 3, 4, 10 };
    int hledanyPrvek = 7;
    int *i = find(pole, pole + delkaPole, hledanyPrvek); // *i-pointer, find d� adresu kde se prvek nach�z�,,, adresa po��tku pole, adresa konce pole
    int pozice = i - pole; // pole adresa po��tku,i adresa 7
    if (pozice < delkaPole)
        cout << "Prvek " << hledanyPrvek << " nalezen na pozici: " << pozice << ", poradi je " << pozice+1 << endl;
    else
        cout << "Prvek nenalezen." << endl;
    cin.get();
    return 0;
}
