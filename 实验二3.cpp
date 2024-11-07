#include <iostream>
using namespace std;
bool i(double a, double b, double c) {
	return a + b > c && a + c > b && b + c > a;
}
int main() {
	double a, b, c;
	cout << "输入三角形的三条边：";
	cin >> a >> b >> c;
	if (i(a, b, c)) {
		cout << "周长：" << a + b + c << endl;
		if (a == b || b == c ||  a== c) {
			cout << "这是一个等腰三角形。" << endl;
		}
		else {
			cout << "这不是一个等腰三角形。" << endl;
		}
	}
	else {
	cout << "这不是一个三角形。" << endl;

	}
	return 0;
}
