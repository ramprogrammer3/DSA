#include <iostream>
using namespace std;

void solve(int n)
{
    if (n == 0)
        return;

    cout << n << endl;

    solve(n - 1);
}

int main()
{

    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    cout << "Printing in Decreasing order " << endl;

    solve(n);

    return 0;
}