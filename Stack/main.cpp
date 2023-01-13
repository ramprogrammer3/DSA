#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack <int> stk_copy(s);

    while(!stk_copy.empty()){
        cout << stk_copy.top() << endl;
        stk_copy.pop();
    }
    cout << "printing after stack copy " << endl;

    cout << "Top element is " << s.top() << endl;
    s.pop();
    cout << "Top element is " << s.top() << endl;
    
    if(s.empty()){
        cout << "Stack is empty " << endl;
    }else{
        cout << "Stack is not empty " << endl;
    }

    cout << "Size of stack is " << s.size() << endl;
    return 0;
}