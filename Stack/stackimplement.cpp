#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow " << endl;
        }
    }

    void pop()
    {

        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underFlow " << endl;
        }
    }

    int peak()
    {

        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty " << endl;
            return -1;
        }
    }

    

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack s(5);

    s.push(6);
    s.push(7);
    s.push(8);
    s.pop();
    s.pop();
    s.pop();

    cout << "Top element of stack is " << s.peak() << endl;


    return 0;
}