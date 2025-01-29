//floyd loop detection algorithm
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
Node* floydLoopDetection(Node* head){
    Node *slow=head;
    Node *fast=head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){

        slow=slow->next;

        fast=fast->next->next;
        if(fast==slow){
            
            return slow;
            }

    }
    return NULL;
    

}

void Removeloop(Node* &head){
    if (head==NULL){
        return;
    }

    //detect loop
    Node* LoopNode=floydLoopDetection(head);
    if(LoopNode==NULL){
        cout<<"Loop Not found"<<endl;
        return;
    }
    //find the start of the loop
    Node* startOfLoop = head;
    Node* temp=startOfLoop;
    while(temp->next!=startOfLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);

    
    // Creating a loop for testing
    head->next->next = new Node(3);
    head->next->next->next = head->next; 
    if(floydLoopDetection(head)!=NULL){
         cout<<"Loop found"<<endl;
    }
    else{
        cout<<"Loop not found"<<endl;
    }
     
    Removeloop(head); 

    if(floydLoopDetection(head)==NULL){
        cout<<"loop remove after delection"<<endl;

    }
    else{
        cout<<"loop is not remove after deletion"<<endl;
    }
    

    return 0;


}

// Time Complexity: O(n)