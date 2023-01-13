#include <iostream>
using namespace std;

int min(int *arr, int n)
{

    if (n == 0)
        return 0;

    if (n == 1)
        return arr[0];

    int minIndex = 0;

    int min = arr[minIndex];

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int getMax(int *arr, int n)
{

    if (n == 0)
        return 0;

    if (n == 1)
        return arr[0];

    int minIndex = 0;

    int max = arr[minIndex];

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[5] = {3, 9, 90, 34, 40};

    cout << "minimum element is " << min(arr, 5) << endl;

    cout << "maximum element is " << getMax(arr, 5) << endl;

    return 0;
}