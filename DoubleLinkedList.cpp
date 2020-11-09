#include "DoubleLinkedList.h"
DoubleLinkedList::DoubleLinkedList()
{
    size = 0;
    head = NULL;
}
void DoubleLinkedList::addLast(int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
        head = newNode;
    else
    {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        temp = NULL;
    }
    size++;
}
void DoubleLinkedList::QuickSort(Node *l, Node *h)
{
    //Node* A as in Arr[]
    if (h != NULL && l != h && l != h->next)
    {
        Node*  p = partition( l, h);
        QuickSort( l, p->prev);
        QuickSort( p->next, h);
    }
}
    

Node* DoubleLinkedList::partition(Node* l,Node* h)
{
    int x = h->data;
    Node* i = l->prev;
        for (Node *j = l; j != h; j = j->next)
        {
            if (j->data <= x)
            {
                
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[h]);
        return (i + 1);
}

void DoubleLinkedList::printList()
{
    Node* temp;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
