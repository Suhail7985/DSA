#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    

    Node(int val){
        data = val;
        next = NULL;
    }
    
};
void insterTail(Node* &head , int val){
    Node *n=new Node(val);

    if(head==NULL){
        head = n;
        return;
    }

    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;


}

void insertAtHead(Node* &head , int val){
    Node *n=new Node(val);
    n->next = head;
    head = n;
}
void display( Node *head) { 

    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    

    }
    cout<<"NULL"<<endl;
}
Node* insertNodeAtPosition(Node* llist, int data, int position) {
    Node *n=new Node(data);
    if(position==0){
        n->next=llist;
        return n;
    }
    Node *temp=llist;
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
    return llist;

}
bool has_cycle(Node* head){
    Node* n=head;
    for(int i=0;i<1000;i++){
        if(n==NULL){
            return false;
        }
        n=n->next;

    }
    return true;
    
}

int main(){
    Node *head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertNodeAtPosition(head,4,1);


    display(head);
}