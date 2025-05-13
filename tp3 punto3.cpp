#include <iostream>
#include <vector>

using namespace std;
int main() {
    int num;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> num;

    vector<int> vec(num);
    cout << "Ingrese " << num << " numeros enteros:";
    for (int i = 0; i < num; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }

    cout << "Vector ordenado con burbuja:";
    for (int i = 0; i < num; i++) {
        cout << vec[i] << endl;
    }
}

