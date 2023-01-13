

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {

//     int s = 0, e = size - 1;
//     int m;

//     while (s <= e)
//     {
//         m = s + (e - s) / 2;
//         if (arr[m] == key)
//         {
//             return m;
//         }
//         if (key > arr[m])
//         {
//             s = m + 1;
//         }
//         else
//         {
//             e = m - 1;
//         }
//     }

//     return -1;
// }

// int main()
// {

//     int even[6] = {2, 8, 19, 29, 49, 90};

//     int odd[5] = {2, 3, 8, 99, 101};

//     cout << binarySearch(even, 6, 49) << endl;
//     cout << binarySearch(odd, 5, 99) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int getPivot(int *arr,int n){
//     int s = 0, e = n-1, m;
//     while(s<e){
//         m=s+(e-s)/2;
//         if(arr[m]>=arr[0]){
//             s=m+1;
//         }else{
//             e=m;
//         }
//     }
//     return s;
// }
// int main(){
//     int even[11]={4,5,7,8,9,10,11,13,1,2,3};
//     cout << "Pivot is " << getPivot(even,11) << endl;

//     return 0;
// }

// search in rotated sorted array

// #include <iostream>
// using namespace std;

// int getPivot(int *arr, int n)
// {

//     int s = 0, e = n - 1, m;

//     while (s < e)
//     {
//         m = s + (e - s) / 2;

//         if (arr[m] > arr[0])
//         {
//             s = m + 1;
//         }
//         else
//         {
//             e = m;
//         }
//     }

//     return s;
// }

// int binarySearch(int *arr, int s, int e, int key)
// {

//     int m;

//     while (s <= e)
//     {
//         m = s + (e - s) / 2;

//         if (arr[m] == key)
//         {
//             return m;
//         }
//         else if (key > arr[m])
//         {
//             s = m + 1;
//         }
//         else
//         {
//             e = m - 1;
//         }
//     }

//     return -1;
// }

// int main()
// {

//     int arr[10] = {69, 70, 80, 90, 92, 98, 100, 2, 3, 5};

//     int key = 70;
//     int n = 10;

//     int pivot = getPivot(arr, 10);
//     int ans;

//     if (key >> arr[pivot] && key <= arr[n - 1])
//     {
//         ans = binarySearch(arr, pivot, n - 1, key);
//     }
//     else
//     {
//         ans = binarySearch(arr, 0, pivot - 1, key);
//     }

//     if(ans == -1){
//         cout << "Element not found " << endl;
//     }else{
//         cout << "Element is " << arr[ans] << endl;
//     }

//     return 0;
// }

// peak element in mountain array

// #include <iostream>
// using namespace std;

// int getPeak(int *arr, int n)
// {

//     int s = 0, e = n - 1, m;
//     while (s < e)
//     {
//         m = s + (e - s) / 2;
//         if (arr[m] > arr[0])
//         {

//             s = m + 1;
//         }
//         else
//         {

//             e = m;
//         }
//     }
//     return s - 1;
// }

// int main()
// {

//     int arr[14] = {23, 34, 56, 77, 89, 90, 92, 2, 3, 5 , 6, 6, 6, 7};

//     cout << "The peak element is at index " << getPeak(arr, 14) << endl;

//     return 0;
// }
