// #include <iostream>
// using namespace std;
// int main(){
//     int num = 1;
//     // char ch = '1';
//     switch (num)
//     {
//     case 1:
//         cout << "first " << endl;
//         cout << "it is first again " << endl;
//         break;
//     case 2:
//         cout << "second " << endl;
//         break;
//     case '1':
//         cout << "character  " << endl;
//         break;
    
//     default:
//         cout << "it is default case ";
//         break;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     double a, b;
//     cout << "Enter value of a : ";
//     cin >> a;
//     cout << "Enter value of b : ";
//     cin >> b;
//     cout << "Enter operator (+, -, *, / , %) : ";
//     char ch;
//     cin >> ch;
//     switch(ch){
//         case '+':
//             cout << (a + b) << endl;
//             break;
//         case '-':
//             cout << (a - b) << endl;
//             break;
//         case '*':
//             cout << (a * b) << endl;
//             break;
//         case '/':
//             cout << (a / b) << endl;
//             break;
//         case '%':
//             cout << int(a) % int(b)  << endl;
//             break;
//         default:
//             cout << "Enter valid operator or number ";
//             break;                        
//     }
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int amount;
//     cin >> amount;
//     int RS100, RS50, RS20, RS1;
//     switch(1){
//         case 1:
//             RS100 = amount / 100;
//             amount = amount % 100;
//             cout << "No of 100 note is " << RS100 << endl;
//         case 2:
//             RS50 = amount / 50;
//             amount = amount % 50;
//             cout << "No fo 50 note is " << RS50 << endl;
//         case 3:
//             RS20 = amount / 20;
//             amount = amount %20;
//             cout << "No of 20 note is " << RS20 << endl;
//         case 4:
//             RS1 = amount / 1;
//             amount = amount % 1;
//             cout << "No of 1 note is " << RS1 << endl;        
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int a, b, ans = 1;
//     cin >> a >> b;
//     for(int i = 1; i<=b; i++){
//         ans = ans * a;
//     }
//     cout << ans << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void power(int a, int b){
//     int ans = 1;
//     for(int i = 1; i<=b; i++){
//         ans = ans * a;
//     }
//     cout << "ans = " << ans;
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     power(a,b);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// // 1 -> Even
// // 0 -> Odd
// bool isEven(int n){
//     if(n & 1){
//         return 0;
//     }
//     return 1;
// }

// int main(){
//     int number;
//     cin >> number;
//     int ans = isEven(number);
//     if(ans)
//         cout << "Even number";
//     else
//         cout << "Odd number";
//      return 0;   
// }


// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int ans = 1;
//     for(int i = 1; i<=n; i++){
//         ans = ans * i;
//     }
//     return ans;
// }
// int nCr(int n, int r){
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n - r);
//     return num / denom;
// }
// int main(){
//     int n, r;
//     cin >> n >> r;
//     int ans = nCr(n,r);
//     cout << "ans = " << ans << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void printCounting(int n){
//     for(int i = 1; i<=n; i++){
//         cout << i << " ";
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     printCounting(n);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// // 1 -> Prime number
// // 0 -> not a prime number

// bool isPrime(int n){
//     if(n < 0){
//         n = -n;
//     }
//     for(int i = 2; i<n; i++){
//         if(n % i == 0){
//             return 0;
//         }
//     }
//    return 1; 
// }
// int main(){
//     int n;
//     cin >> n;
//     int ans = isPrime(n);
//     if(ans){
//         cout << "Number is a prime " << endl;
//     }
//     else{
//         cout << "Number is not a prime " << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void dummy(int n){
//     n++;
//     cout << "value of n is " << n << endl;
// }
// int main(){
//     int n;
//     cin >> n;
//     dummy(n);
//     cout << "value of n in main " << n << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// void update(int a){
//     a = a / 2;
// }
// int main(){
//     int a = 10;
//     update(a);
//     cout << a << endl;
// }


// #include <iostream>
// using namespace std;
// int update(int a){
//     a -= 5;
//     return a;
// }
// int main(){
//     int a = 15;
//     update(a);
//     cout << a << endl;
// }


// #include <iostream>
// using namespace std;
// int update(int a){
//     int ans = a * a;
//     return ans;
// }
// int main(){
//     int a = 14;
//    a =  update(a);
//     cout << a << endl;
// }


// #include <iostream>
// using namespace std;
// void nTerm(int n){
//     int ans = ( 3 * n + 7);
//     cout << ans << endl;
// }
// int main(){
//     int n;
//     cin >> n;
//     nTerm(n);

//     return 0;
// }



// #include <iostream>
// using namespace std;
// void countNumberOfSetBit(int a, int b){
//     int count = 0;
//     while(a != 0){
//         if(a & 1){
//             count++;
//         }
//         a = a >> 1;
//     }
//     while(b != 0){
//         if(b & 1){
//             count++;
//         }
//         b = b >> 1;
//     }
//     cout << "ans = " << count << endl;
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     countNumberOfSetBit(a,b);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// void fibonacciSeries(int n){
//     int a = 0, b = 1, next;
//     cout << a << " ";
//     cout << b << " ";
//     for(int i = 1; i<= n; i++){
//         next = a + b;
//         cout << next << " ";
//         a = b;
//         b = next;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     fibonacciSeries(n);
//     return 0;
// }


