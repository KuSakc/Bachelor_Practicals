// Compile Time polymorphism means same function name, different behavior based on signature, resolved by the compiler at compile time

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    std::cout << calc.add(5, 10) << std::endl;
    std::cout << calc.add(2.5, 3.7) << std::endl;
    std::cout << calc.add(1, 2, 3) << std::endl;

    return 0;
}
