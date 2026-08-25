#include <iostream>

int findGreatest(int arr[], int length)
{
    int greatest = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }
    return greatest;
}

int main()
{
    int arr[] = {1, 2, 34, 5, 6};
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    int greatest = findGreatest(arr, arr_length);

    std::cout << "Greatest Element of array is " << greatest << std::endl;

    return 0;
}
