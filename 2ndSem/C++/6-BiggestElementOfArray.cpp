#include<iostream>
int main()
{
    int arr[] = {1, 2, 34, 5, 6};
    int arr_length = sizeof(arr) / sizeof(arr[0]); 

    int i, greatest=arr[0];
    for (i=1; i<arr_length; i++)
    {
        if (arr[i]>greatest)
        {
            greatest = arr[i];
        }
    }

    std::cout << "Greatest Element of array is " << greatest << std::endl;

    return 0;
}
