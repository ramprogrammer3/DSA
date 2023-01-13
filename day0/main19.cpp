#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    temp = head;
}

// printing linkedlist
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);

    // this is address of node1 object
    Node *head = node1;

    return 0;
}