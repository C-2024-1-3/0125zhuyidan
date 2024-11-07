#include <iostream>
using namespace std;
int main()
{
	char op;
	double num1, num2;
	cout << "输入运算符（+，-，*，/，%）：";
	cin >> op;
	cout << "输入两个数字：";
	cin >> num1 >> num2;
	switch (op) {
	case'+':
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		break;
	case'-':
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		break;
	case'*':
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		break;
	case'/':
		if (num2 != 0) {
			cout<<num1<<"/"<< num2 << "=" << num1 / num2 << endl;
		}
		else {
			cout<<"除数不能为零。" << endl;
		}
		break;
	case'%':
		if (num2 != 0) {
			cout << num1 << "%" << num2 << "=" << static_cast<int>(num1) % static_cast<int>(num2) << endl;
		}
		else {
			cout << "除数不能为零。" << endl;
		}
		break;
	default:
		cout << "非法运算符。" << endl;
	}
	return 0;
}