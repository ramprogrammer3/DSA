#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor for insert
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor for delete

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node * &head, int d){

    // create new node
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    
    // creating new Node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    
    Node * temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// deleting any node in linked list

void deleteNode(int pos,Node* &head){

    // deleting first position 
    if(pos==1){
        Node * temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{

        // deleting any middle or last Node 
        Node * current = head;
        Node* prev = NULL;

        int cnt = 1;

        while(cnt < pos){
            prev = current;
            current = current->next;
            cnt++;
        }

        prev->next = current->next;
        current->next = NULL;
        delete current;

    }

}

void insertAtPosition(Node* &head,Node* &tail, int pos, int data){
    
    // insert at first position
    if(pos==1){
        insertAtHead(head,data);
        return ;
    }

    Node * temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last position

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    Node * nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


int main(){

    Node* node1 = new Node(10);

    Node * head = node1;

    Node * tail = node1;

    print(head);
    insertAtHead(head,12);
    insertAtHead(head,15);
    print(head);

    insertAtTail(tail,30);
    insertAtTail(tail,20);
    insertAtTail(tail,40);

    // insertAtPosition(head,tail,4,1000);
    insertAtPosition(head,tail,7,1000);

    print(head);
    cout << "Tail is " << tail->data << endl;
    cout << "Head is " <<  head->data << endl;

    deleteNode(7,head);
    print(head);
    cout << "Tail is " << tail->data << endl;
    cout << "Head is " <<  head->data << endl;

   
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    return 0;
}