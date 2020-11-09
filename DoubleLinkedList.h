#pragma once
#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node* prev;
};
class DoubleLinkedList
{
private:
	int size;
	Node* head;
public:
	DoubleLinkedList();
	void addLast(int data);
	void QuickSort(Node* A, int l, int h);
	void printList();

};

