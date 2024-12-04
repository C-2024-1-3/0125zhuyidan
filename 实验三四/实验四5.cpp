#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    const char* p = strstr(s2, s1);
    if (p != nullptr) {
        return p - s2; 
    }
    return -1; 
}

int main() {
    const int MAX_SIZE = 100; 
    char s1[MAX_SIZE], s2[MAX_SIZE]; 

    cout << "Enter the first string: ";
    cin.getline(s1, MAX_SIZE); 

    cout << "Enter the second string: ";
    cin.getline(s2, MAX_SIZE); 

    cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << indexOf(s1, s2) << endl;
    return 0;
}