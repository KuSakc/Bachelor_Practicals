class Person {
public:
    virtual void role() = 0;
};

class Student : public Person {
public:
    void role() override {
        std::cout << "I am a Student" << std::endl;
    }
};

class Teacher : public Person {
public:
    void role() override {
        std::cout << "I am a Teacher" << std::endl;
    }
};

int main() {
    Person* p1 = new Student();
    Person* p2 = new Teacher();

    p1->role();
    p2->role();

    delete p1;
    delete p2;

    return 0;
}
