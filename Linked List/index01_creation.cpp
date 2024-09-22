// Linked List 
//Q1. creation of Linked List

#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next = nullptr;
};


int main(){
    Node* head= nullptr;
    
    for(int i=1; i<=5; i++){
        Node* newNode = new Node();
        newNode->data=i;
        newNode->next = nullptr;

        if(head==nullptr){
            head=newNode;
        }
        else{
            Node* temp = head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }

    // print the LL

    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

    // free the memory
   
    while(head!=nullptr){
        Node* temp = head;
        head = head->next;
        delete(temp);
    }

    return 0;
}

