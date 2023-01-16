#include <iostream>
using namespace std;

int sumOfDigit(int n)
{
    // base case
    if (n == 0)
        return 0;

    int digit = n % 10;    
    n = n / 10;
  int ans = digit + sumOfDigit(n);
  return ans;

}

int main()
{
    int n;
    cin >> n;
    cout << "sum  of digit is " << sumOfDigit(n) << endl;

    return 0;
}