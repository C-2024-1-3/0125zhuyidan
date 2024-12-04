#include <iostream>
using namespace std;

int main()
{
    const int NUM_LOCKERS = 100;
    bool lockers[NUM_LOCKERS] = { false };


    for (int student = 1; student <= NUM_LOCKERS; ++student) {
        for (int locker = student; locker < NUM_LOCKERS; locker += student) {
            lockers[locker] = !lockers[locker]; 
        }
    }

    cout << "Open lockers: ";
    for (int i = 0; i < NUM_LOCKERS; ++i) {
        if (lockers[i]) {
            cout << i + 1 << " "; 
        }
    }
    cout << endl;
    return 0;
}