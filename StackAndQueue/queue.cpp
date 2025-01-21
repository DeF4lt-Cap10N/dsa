// Q2. Queue implementation using Linked List Represenation

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next;
   Node(int data1)
   {
      this->data = data1;
      this->next = nullptr;
   }
};

class Queue
{
   Node *front, *rear;

public:
   Queue()
   {
      front = rear = nullptr;
   }

   bool isEmpty()
   {
      if (front == nullptr)
      {
         return true;
      }
      return false;
   }

   void enqueue(int val)
   {
      Node *newNode = new Node(val);

      if (rear == nullptr)
      {
         front = rear = newNode;
      }
      else
      {
         rear->next = newNode;
         rear = newNode;
      }
   }

   void dequeue()
   {

      Node *temp = front;
      front = front->next;
      if (front == nullptr)rear = nullptr;
      delete temp;
   }

   int getFront()
   {
      return front->data;
   }

   int getRear()
   {
      return rear->data;
   }
};

int main()
{
   Queue q;

   q.enqueue(10);
   q.enqueue(20);

   // Display the front and rear elements of the queue
   cout << "Queue Front: " << q.getFront() << endl;
   cout << "Queue Rear: " << q.getRear() << endl;

   return 0;
}
