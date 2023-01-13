#include <iostream>
using namespace std;

void reverseArray(int *arr, int s, int e)
{

    if (s >= e)
        return;

    swap(arr[s], arr[e]);
    s++, e--;

    reverseArray(arr, s, e);
}

void printArray(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[5] = {1, 2, 4, 5, 7};

    reverseArray(arr, 0, 4);

    printArray(arr, 5);
}