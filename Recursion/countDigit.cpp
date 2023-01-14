#include <iostream>
using namespace std;

int countDigit(int n)
{
    // base case
    if (n == 0)
        return 0;
    n = n / 10;
    int ans = 1 + countDigit(n);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << "number of digit is " << countDigit(n) << endl;

    return 0;
}