#include <iostream>
using namespace std;

int sumOfArray(int *arr, int n)
{
    if (n == 1)
        return arr[0];
    return arr[0] + sumOfArray(arr + 1, n - 1);
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Sum of an array is " << sumOfArray(arr, 10) << endl;

    return 0;
}