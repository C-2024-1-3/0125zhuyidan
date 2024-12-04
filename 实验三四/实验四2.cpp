#include <iostream>
using namespace std;

void bubbleSort(double list[], int listSize) {
    bool changed;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double list[10];
    cout << "Enter ten double numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> list[i];
    }
    bubbleSort(list, 10);
    cout << "Sorted numbers: ";
    for (int i = 0; i < 10; ++i) {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}