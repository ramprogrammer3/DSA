// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int chotti;
//     if(n == 0){
//         return 1;
//     }
//      chotti = n* factorial(n -1);
//     // int badi = n * chotti;
//     return chotti;
// }

// int main(){
//     int n;
//     cin >> n;
//     int ans = factorial(n);
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int power(int n){

//     // base case
//     if(n == 0) return 1;
//     // recursive relation

//     int smallerProblem = power(n-1);
//     int biggerProblem = 2 * smallerProblem;

//     return biggerProblem;
// }

// int main(){
//     int n;
//     cin >> n;

//     int ans = power(n);
//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printCounting(int n){

//     // base case
//     if(n== 0) return ;

//     cout << n << " ";
//     printCounting(n - 1);
//     if(n==50) return ;
//     cout << n << " ";
// }

// int main(){
//     int n;
//     cin >> n;

//     printCounting(n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reachHome(int s, int e){
//     cout << "step " << s << "  Destination " << e <<  endl;
//     // base case
//     if(s == e){
//         cout << "Pahuch gaya " << s << endl;
//         return ;
//     }
//     s++;
//     // recursive call
//     reachHome(s,e);
// }

// int main(){
//     int n;
//     cin >> n;
//     int destination;
//     cin >> destination;

//     reachHome(n,destination);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sayDigit(int n, string arr[]){

//     // base case
//     if(n==0){
//         cout << arr[0];
//         return 0;
//     }

//     int digit = n % 10;
//     n = n / 10;
//     cout << arr[digit] << " ";

//     // Recursive call
//     sayDigit(n,arr);
// }

// int main(){

//     int n;
//     cin >> n;
//     string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

//     sayDigit(n,arr);

//     return 0;
// }

// check array is sorted or not using recursinon

// #include <iostream>
// using namespace std;
// bool sorted(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     if (arr[0] > arr[1])
//     {
//         return 0;
//     }
//     else
//     {
//         bool ans = sorted(arr + 1, n - 1);
//         return ans;
//     }
// }
// int main()
// {
//     int arr[5] = {2, 5, 5, 8, 90};
//     int ans = sorted(arr, 5);

//     if (ans)
//     {
//         cout << "Sorted array " << endl;
//     }
//     else
//     {
//         cout << "Array is not sorted " << endl;
//     }
//     return 0;
// }

// print sum of array using recursion

// #include <iostream>
// using namespace std;

// int sumOfArr(int arr[],int n){

//     if(n==0) return 0;
//     if(n==1) return arr[0];

//     int ans = arr[0] + sumOfArr(arr+1,n-1);
//     return ans;
// }

// int main(){

//     int arr[10] = {1,3,4,5,6,7,8,9};

//     int ans = sumOfArr(arr,10);

//     cout << "Sum of array is " << ans << endl;

//     return 0;
// }

// linear search using recursion

// #include <iostream>
// using namespace std;

// bool LinearSearch(int *arr, int n, int key)
// {
//     // base case
//     if (n == 0)
//         return 0;
//     if (arr[0] == key)
//         return 1;
//     return LinearSearch(arr + 1, n - 1, key);
// }

// int main()
// {
//     int key;
//     cin >> key;

//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 91, 10};

//     bool ans = LinearSearch(arr, 10, key);

//     if (ans)
//     {
//         cout << "Found " << endl;
//     }
//     else
//     {
//         cout << "Not found " << endl;
//     }
//     return 0;
// }



// Binary search using recursion


// #include <iostream>
// using namespace std;

// bool BinarySearch(int *arr,int n,int key){

//     // base case
//     if(n==0){
//         return 0;
//     }
//     if(n== 1){
//         if(arr[0] == key){
//             return 1;
//         }
//         return 0;
//     }

//     int s = 0, e = n-1;
//     int m = (s + e) /2;

//     if(arr[m]== key){
//         return 1;
//     }else if(arr[m]<key){
//         n = m+1;
        
//       return  BinarySearch(arr+m+1,n,key);
//     }else{
//         n = n - (m + 1);
//         return BinarySearch(arr+m+1,n, key);
//     }

// }

// int main(){

//     int arr[5] = {2,3,4,5,7};
//     int key = 5;

//     int ans = BinarySearch(arr,5,key);

//     if(ans){
//         cout << "Element found " << endl;
//     }else{
//         cout << "Element not found " << endl;
//     }

//     return 0;
// }