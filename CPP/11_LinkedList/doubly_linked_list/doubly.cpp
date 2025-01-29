#include <iostream>
using namespace std;


class Node{
    public:

        int data;
        Node* next;
        Node* prev;
   


        Node(int val){
            data=val;
            prev=NULL;
            next=NULL;
    }


};
void insertAtTail(Node* &head,int val){
    

    Node* n=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;


    }
    temp->next=n;
    n->prev=temp;

}

int main() {
    Node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
   Node* temp=head;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl;


    return 0;
}