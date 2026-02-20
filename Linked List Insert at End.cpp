#include <iostream>
using namespace std;

class Node
{

public:
    int value;
    Node * next;
};

void InsertAtBeginning(Node*& Head, int value)
{
    // Allocate a Node To a Memory
    Node * NewNode = new Node();

    // Insert The Data
    NewNode->value = value;
    NewNode->next = NULL;

    // Move Head To New Node
    Head = NewNode;
}

void PrintList(Node* Head)
{
    while (Head!= NULL)
    {
       cout << Head->value << "  ";
       Head = Head->next;
    }
    
    cout << endl;
}

void InsertAtEnd(Node*& Head, int value)
{
    Node* NewNode = new Node();
    NewNode->value = value;
    NewNode->next = NULL;

    if (Head == NULL)
    {
        Head = NewNode;
        return;
    }
        
    Node* LastNode = Head;
    while (LastNode->next != NULL)
    {
        LastNode = LastNode->next;
    }
    
    LastNode->next = NewNode;
    return;
}

int main()
{
   Node* Head = NULL;
   InsertAtEnd(Head,1); 
   InsertAtEnd(Head,2);
   InsertAtEnd(Head,3);
   InsertAtEnd(Head,4);
   InsertAtEnd(Head,5);
   
   PrintList(Head);
   
    return 0;
}