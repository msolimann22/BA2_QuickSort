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
void DoubleLinkedList::QuickSort(Node * A, int l, int h)
{
    //Node* A as in Arr[]
     if (l < h)
      {
           int p = partition(A, l, h); 
           quickSort(A, l, p - 1);
           quickSort(A, p + 1, h);
      }
    

    int partition(int arr[], int l, int h)
    {
        int x = arr[h];
        int i = (l - 1);
        for (int j = l; j <= h - 1; j++)
        {
            if (arr[j] <= x)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[h]);
        return (i + 1);
    };





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
