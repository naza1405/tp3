#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main() 
{
    string paises[5];

    cout << "Ingrese 5 nombres de paises: ";
    for (int i = 0; i < 5; i++) 
	{
        getline(cin, paises[i]);
    }

    sort(paises, paises + 5);

    cout << " Paises ordenados alfabeticamente: ";
    for (int i = 0; i < 5; i++) 
	{
        cout << paises[i] << endl;
    }
}

