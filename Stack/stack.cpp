#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // creating stack
    stack<int> s;
    s.push(3);
    s.push(2);
    // s.pop();s
    cout << "printing top element " << s.top() << endl;

    cout << "size of stack is " << s.size() << endl;

    if (s.empty())
    {
        cout << "Stack is empty " << endl;
    }
    else
    {
        cout << "stack is not empty " << endl;
    }

    

    return 0;
}