//merge two sorte list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int val){
        data=val;
        next=NULL;

    }
};
void linkedList(Node* &head ,int val){
    Node *n=new Node(val);
    if (head==NULL){
        head=n;
        return;

    }
    Node *temp=head;
    
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
int main(){
    Node *head1=NULL;
    Node *head2=NULL;
    linkedList(head1,1);
    linkedList(head1,4);
    linkedList(head1,5);
    linkedList(head1,7);
    linkedList(head2,2);
    linkedList(head2,3);
    linkedList(head2,6);
    linkedList(head2,8);
    display(head1);
    display(head2);
    return 0;
}