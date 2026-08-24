#include <iostream>
class Base {
public:
    int publicVar;

private:
    int privateVar;

protected:
    int protectedVar;

public:
    Base() {
        publicVar = 1;
        privateVar = 2;
        protectedVar = 3;
    }

    void showBaseAccess() {
        std::cout << "Inside Base class (all members accessible here)"<< std::endl;
        std::cout << "  publicVar = " << publicVar << std::endl;
        std::cout << "  privateVar = " << privateVar << std::endl;
        std::cout << "  protectedVar = " << protectedVar << std::endl;
    }
};

class Derived : public Base {
public:
    void showDerivedAccess() {
        std::cout << " Inside Derived class"<< std::endl;
        std::cout << " publicVar = " << publicVar << std::endl;
        std::cout << " protectedVar = " << protectedVar << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    std::cout << "Access from class itself"<< std::endl;
    baseObj.showBaseAccess();

    std::cout << "Access from a derived class"<< std::endl;
    derivedObj.showDerivedAccess();

    std::cout << "Accessing from outside the class"<< std::endl;
    std::cout << " publicVar = " << baseObj.publicVar << std::endl;

    return 0;
}
