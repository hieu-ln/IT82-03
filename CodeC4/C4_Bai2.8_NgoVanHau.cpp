#include <iostream>
#include <stdio.h>
using namespace std;

const int COUNT = 10;

struct Node
{
	int info;
	Node* left;
	Node* right;
};
Node* root;

void tree_empty()
{
	root = NULL;
}

void insertNode(Node*& p, int x)
{
	if (p == NULL)
	{
		p = new Node;
		p->info = x;
		p->left = NULL;
		p->right = NULL;
	}
	else
	{
		if (p->info == x)
			return;
		else if (p->info > x)
			return insertNode(p->left, x);
		else
			return insertNode(p->right, x);
	}
}
struct queue
{
	int info;
	queue* next;
};
queue* front, * rear;

void init_queue()
{
	front = NULL;
	rear = NULL;
}

void Push(int x)
{
	queue* p;
	p = new queue;
	p->info = x;
	p->next = NULL;
	if (rear == NULL)
		front = p;
	else
		rear->next = p;
	rear = p;
}

int Pop(int& x)
{
	if (front != NULL)
	{
		queue* p = front;
		x = p->info;
		front = front->next;
		if (front == NULL)
			rear = NULL;
		delete p;
		return 1;
	}
	return 0;
}
void Process_LRN(Node* p)
{
	if (p != NULL)
	{
		Process_LRN(p->left);
		Process_LRN(p->right);
		Push(p->info);
	}
}

void process_Bin_Tree(Node* p, int space)
{
	if (p == NULL)
		return;

	space = space + COUNT;

	process_Bin_Tree(p->right, space);
	cout << endl;
	for (int i = COUNT; i < space; i++)
		cout << " ";
	cout << p->info << endl;
	process_Bin_Tree(p->left, space);
}
void process_Tree()
{
	process_Bin_Tree(root, 0);
}
