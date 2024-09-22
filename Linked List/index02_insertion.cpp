// Insert a Node at the Front or Beginning of Linked List

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

Node* insertInFront(Node* head, int data1){
    // if(head==nullptr){
    //     head->data=data1;
    // }
    Node* newNode = new Node(data1);
    newNode->next = head;
    return newNode;
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
    int data = 1;

    Node* head = new Node(2);
    head->next= new Node(3);
    head->next->next=new Node(4);
    head->next->next->next=new Node(5);

    // before insertion
    cout<<"before insertion"<<endl;
    printLL(head);

    head = insertInFront(head,data);

  
    // after insert in front 
    cout<<"after insertion in front"<<endl;
    printLL(head);
    
}