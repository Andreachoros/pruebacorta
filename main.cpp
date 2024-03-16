#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de números que desea ordenar: ";
    cin >> n;

    vector<int> numbs(n);

    cout << "Digite los números:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbs[i];
    }


    bubbleSort(numbs);


    cout << "Se listaran los numeros de menor a mayor:" << endl;
    for (int numr : numbs) {
        cout << numr << " ";
    }
    cout << endl;

    return 0;
}