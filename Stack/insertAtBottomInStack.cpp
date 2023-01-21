#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>&s, int x){

    // base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s,x);
    s.push(temp);
}


int main(){

    stack<int> s;
    // cout << s.size() << endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // cout << "top element of stack is " << s.top() << endl;

    // cout << s.size() << endl;

    stack <int> temp = s;

    cout << temp.top() << endl;

    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;


    insertAtBottom(s,10);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    // cout << s.size() << endl;

    return 0;
}