#include <iostream>
using namespace std;
int g(int a, int b) {
	return b == 0 ? a : g(b, a % b);
}
int l(int a, int b) {
	return a / g(a, b) * b;
}
int main()
{
	int a, b;
	cout << "输入两个正整数：";
	cin >> a >> b;
	cout << "最大公约数：" << g(a, b) << endl;
	cout << "最小公倍数：" << l(a, b) << endl;
	return 0;
}