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


Node* deleteTail(Node* head){
    Node* temp = head;

    if(temp==nullptr)return nullptr;

    while(temp->next->next != nullptr){
        temp = temp -> next;
    }
    delete temp->next;
    temp->next = NULL;

    return head;
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

    cout<<"Before deletion : ";
    printLL(head);

    head = deleteTail(head); // after deleteing atil print the LL

    cout<<"After deletion : ";
    printLL(head);

    return 0;
}