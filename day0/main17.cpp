// #include <iostream>
// using namespace std;

// int factorial(int n)
// {

//     if (n == 0)
//         return 1;

//     return n * factorial(n - 1);
// }

// int main()
// {

//     cout << "Enter number to get factorial ";
//     int n;
//     cin >> n;

//     cout << "The factorial of given number is " << factorial(n) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sumOfNumber(int n)
// {
//     if (n == 0)
//         return 0;

//     return n + sumOfNumber(n - 1);
// }

// int main()
// {
//     cout << "Enter number to get sum ";

//     int n;
//     cin >> n;

//     cout << "Sum of number is  " << sumOfNumber(n) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int power(int n)
// {

//     if (n == 0)
//         return 1;

//     return 2 * power(n - 1);
// }

// int main()
// {

//     cout << "Enter power of 2 number ";

//     int n;

//     cin >> n;

//     cout << "Ans is " << power(n) << endl;

//     return 0;
// }

// print counting using recursion

// #include <iostream>
// using namespace std;

// void printCounting(int n){

//     if(n==0) return;

//     printCounting(n-1);

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

// void reachHome(int s, int e)
// {

//     cout << "Step " << s << " target " << e << endl;

//     if (s == e)
//     {
//         cout << "Pahuch gaya " << endl;
//         return;
//     }

//     s++;
//     reachHome(s, e);
// }

// int main()
// {

//     int n;
//     cin >> n;

//     reachHome(1, n);

//     return 0;
// }

// check array is sorted or not

// #include <iostream>
// using namespace std;

// bool isSorted(int *arr, int n)
// {

//     if (n == 0 || n == 1)
//         return true;

//     if (arr[0] > arr[1])
//         return false;

//     return isSorted(arr + 1, n - 1);
// }
// int main()
// {

//     int arr[5] = {2, 4, 6, 25, 10};

//     int ans = isSorted(arr, 5);

//     if (ans)
//     {
//         cout << "Array is sorted " << endl;
//     }
//     else
//     {
//         cout << "Array is not sorted " << endl;
//     }

//     return 0;
// }

// sum of array using recursion

// #include <iostream>
// using namespace std;

// int sum(int *arr, int n)
// {

//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return arr[0];

//     return arr[0] + sum(arr + 1, n - 1);
// }

// int main()
// {

//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     int ans = sum(arr, 10);

//     cout << "Sum is " << ans << endl;

//     return 0;
// }
