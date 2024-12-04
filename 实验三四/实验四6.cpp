#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }
    while (*s) {
        char ch = tolower(*s);
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
        s++;
    }
}

int main() {
    const int SIZE = 100;
    char str[SIZE];
    int counts[26] = { 0 };

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    count(str, counts);

    cout << "Letter counts:" << endl;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << char(i + 'a') << ": " << counts[i] << " times" << endl;
        }
    }
    return 0;
}