#include<iostream>
using namespace std;

class Student {
public:
    int id;
    double score;

    Student(int i, double s) : id(i), score(s) {}
};

double max(Student students[], int size) {
    double highest = students[0].score;
    int maxId = students[0].id;
    for (int i = 1; i < size; ++i) {
        if (students[i].score > highest) {
            highest = students[i].score;
            maxId = students[i].id;
        }
    }
    return maxId;
}

int main() {
    Student students[5] = {
        Student(1, 85.5),
        Student(2, 92.0),
        Student(3, 78.5),
        Student(4, 91.0),
        Student(5, 88.0)
    };
    int topStudentId = max(students, 5);
    cout << "Top student ID: " << topStudentId << endl;
    return 0;
}