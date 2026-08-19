int main()
{
    int num, prev, result{0};

    for (i=num; i>0; i/=10)
    {
        prev = i;
        i= (i%10)*10;
        result += prev - i;
    }

    std::cout << "Sum of digits " << num << " is " << result << std::endl;

   return 0;
}
