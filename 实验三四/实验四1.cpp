#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> uniqueNumbers;
    int number;
    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> number;
        uniqueNumbers.insert(number);
    }
    cout << "The distinct numbers are: ";
    for (int num : uniqueNumbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}