#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x)
{
    if (s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, x);
    s.push(num);
}

void sort(stack<int> &s)
{

    // base case
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    sort(s);

    solve(s, num);
}

int main()
{

    stack<int> s;

    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);

    stack<int> temp = s;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    sort(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}