#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s(6, "Sachin");
    s.display();
    cout << "Author by Sachin Aryal";
    return 0;
}
