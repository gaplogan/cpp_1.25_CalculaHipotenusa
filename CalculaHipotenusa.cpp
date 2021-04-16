#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cat1, cat2, hipo;

    system("cls");

    cout << "Digite o valor do primeiro cateto: ";
    cin >> cat1;
    cat1 = abs(cat1);

    cout << "Digite o valor do segundo cateto: ";
    cin >> cat2;
    cat2 = abs(cat2);

    hipo = (int)sqrt(pow(cat1, 2) + pow(cat2, 2));

    cout << "Valor da hipotenusa: " << hipo << endl;

    return 0;
}