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

Node* insertAtAnyPosition(Node* last , int data, int k){
    Node* newNode = new Node(data);
    Node* temp = last->next;

    for(int i=0; i<k-1; i++){
        temp = temp -> next;
    }

    newNode-> next = temp->next;
    temp->next = newNode;

    return last;
}

Node* deleteanyPostion(Node* last, int k){
    Node* prev = last;
    Node* temp = last->next;

    while(temp!=last && temp->data!=k){
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = temp->next;
    delete temp;

    return last;
}

void printCll(Node* last){
    Node* temp = last->next;

    while(true){
        cout<<temp->data<<" ";
        temp = temp->next;

        if(temp == last->next)break;
    }

    cout<<"\n";
}


int main(){
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first;

    printCll(last);

    last = insertAtAnyPosition(last, 69, 2);

    printCll(last);

    last = deleteanyPostion(last,2);

    printCll(last);

 return 0;
}