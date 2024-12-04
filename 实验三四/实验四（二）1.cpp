#include <iostream>
using namespace std;

int main() {
    int i, j, * pi, * pj;
    pi = &i;
    pj = &j;
    i = 5; j = 7;
    cout << i << '\t' << j << '\t' << pi << '\t' << pj;
    cout << endl << &i << '\t' << &j << endl;
    return 0;
}
