//search the key in linked list

#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;

    }
};
bool search(Node *head, int key){
    Node *temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}


void deleteNode(Node *head, int val){
    Node *temp = head;
    if(head==NULL){
        return;
    }
    while(temp->next->data!=val){
        temp = temp->next;
    }
    Node *todel = temp->next;
    temp->next = temp->next->next;
    delete todel;
 
}


void delfirst(Node *head){
    Node *todel = head;
    head = head->next;
    delete todel;
}




int main(){
    // Node *head = new Node(1);
    // head->next = new Node(2);
    // head->next->next = new Node(3);
    Node *head = NULL;
    delfirst(head);
}

