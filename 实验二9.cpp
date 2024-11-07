#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double apple_price = 0.8;
    int buy_count = 2;
    double total_cost = 0;
    int total_days = 0;

    while (buy_count <= 100) {
        total_cost += buy_count * apple_price;
        total_days += 1;
        buy_count *= 2; 
    }

    double average_cost = total_cost / total_days;
    cout << "平均每天花费: " << average_cost << "元" << endl;

    return 0;
}