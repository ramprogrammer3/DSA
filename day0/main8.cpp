// #include <iostream>
// #include <array>
// using namespace std;
// int main(){
//     int basic[3] = {1,2,3};
//     array<int, 4> a = {1,2,3,4};
//     int size = a.size();
//     for(int i = 0; i<size; i++){
//         cout << a[i] << " ";
//     }
// }


// reverse array

// #include <iostream>
// using namespace std;
// void reverse(int arr[],int size){
//     int s = 0;
//     int e = size - 1;
//     while(s <= e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }
// void print(int arr[],int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int num[5] = {2,3,5,7,9};
//     reverse(num,5);
//     print(num,5);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> reverse(vector<int>num){
//     int s = 0;
//     int e = num.size()-1;
//     while(s <= e){
//         swap(num[s],num[e]);
//         s++;
//         e--;
//     }
//     return num;
// }
// void print(vector<int>num){
//     for(int i = 0; i<num.size(); i++){
//         cout << num[i] << " ";
//     }
// }
// int main(){
//     vector<int> num;
//     num.push_back(1);
//     num.push_back(3);
//     num.push_back(7);
//     num.push_back(8);
//     num.push_back(41);
//     vector<int> ans = reverse(num);
//     print(ans);
//     return 0;
// }


// merge two sorted array

// #include <iostream>
// using namespace std;
// void merge(int arr1[],int n, int arr2[],int m, int arr3[]){
//     int i = 0, j = 0, k= 0;
//     while (i<n && j<m)
//     {
//         if(arr1[i]<arr2[j]){
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }else{
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n){
//         arr3[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//     }
// }
// void print(int arr[],int m){
//     for(int i = 0; i<m; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] = {2,4,6};
//     int arr3[8];
//     merge(arr1,5,arr2,3,arr3);
//     print(arr3,8);
//     return 0;
// }


// move Zero

#include <iostream>
using namespace std;
void moveZero(int arr[],int size){
    int s = 0, e = size-1;
    while(s<=e){
        if(arr[s]==0){
            swap(arr[s],arr[e]);
            e--;
        }
        s++;
    }
}
void print(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int num[5] = {0,1,0,3,5};
    moveZero(num,5);
    print(num,5);
    return 0;
}