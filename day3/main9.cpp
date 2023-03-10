#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    if (n == 0)
        return false;

    if (arr[0] == key)
        return true;

    return search(arr + 1, n - 1, key);
}

int main()
{

    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;
    bool ans = search(arr, size, key);

    cout << "Element is " << ans << endl;

    return 0;
}