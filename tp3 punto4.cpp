#include <iostream>
#include <vector>

using namespace std;
int main() {
    int num;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> num;

    vector<int> vec(num);
    cout << "Ingrese " << num << " numeros enteros: ";
    for (int i = 0; i < num; i++) {
        cin >> vec[i];
    }

    for (int i = 1; i < num; i++) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }

    cout << "Vector ordenado con insercion: ";
    for (int i = 0; i < num; i++) 
	{
        cout << vec[i] << endl;
    }
}

