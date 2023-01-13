// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void swapArray(int arr[], int size){
//     for(int i = 0; i<size; i = i + 2){
//         if(i + i < size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// int main(){
//     int num[5] = { 1,2,3,4,5};
//     int num1[6] = {2,3,4,6,8,10};

//     swapArray(num,5);
//     swapArray(num1,6);

//     printArray(num,5);
//     printArray(num1,6);

// }


// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int num[10] = { 1,2,3,4,5,6,7,8,9,10};
//     printArray(num, 10);
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int BinarySearch(int arr[], int size, int key){
//     int start = 0; 
//     int end = size - 1;
//     int mid = (start + end) / 2;
//     while (start <= end){
//         if(arr[mid] == key){
//             return mid;
//         }
//         if(key > arr[mid]){
//             start = mid + 1;
//         }else{
//             end = mid - 1;
//         }
//         mid = (start + end) /2;
//     }
//     return -1;
// }
// int main(){
//     int even[6] = {2, 4, 8, 10, 20, 50};
//     int odd[7] = {1,2,3,4,5,7,9};
//     int oddIndex = BinarySearch(odd, 7, 100);
//     int oddIndex1 = BinarySearch(even, 6, 100);
//     cout << "Odd index is " << oddIndex << endl;
//     cout << "even index is " << oddIndex1 << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int firstOccurence(int arr[], int size, int key){
//     int s = 0, e = size - 1, m, ans = -1; 
//     while(s <= e){
//         m =  (s + (e - s)/2);
//         if(arr[m] == key){
//             ans = m;
//             e = m - 1;
//         }else if(key < arr[m]){
//             e = m - 1;
//         }else if( key > arr[m]){
//             s = m + 1;
//         }
//     }
//     return ans;
// }
// int lastOccurence(int arr[], int size, int key){
//     int s = 0, e = size - 1, m, ans = -1; 
//     while(s <= e){
//         m =  (s + (e - s)/2);
//         if(arr[m] == key){
//             ans = m;
//             s = m + 1;
//         }else if(key < arr[m]){
//             e = m - 1;
//         }else if( key > arr[m]){
//             s = m + 1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int num[5] = {1,2,3,3,5};
//     cout << "first occurence is " << firstOccurence(num,5, 10) << endl;
//     cout << "last occurence is " << lastOccurence(num,5, 10) << endl;
//     return 0;
// }