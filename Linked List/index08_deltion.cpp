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


Node* deleteNode(Node* head, int k){
    Node* prev;
    Node* temp = head;
    if(temp==nullptr)return nullptr;

    // if(k==1){
    //     head = temp->next;
    //     delete (temp);
    //     return head;
    // }

    for(int i=0; i<k-1; i++){
        prev = temp;
        temp = temp->next;
    }

    if(temp!=nullptr){
        prev->next = temp->next;
        delete temp;
    }
    else{
        cout<<"position is not available";
    }

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
    
    int k = 2;
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout<<"Before deletion : ";
    printLL(head);

    head = deleteNode(head, k); // after deleteing atil print the LL

    cout<<"After deletion : ";
    printLL(head);

    return 0;
}