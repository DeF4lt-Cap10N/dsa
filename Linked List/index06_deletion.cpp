// deletion on  head

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next=NULL;
    }
};

Node* deleteHead(Node* head){
    if(head==NULL)return NULL;

    Node* temp = head;
    head=head->next;

    delete temp;

    return head;
}

void printLL(Node* head){
    Node* temp = head;

    while (temp !=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
    
}



int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout<<"Before deletion : ";
    printLL(head);

    head = deleteHead(head); // after deleteing head print the LL

    cout<<"After deletion : ";
    printLL(head);

    return 0;
}