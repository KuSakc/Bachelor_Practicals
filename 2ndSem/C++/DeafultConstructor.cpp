#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    Student() {
        roll = 6;
        name = "Sachin";
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;

    s.display();

    cout << "Author by Sachin Aryal";

    return 0;
}
