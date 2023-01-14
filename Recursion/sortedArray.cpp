#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    return isSorted(arr + 1, n - 1);
}

int main()
{
    int arr[5] = {2, 20, 5, 7, 9};
    bool ans = isSorted(arr, 5);
    if (ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}