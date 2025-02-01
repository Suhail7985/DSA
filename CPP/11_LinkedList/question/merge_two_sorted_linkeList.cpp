//merge two sorted linked list
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void merge(Node* &head1,Node* &head2){
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* dummyNode=new Node(-1);
    Node* ptr3=dummyNode;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;

        }
        while (ptr1!=NULL){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
            ptr3=ptr3->next;

        }
        while(ptr2!=NULL){
            ptr3->next=ptr2;
            ptr2=ptr2->next;
            ptr3=ptr3->next;

        }
        head1=dummyNode->next;

    }


int main(){
    Node* head1=new Node(1);
    head1->next=new Node(4);
    head1->next->next=new Node(5);
    head1->next->next->next=new Node(7);
    head1->next->next->next->next=new Node(9);
    head1->next->next->next->next->next=new Node(10);
    head1->next->next->next->next->next->next=new Node(11);
    head1->next->next->next->next->next->next->next=new Node(12);
    head1->next->next->next->next->next->next->next->next=new Node(13);
    head1->next->next->next->next->next->next->next->next->next=new Node(14);
    head1->next->next->next->next->next->next->next->next->next->next=new Node(15);
    head1->next->next->next->next->next->next->next->next->next->next->next=new Node(16);
    head1->next->next->next->next->next->next->next->next->next->next->next->next=new Node(17);
    head1->next->next->next->next->next->next->next->next->next->next->next->next->next=new Node(18);
    head1->next->next->next->next->next->next->next->next->next->next->next->next->next->next=new Node(19);
    head1->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=new Node(20);
    Node* head2=new Node(2);
    head2->next=new Node(3);
    head2->next->next=new Node(6);
    head2->next->next->next=new Node(8);
    head2->next->next->next->next=new Node(21);

    merge(head1,head2);
    Node* temp=head1;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    
}