#include <iostream>
using namespace std;
int gcd(int a, int b);

int main() {
    int m, n;
    cout << "请输入两个自然数m和n: ";
    cin >> m >> n;

    cout << "最大公约数: " << gcd(m, n) << endl;

    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}