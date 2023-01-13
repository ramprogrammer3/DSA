#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArray(arr, n - 1);
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 3, 8, 3, 9, 39, 1, 0, 100, 1};
    print(arr, 10);
    sortArray(arr, 10);
    print(arr, 10);

    return 0;
}