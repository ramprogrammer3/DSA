// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     fill_n(arr,10,-1);
//     for(int i = 0; i<10; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int number[15];
//     cout << number[0] << endl;
//     cout << number[1] << endl;
//     cout << number[14] << endl;
//     cout << "Everything is fine " << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     // int number[15];
//     // cout << number[100] << endl;


//     // int second[3] = {3,4,5};
//     // cout << second[2] << endl;


//     // int third[15] = {3,4,};
//     // // cout << third[1] << endl;
//     // for(int i = 0; i<15; i++){
//     //     cout << third[i] << " ";
//     // }


//     // int four[10] = {0};
//     // for(int i = 0; i<10; i++){
//     //     cout << four[i] << " ";
//     // }

//     int four[10] = {1};
//     for(int i = 0; i<10; i++){
//         cout << four[i] << " ";
//     }

//     cout << "Everything is fine " << endl;
//     return 0;
// }






// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int number[10] = {1,2,3,4,5,5};
//     cout << sizeof(number) << endl;
//     printArray(number, 6);

//     char ch[5] = {'a','b','r','s','p'};
//     for(int i = 0; i<5; i++){
//         cout << ch[i] << " ";
//     }
//     // printArray(ch,5);

//     double firstDouble[5];
//     float firstFloat[5];
//     bool firstBool[10];

//     cout << endl <<  "Everything is fine " << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int getMin(int num[], int n){
//     int min = INT_MAX;
//     for(int i = 0; i<n; i++){
//         if(num[i] < min){
//             min = num[i];
//         }
//     }
//     return min;
// }

// int getMax(int num[], int n){
//     int max = INT_MIN;
//     for(int i = 0; i<n; i++){
//         if(num[i] > max){
//             max = num[i];
//         }
//     }
//     return max;
// }

// int main(){

//     int size;
//     cin >> size;
//     int num[100];
//     for(int i = 0; i<size; i++){
//         cin >> num[i];
//     }

//     cout << "Maximum value is " << getMax(num, size) << endl;
//     cout << "Minimum value is " << getMin(num, size) << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int getMin(int num[], int n){
//     int mini = INT_MAX;
//     for(int i = 0; i<n; i++){
//        mini = min(mini, num[i]);
//     }
//     return mini;
// }
// int getMax(int num[], int n){
//     int maxi = INT_MIN;
//     for(int i = 0; i<n; i++){
//         maxi = max(maxi, num[i]);
//     }
//     return maxi;
// }
// int main(){

//     int size;
//     cin >> size;
//     int num[100];
//     for(int i = 0; i<size; i++){
//         cin >> num[i];
//     }

//     cout << "Maximum value is " << getMax(num, size) << endl;
//     cout << "Minimum value is " << getMin(num, size) << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// void update(int arr[], int size){
//     arr[0] = 120;
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl << "inside the function " << endl;
// }
// int main(){
//     int arr[3] = {2,3,4};
//     update(arr,3);
//     for(int i = 0; i<3; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// void sumOfArray(int arr[], int size){
//     int sum = 0;
//     for(int i = 0; i<size; i++){
//         sum = sum + arr[i];
//     }
//     cout << "Sum of array is " << sum << endl;
// }
// int main(){
//     int size;
//     cin >> size;
//     int num[100];
//     for(int i = 0; i<size; i++){
//         cin >> num[i];
//     }
//     sumOfArray(num, size);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// bool search(int arr[], int size, int key){
//     for(int i = 0; i<size; i++){
//         if(key == arr[i])
//             return 1;
//     }
//     return 0;  
// }
// int main(){
//     int num[10] = {1,2,4,10, -3,5,-22,78,9,0};
//     int key;
//     cout << "Enter key you want to search ";
//     cin >> key;
//     int ans = search(num, 10, key);
//     if(ans)
//         cout << "Element is present" << endl;
//     else
//         cout << "Element is absent " << endl;
//    return 0;         
// } 


// #include <iostream>
// using namespace std;
// void reverse(int arr[], int size){
//     int start = 0;
//     int end = size - 1;
//     while(start <= end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     cout << endl;
// }
// void printArray(int arr[], int size){
//     for(int i =0; i<size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main(){
//     int num[6] = {1,2,3,4,5,6};
//     int num1[5] = {10, 20, 30, 40,50};

//     reverse(num, 6);
//     reverse(num1, 5);

//     printArray(num, 6);
//     printArray(num1, 5);
//     return 0;
// }


