#include <iostream>
#include <cmath>
using namespace std;
double calculate(double x) {
	if (0 < x && x < 1) {
		return 3 - 2 * x;
	}
	else if (1 <= x && x < 5) {
		return 2 / (4 * x) + 1;
	}
	else if (5 <= x && x < 10) {
		return x * x;
	}
	return 0;
}
int main()
{
	double x;
	cout << "请输入x的值：";
	cin >> x;
	cout << "计算结果：" << calculate(x) << endl;
	return 0;
}