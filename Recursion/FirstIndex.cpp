// #include <iostream>
// using namespace std;

// int getIndex(int *arr, int n, int element){
//     //base case
//     if(n== 0) return -1;

//     static int count = 0;
//     if(arr[0] == element){
//         return count;
//     }
//     count++;
//     return getIndex(arr+1,n-1,element);
// }

// int main(){

//     int arr[8] = {2,4,8,2,7,5,3,8};

//     cout << "The index is " << getIndex(arr,8,3) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int getIndex(int *arr, int n, int element)
{
    if(n== 0) return -1;
    if(arr[0]== element){
        return 0;
    }

    int f1 = getIndex(arr+1,n-1,element);

    if(f1== -1){
        return -1;
    }else{
        return f1 + 1;
    }


}

int main()
{
    int arr[8] = {2, 4, 8, 2, 7, 5, 3, 8};

    cout << "The index is " << getIndex(arr, 8, 3) << endl;

    return 0;
}