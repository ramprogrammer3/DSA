#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        // tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPositon(Node *&head, Node *&tail, int pos, int data)
{

    if (pos == 1)
    {
        insertAtHead(head, tail, data);
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
        insertAtTail(head, tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        if (curr->next == NULL)
        {
            tail = prev;
        }
        delete curr;
    }
}

// traversing node
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// length of linked list
void printLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    cout << "length of linked list is " << len << endl;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head, tail, 9);
    print(head);
    insertAtTail(head, tail, 11);
    print(head);
    insertAtPositon(head, tail, 3, 100);
    print(head);
    deleteNode(head, tail, 1);
    print(head);

    printLength(head);

    cout << "head of node is " << head->data << endl;
    cout << "tail of node is " << tail->data << endl;
    // cout << "Data of node is " << node1->data << endl;

    return 0;
}