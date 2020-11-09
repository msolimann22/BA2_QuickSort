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
	void QuickSort(Node* L, Node* H);
	Node* partition(Node* L, Node* H);
	void printList();
	void swap(int*, int*);
	Node* lastNode(Node*);
};

