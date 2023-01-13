// #include <iostream>
// using namespace std;

// int main(){

//     int i = 5;

//     //creating ref variable

//     int& j = i;

//     cout << i << endl;
//     i++;
//     cout << i << endl;
//     j++;
//     cout << i << endl;
//     cout << j << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void update1(int n){
//     n++;
// }
// void update2(int& n){
//     n++;
// }

// int& fun(int a){
//     int num = a;
//     int& ans = num;
//     return ans;
// }

// int main(){

//     int n = 5;
//     cout << "Befor " << n << endl;

//     update1(n);
//     cout << "After " <<  n << endl;

//     update2(n);
//     cout << "After " <<  n << endl;

    
//     cout << fun(n) << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int getSum(int* arr,int n){
//     int sum = 0; 
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//     }

//     return sum;
// }

// int main(){
    // char ch = 'a';
    // cout << sizeof(ch) << endl;
    // char* c = &ch;
    // cout << sizeof(c) << endl;

//     int n;
//     cin >> n;
//     int* arr = new int[n];

//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     int ans = getSum(arr,n);
//     cout << " sum = " << ans << endl;

// }



// 2D array using pointer


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int** arr = new int*[n];

//     for(int i = 0; i<n; i++){
//         arr[i] = new int[n];
//     }

//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cin >> arr[i][j];
//         }
//     }
    
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout << arr[i][j] << " ";
//         }
        
//         cout << endl;
//     }


//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int row;
//     cin >> row;

//     int col;
//     cin >> col;

//     int** arr = new int*[row];

//     for(int i = 0; i<row; i++){
//         arr[i] = new int[col];
//     }

//     for(int i = 0; i<row; i++){
//         for(int j = 0; j<col; j++){
//             cin >> arr[i][j];
//         }
//     }
    
//     for(int i = 0; i<row; i++){
//         for(int j = 0; j<col; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for(int i = 0; i<row; i++){
//         delete []arr[i];
//     }
//     delete []arr;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// #define PI 3.14

// int main(){
//     int r = 5;
//     // double pi = 3.14;
//     double area = PI * r * r;

//     cout << "Area is " << area << endl;
// }



// #include <iostream>
// using namespace std;

// int score = 10;

// void b(int& i){
//     cout << "Score in b " << score << endl;
//     cout << i << endl;
   
// }
// void a(int& i){
//     cout << "Score in a " << score << endl;
//     cout << i << endl;
//     score++;
//     b(i);
// }
// int main(){
//     int i = 5;
//     score++;
//     cout << "Score in main " << score << endl;
//     a(i);
// }


// #include <iostream>
// using namespace std;
// void fun(int a, int b){
//     a++;
//     b++;
//     cout << a << b << endl;
// }

// int main(){
//     int a = 5, b = 10;
//     fun(a,b);
//     cout << a <<  b << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// void fun(int a, int b){
//     a++;
//     b++;
//     cout << a << b << endl;
// }

// int main(){
//     int a = 5, b = 10;
//     int ans = 0;
//     if(a > b){
//         ans = a;
//     }else{
//         ans = b;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// inline int getMax(int& a, int& b){
//     return (a > b) ? a : b;
// }

// int main(){
//     int a = 5, b = 10;
//     int ans = 0;

//     ans = getMax(a,b);
//     cout << ans << endl;

//     a = 20, b= 2;
//     ans = getMax(a,b);
//     cout << ans << endl;
// }


// #include <iostream>
// using namespace std;
// void print(int arr[], int n, int start = 0){
//     for(int i = start; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int arr[5] = {1,8,9,0,43};
//     print(arr, 5);
// }


