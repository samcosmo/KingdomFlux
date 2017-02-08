#include "stdafx.h"
#include "list.h"

list::list()
{
	this->head = NULL;
}

list::~list()
{
}

//still working on this
void* list::get(int i)
{
	Node* current = this->head;
	while (current != NULL)
	{
		current = current->next;
	}
	
}

void list::add(void* item, int i)
{
}

void list::remove(int i)
{
}
