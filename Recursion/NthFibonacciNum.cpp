#include <iostream>
using namespace std;

int nThFib(int n)
{
    // base case
    if (n == 1 || n == 2)
        return 1;

    return nThFib(n - 1) + nThFib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << n << "th Fibonacci term is " << nThFib(n) << endl;

    return 0;
}