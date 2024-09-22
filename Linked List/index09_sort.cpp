// sorting the LL

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

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

Node *sortLL(Node *head)
{
    Node* temp = head;
    vector<int>arr;

    while(temp!=nullptr){
        arr.push_back(temp->data);
        temp=temp->next;
    }

    sort(arr.begin(), arr.enLd());

    temp = head;

    for(int i=0; i<arr.size(); i++){
        temp->data = arr[i];
        temp = temp-> next;
    }

    return head;
}

void printLL(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{

    Node *head = new Node(100);
    head->next = new Node(20);
    head->next->next = new Node(50);
    head->next->next->next = new Node(10);

    cout << "Before deletion : ";
    printLL(head);

    head = sortLL(head); // after sorting print the LL

    cout << "After deletion : ";
    printLL(head);


    return 0;
}