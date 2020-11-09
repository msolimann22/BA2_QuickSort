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
	void QuickSortHelper(Node* L, Node* H);
	Node* partition(Node* L, Node* H);
	void printList();
	void swap(int*, int*);
	void QuickSort(Node*);
	Node* LastNode(Node*);
};

