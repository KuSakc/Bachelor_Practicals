#include <string>
#include <iostream>

class Employee
{
    private:
        int id, salary;
        std::string name;

    public:
        Employee(int id, int salary, std::string name)
        {
            this->id = id;
            this->salary = salary;
            this->name = name;
        }

        void displayDetails()
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "ID: " << id << std::endl;
            std::cout << "Salary: " << salary << std::endl;
            std::cout << "---" << std::endl;
            std::cout<<"by Sakcsam Parajuli"std::endl;
        }
};  

int main()
{
    Employee Kusa(36, 50000, "Kusa KC");
    Kusa.displayDetails();   

    return 0;
}
