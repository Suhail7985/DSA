
//k reversal of linked list
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
void kReversal(Node* &head ){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;
    int k = 3;
    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    
    }
    if(nextptr!=NULL){
        head->next;
        kReversal(nextptr);
    } 
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    kReversal(head);
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    

    }
    cout<<"NULL"<<endl;

}
