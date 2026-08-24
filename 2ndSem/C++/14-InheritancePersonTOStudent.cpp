#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
        int age;
        string name;

    public:
        Person(string name, int age)
        {
            this->name = name;
            this->age  = age;
        }

        void displayDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person
{
    private:
        string academicLvl;

    public:
        // Student's constructor must call Person's constructor
        Student(string name, int age, string academicLvl) : Person(name, age)
        {
            this->academicLvl = academicLvl;
        }

        void displayDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Academic Level: " << academicLvl << endl;
        }

        void setAcademicLevel(string lvl)
        {
            academicLvl = lvl;
        }
};

int main()
{
    Person person("Alice", 40);
    cout << "--- Person ---" << endl;
    person.displayDetails();

    cout << endl;

    Student student("Bob", 20, "Undergraduate");
    cout << "--- Student ---" << endl;
    student.displayDetails();

    cout << endl;

    student.setAcademicLevel("Graduate");
    cout << "--- Student (after level change) ---" << endl;
    student.displayDetails();

    return 0;
}
