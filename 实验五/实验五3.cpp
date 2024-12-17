#include<iostream>
using namespace std;

class Cuboid {
private:
    double length, width, height;

public:
    void input() {
        cout << "Enter length, width, height: ";
        cin >> length >> width >> height;
    }

    double volume() {
        return length * width * height;
    }

    void displayVolume() {
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; ++i) {
        cuboids[i].input();
        cuboids[i].displayVolume();
    }
    return 0;
}