#include <string>
class Employee
{
    private:
        int id,salary;
        string name;

    public:
        Employee(int id,int salary,string name)
    {
        this -> id = id;
        this -> salary = salary;
        this -> name = name;
    }
        void displayDetails(){
            std::cout << "Name: " << name << std::endl;
            std::cout << "ID: " << id << std::endl;
            std::cout << "Salary: " << salary << std::endl;
            std::cout << "---" << std::endl;
        }
}

int main()
{
    Employee Kusa(36, 50000,"Kusa KC");
    Kusa.displayDetails()

    return 0;
}
