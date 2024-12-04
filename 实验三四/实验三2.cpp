#include <iostream>
#include <vector>
using namespace std;
bool is_prime(int num);
int main() {
    vector<int> primes;
    for (int i = 2; primes.size() < 200; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i];
        if ((i + 1) % 10 == 0) cout << endl;
        else cout << " ";
    }

    return 0;
}
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}