#include <iostream>
using namespace std;

// int getLastIndex(int *arr, int n, int element)
// {
//     if (n == 0)
//         return -1;
//     static int ans = 0;
//     static int count = 0;

//     if (arr[0] == element)
//     {
//         ans = count;
//     }
//     count++;
//     getLastIndex(arr + 1, n - 1, element);
//     if (ans != 0)
//     {
//         return ans;
//     }
//     else
//     {
//         return -1;
//     }
// }

int getLastIndex(int *arr, int n, int element){
    if(n== 0) return -1;

    int k = getLastIndex(arr+1, n-1, element);

    if(k != -1){
        return k + 1;
    }else{
        if(arr[0]== element){
            return 0;
        }else{
            return -1;
        }
    }
}

int main()
{
    int arr[9] = {2, 4, 8, 2, 7, 5, 3, 8, 3};

    cout << "The index is " << getLastIndex(arr, 9, 3) << endl;

    return 0;
}