// reverse the Linked List based on data


// deltion in the tail

#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* reverseLL(Node* head){

    Node* curr = head;

    Node* next = nullptr;
    Node* prev = nullptr;

    while(curr!=nullptr){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr=next;
    }
    return prev;
}


void printLL(Node* head){
    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";

}




int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout<<"Before reverse : ";
    printLL(head);

    head = reverseLL(head); 

    cout<<"Afte reverse : ";
    printLL(head);

    return 0;
}