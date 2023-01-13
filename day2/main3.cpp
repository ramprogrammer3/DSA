#include <iostream>
using namespace std;

void reveseArray(int arr[], int n)
{
    int j = n - 1;
    for (int i = 0; i <= j; i++)
    {
        swap(arr[i], arr[j]);
        j--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {3, 5, 7, 9, 0};
    printArray(arr, 5);
    reveseArray(arr, 5);
    printArray(arr, 5);

    return 0;
}