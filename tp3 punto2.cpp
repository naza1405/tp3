#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() 
{
    int num;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> num;

    vector<int> vec(num);
    cout << "Ingrese " << num << " numeros enteros: ";
    for (int i = 0; i < num; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cout << "Vector ordenado:";
    for (int i = 0; i < num; i++) {
        cout << vec[i] << endl;
    }
}

