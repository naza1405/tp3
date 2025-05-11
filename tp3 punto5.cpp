#include <iostream>
#include <vector>

using namespace std;
int main() 
{
    int num, valor;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> num;

    vector<int> vec(num);
    cout << "Ingrese " << num << " numeros enteros: ";
    for (int i = 0; i < num; i++) {
        cin >> vec[i];
    }

    cout << "Ingrese un valor a buscar: ";
    cin >> valor;

    bool encontrado = false;
    for (int i = 0; i < num; i++) 
	{
        if (vec[i] == valor) 
		{
            cout << "El valor se encuentra en la posicion " << i;
            encontrado = true;
        }
    }

    if (!encontrado) 
	{
        cout << "El valor no se encuentra en el vector";
    }
}
	
