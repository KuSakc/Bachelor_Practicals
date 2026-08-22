include <string>
class Person
{
    private:
        int age;
        string name;

    public:
        Person(string name, int age){
            this -> name = name
            this -> age  = age;
        }
        void displayDetails()
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
        }
};

class Student: public Person
{
    private:
        string academicLvl;

    public:
        void displayDetails()
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "Academic Level: " << academicLvl << std::endl;
        }
        void setAcademicLevel(string lvl)
        {
            academicLvl = lvl;
        }
}

int main()
{

}
