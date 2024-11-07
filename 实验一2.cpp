#include <iostream>
using namespace std;
const double PI = 3.1415926;
int main()
{
	double r, h;
	cout << "半径：";
	cin >> r;
	cout << "高：";
	cin >> h;
	double volume = 1.0 / 3.0 * PI * r * r * h;
	cout << "圆锥体积：" << volume << endl;
	return 0;
}