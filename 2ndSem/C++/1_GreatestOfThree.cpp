int main ()
{
    int a{2}, b{3}, c{5};
    int greatest;

    if ( a>b && a>c)
    {
        greatest = a;
    }
    else if ( b>a && b>c)
    {
        greatest = b;
    }
    else if ( c>a && c>b) {
        greatest = c;
    }

    std::cout << "Greatest is " << greatest << std::endl;

    return 0;
}
