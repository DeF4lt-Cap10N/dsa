// sort the LL by using link

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};


Node* mergeTwoSortedList(Node* list1, Node* list2){

    Node* dummyHead = new Node(-1);
    Node* temp = dummyHead;

    while(list1 != nullptr && list2!=nullptr){
        if(list1->data <= list2->data){
            temp->next = list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            list2=list2->next;
        }
        temp = temp->next;
    }

    if(list1!=nullptr){
        temp->next= list1;
    }
    else{
        temp->next = list2;
    }

    return dummyHead->next;
}

Node* middle(Node* head){
    if( head == nullptr || head->next == nullptr)return head;
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast =fast->next->next;
    }
    return slow;
}


Node* sortLL(Node* head){

    if( head == nullptr || head->next == nullptr)return head;

    Node* middleNode = middle(head);

    Node* right= middleNode->next;
    middleNode-> next = nullptr;
    Node* left = head;

    left = sortLL(left);
    right= sortLL(right);

    return mergeTwoSortedList(left, right);
}

void printLL(Node* head){
    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<"\n";
}

main()
{
    Node* head = new Node(90);
    head->next = new Node(70);
    head->next->next = new Node(50);
    head->next->next->next = new Node(80);
    head->next->next->next->next = new Node(10);

    printLL(head);

    head = sortLL(head);
    // after sorting
    printLL(head);

    return 0;
}
