// Insert a Node at the back or ending of Linked List

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

Node* insertInBack(Node* head, int data1){
    // if(head==nullptr){
    //     head->data=data1;
    // }

    Node* tail = head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }

    Node* newNode = new Node(data1);
    tail->next = newNode;
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
    int data = 6;

    Node* head = new Node(2);
    head->next= new Node(3);
    head->next->next=new Node(4);
    head->next->next->next=new Node(5);

    // before insertion
    cout<<"before insertion : ";
    printLL(head);

    head = insertInBack(head,data);

  
    // after insert in back
    cout<<"after insertion in back : ";
    printLL(head);
    
}