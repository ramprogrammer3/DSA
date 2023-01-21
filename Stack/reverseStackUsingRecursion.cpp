#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x)
{

    if (s.empty())
    {
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();

    solve(s, x);
    s.push(temp);
}

void reverse(stack<int> &s)
{

    // base case;
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);

    solve(s, temp);
}

int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    stack<int> temp = s;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    reverse(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}