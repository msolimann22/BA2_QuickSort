#include"DoubleLinkedList.h"
int main()
{
	DoubleLinkedList dll;
	dll.addLast(1);
	dll.addLast(5);
	dll.addLast(3);
	dll.addLast(20);
	dll.QuickSort();
	dll.printList();
}