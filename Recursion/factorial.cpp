#include <iostream>
using namespace std;

int getFactorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    int ans = n * getFactorial(n - 1);
    return ans;
}
int main()
{
    cout << "Enter number to get factorial: " << endl;
    int n;
    cin >> n;
    cout << "The factorial is " << getFactorial(n) << endl;

    return 0;
}