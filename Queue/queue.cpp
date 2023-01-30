#include <iostream>
#include <queue>
using namespace std;

int main(){

    // create a queue

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "size of queue  is : " << q.size() << endl;
    q.pop();
    cout << "size of queue  is : " << q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty " << endl;
    }else{
        cout << "Queue is not empty " << endl;
    }

    cout << "front element is " << q.front() << endl;
    cout << "Back element is " << q.back() << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}