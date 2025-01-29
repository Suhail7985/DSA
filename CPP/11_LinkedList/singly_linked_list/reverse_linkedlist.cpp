// reverse linked list
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
void Reverselist(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;
    
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    
    }
    head = prevptr;

    // for(int i=0;i<5;i++){
    //     nextptr = currptr->next;
    //     currptr->next = prevptr;

    //     prevptr = currptr;
    //     currptr = nextptr;
    
    // }
    // head = prevptr;



    
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    Reverselist(head);
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    

    }
    cout<<"NULL"<<endl;

}