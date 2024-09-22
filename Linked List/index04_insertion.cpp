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

    while(temp->next!=nullptr){
        if(temp->data == k)break;
        temp=temp->next;
    }

    Node* newNode = new Node(data1);
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
    int k =3;
    int data = 69;

    Node* head = new Node(2);
    head->next= new Node(3);
    head->next->next=new Node(4);
    head->next->next->next=new Node(5);

    // before insertion
    cout<<"before insertion : ";
    printLL(head);


    head = insertatKeyPlace(head,k,data);

  
    // after insert in back
    cout<<"after insertion in  Key Place : ";
    printLL(head);

  return 0;
}