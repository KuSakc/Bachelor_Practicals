int compareTwoIntegers(int a, int b)
{
    if ( a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main ()
{
    int num_1{2}, num_2{3};
    int greatest;

    greatest = compareTwoIntegers(num_1, num_2)

    std::cout << "Greatest is " << greatest << std::endl;

    return 0;
}
