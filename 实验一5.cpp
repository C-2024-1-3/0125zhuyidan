#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "输入华氏温度：" << endl;
    cin>> f;
	c = 5.0 / 9.0* (f - 32);
	cout << fixed << setprecision(2);
	cout << "摄氏温度是：" << c << endl;
	return 0;
}
