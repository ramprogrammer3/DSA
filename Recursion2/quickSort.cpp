#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = s + count;
    // swap(arr[pivotIndex], arr[s]);
    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[s];
    arr[s] = temp;

    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            // swap(arr[i++], arr[j--]);
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{

    if (s > e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[13] = {4, 1, 3, 5, 2, 9, 9, 9, 9, 10, 19, 0, -1};

    quickSort(arr, 0, 12);

    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}