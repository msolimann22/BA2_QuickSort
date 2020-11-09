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
    newNode->prev = NULL;
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
void DoubleLinkedList::QuickSortHelper(Node *l, Node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        Node*  p = partition( l, h);
        QuickSortHelper( l, p->prev);
        QuickSortHelper( p->next, h);
    }
}
    
void DoubleLinkedList::swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

Node* DoubleLinkedList::partition(Node* l,Node* h)
{
    int x = h->data;
    Node* i = l->prev;
        for (Node *j = l; j != h; j = j->next)
        {
            if (j->data <= x)
            {
                if (i == NULL)
                    i = l;
                else
                    i = i->next;
                swap(&(i->data), &(j->data));
            }
        }
        if (i == NULL)
            i = l;
        else
            i = i->next;
        swap(&(i->data), &(h->data));
        return i;
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
void DoubleLinkedList::QuickSort()
{
    Node* h = LastNode(head);
    QuickSortHelper(head, h);

}
Node*DoubleLinkedList::LastNode(Node* root)
{
    while (root && root -> next)
    {
        root = root->next;

    }
    return root;

}
