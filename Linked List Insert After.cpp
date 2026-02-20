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
    NewNode->next = Head;

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

Node *Find(Node* Head, int value)
{
    while (Head != NULL)
    {
        if (Head->value == value)
        {
            return Head;
        }
        
        Head = Head->next;
    }
    
    return NULL;
}

void InsertAfter(Node* Pre_Node, int value)
{
    
    Node* NewNode = new Node();
    NewNode->value = value;
    NewNode->next = Pre_Node->next;
    Pre_Node->next = NewNode; 
   
}


int main()
{
   Node* Head = NULL;
   InsertAtBeginning(Head,1); 
   InsertAtBeginning(Head,2);
   InsertAtBeginning(Head,3);
   InsertAtBeginning(Head,4);
   InsertAtBeginning(Head,5);
   
   PrintList(Head);
   
   Node* N1 = Find(Head, 2);

   InsertAfter(N1, 500);
   PrintList(Head);
   

    return 0;
}