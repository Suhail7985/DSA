//circular linked list
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

void insertATtail(Node* &head , int val){
    Node *n = new Node(val);
    if(head==NULL){
        head =n;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next = n;
}

void insertAtHead(Node* &head , int val){
    Node *n=new Node(val);
    n->next=head;
    if (head==NULL){
        n->next=n;
        head=n;
        return;
    }

    Node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void deleteATHead(Node* &head){
    Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;


    }
    Node *todel=head;
    temp->next=head->next;
    head=head->next;
    delete todel;

    }

    void display(Node *head){
        Node *temp = head;
        do{
            cout<<temp->data<<"->";
            temp=temp->next;
        }while(temp!=head);
        cout<<"NULL"<<endl;
    }



int main(){
    Node *head = NULL;
    insertATtail(head,1);
   
    deleteATHead(head);
    display(head);

    return 0;

}