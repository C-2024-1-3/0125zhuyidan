#include <iostream>
using namespace std;
int main() {
	char c;
	int l = 0, s = 0, d = 0, o = 0;
	cout << "请输入一行字符：";
	while ((c = cin.get()) != '\n') {
		if (isalpha(c)) {
			++l;
		}
		else if (isspace(c)) {
			++s;
		}
		else if (isdigit(c)) {
			++d;
		}
		else {
			++o;
		}
	}
	cout << "英文字母个数：" << l << endl;
	cout << "空格个数：" << s << endl;
	cout << "数字字符个数：" << d << endl;
	cout << "其他字符个数：" << o << endl;
	return 0;
}
