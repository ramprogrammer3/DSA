
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }

        cout << "Memory free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    // emepty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }else{
        Node * curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        // element found here
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value){

    // empty list
    if(tail == NULL){
        cout << "List is empty , please check again " << endl;
        return;
    }else{
        // non-empty 
        // assumin that "value" is present in the linked list

        Node * prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // one node linked list
        if(curr== prev){
            tail = NULL;
        }

        // >=2 node linked list
       else  if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node * tail){
    Node * temp = tail;
     if(tail == NULL){
        cout << "list is empty " << endl;
        return ;
     }
        do{
            cout << tail->data << " ";
            tail = tail->next;
        }while(tail != temp);

        cout << endl;
     
}

int main(){
    
    Node * tail = NULL;
    // empty list me insert
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    insertNode(tail,7,9);
    insertNode(tail,5,10);
    print(tail);




    cout << "Tail of node is " << tail->data << endl;

    return 0;
}