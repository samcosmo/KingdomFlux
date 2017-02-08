#include "stdafx.h"
#include "list.h"


list::list()
{
}


list::~list()
{
}


struct Node
{
	void* item;
	Node* next;
};