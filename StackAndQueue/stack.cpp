// Q1. STACK implementation using Linked List Represenation
#include <bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   Node *next;
};

class Stack
{
private:
   Node *top;

public:
   Stack()
   {
      top = nullptr;
   }

   void push(int value)
   {
      Node *newNode = new Node();
      newNode->data = value;
      newNode->next = top;
      top = newNode;
   }

   void pop()
   {
      Node *temp = top;
      top = top->next;
      delete temp;
   }

   void peak()
   {
      cout << top->data;
   }

   bool isEmpyty()
   {
      return top == nullptr;
   }
};

int main()
{
   Stack stack;
   stack.push(23);
   stack.push(21);

   stack.peak();
   return 0;
}