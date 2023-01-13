
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

    // destructor
    ~Node()
    {
        int value = this->data;
        while (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
    }
};

void insertAtHead(Node *&head, int data)
{

    // creating a new Node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// insertATtail
void insertAtTail(Node *&tail, int data)
{
    // creating a  new node

    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// traversing node
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int element)
{
    // insertAt head
    if (pos == 1)
    {
        insertAtHead(head, element);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, element);
        return;
    }
    Node *nodeToInsert = new Node(element);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, Node *&tail, int pos)
{

    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;

        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 16);
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 6);
    print(head);

    insertAtTail(tail, 100);
    print(head);
    insertAtTail(tail, 200);
    print(head);

    insertAtPosition(head, tail, 2, 300);
    print(head);

    deleteNode(head, tail, 1);
    print(head);
    deleteNode(head, tail, 7);
    print(head);
    deleteNode(head, tail, 6);
    print(head);
    deleteNode(head, tail, 1);
    print(head);

    cout << "The value of head is " << head->data << endl;
    cout << "The value of tail is " << tail->data << endl;

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    return 0;
}