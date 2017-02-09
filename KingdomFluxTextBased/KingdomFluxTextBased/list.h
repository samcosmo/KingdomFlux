#pragma once
class list
{
public:
	list();
	~list();
	void* get(int);
	void add(void*,int);
	void remove(int);

private:
	struct Node;
	Node* head;

	void* getNode(int);
};

