#include <iostream>
#include <cmath>
#include <cctype>

int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char c = hexString[i];
        int value;
        if (isdigit(c)) {
            value = c - '0';
        }
        else if (islower(c)) {
            value = c - 'a' + 10;
        }
        else if (isupper(c)) {
            value = c - 'A' + 10;
        }
        result += value * static_cast<int>(pow(16, len - 1 - i));
    }
    return result;
}

int main() {
    std::string hex;
    std::cout << "请输入十六进制数: ";
    std::cin >> hex;

    std::cout << "parseHex(\"" << hex << "\") = " << parseHex(hex.c_str()) << std::endl;

    return 0;
}