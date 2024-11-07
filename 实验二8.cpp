#include <iostream>
#include <cmath>
using namespace std;
double sqrtIterative(double a) {
    double xn = a;
    double xn1;
    do {
        xn1 = 0.5 * (xn + a / xn);
        if (abs(xn1 - xn) < 1e-5) {
            return xn1;
        }
        xn = xn1;
    } while (true);
}

int main() {
    double a;
    cout << "请输入一个正数: ";
    cin >> a;
    cout << "平方根: " << sqrtIterative(a) << endl;
    return 0;
}