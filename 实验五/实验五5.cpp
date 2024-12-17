#include<iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int px = 60, int py = 80) : x(px), y(py) {} 

    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p;
    p.display(); 
    p.setPoint(10, 20); 
    p.display();
    return 0;
}