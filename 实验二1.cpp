#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "输入一个字符：" << endl;
	cin >> c;
	if (c >= 'a' && c <= 'z') {
		cout << "大写字母：" << static_cast<char>(c - 'a' + 'A') << endl;
	}
	else {
		cout << "后继字符的ASCII码值：" << static_cast<int>(c + 1) << endl;
	}
	return 0;
}
