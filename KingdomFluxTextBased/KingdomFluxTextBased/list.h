#pragma once
class list
{
public:
	list();
	~list();
	void* get(int);
	void add(void*,int);
	void remove(int);

	struct Node;
	Node* head;

	Node* getNode(int);
};

