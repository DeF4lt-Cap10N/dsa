// Insert a Node at k place of Linked List

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* insertatKeyPlace(Node* head, int k ,int data1){
    Node* temp = head;
    Node* newNode = new Node(data1);
    
    if(k==1){
        newNode->next=head;
        head= newNode;
        return head;
    }

   for(int i=1; i<k-1 && temp!=NULL; i++){
    temp = temp->next;
   }

   if(temp==nullptr){
    cout<<"k is out of Bound"<<endl;
    delete(newNode);
    return head;
   }
    
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

void printLL(Node* head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp -> next;
    }
    cout<<endl;
    
}


int main(){
    int k =14;
    int data = 69;

    Node* head = new Node(20);
    head->next= new Node(30);
    head->next->next=new Node(40);
    head->next->next->next=new Node(50);

    // before insertion
    cout<<"before insertion : ";
    printLL(head);


    head = insertatKeyPlace(head,k,data);

  
    // after insert in back
    cout<<"after insertion in  Key Place : ";
    printLL(head);

  return 0;
}