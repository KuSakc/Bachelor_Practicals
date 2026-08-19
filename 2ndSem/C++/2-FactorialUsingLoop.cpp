int main()
{
    int factorial_num, result {1};

    std::cin >> factorial_num ;

    int i;
    for (i=factorial_num; i>0 ; i--)
    {
        result *= i;
    }

    std::cout << "Factorial of " << factorial_num << " is " << result << std::endl;

    return 0;
}
