#include "stdafx.h"
#include "list.h"

struct list::Node
{
	void* item;
	Node* next;
};

list::list()
{
	this->head = NULL;
}

list::~list()
{
}

Node* list::getNode(int i)
{
	Node* current = this->head;
	int n = 0;

	while (current != NULL)
	{
		if(n == i)
		{
			return current;
		}
		current = current->next;
		i++;
	}
	return NULL;
}

void list::add(void* item, int i)
{
}

void list::remove(int i)
{
	void* item;
	Node* next;
};

