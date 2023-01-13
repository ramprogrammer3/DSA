
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
        tail = newNode;
        newNode->next = newNode;
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

int main(){

    

    return 0;
}