#include <iostream>
#include "IntegerList.h"

using namespace std;

IntegerList::IntegerList()
{
	head = NULL;
	tail = NULL;
}

void IntegerList::addToHead(Integer* i)
{
	if (!head)
	{
		head = tail = i;
		return;
	}
	i->next = head;
	head->back = i;
	head = i;
}

void IntegerList::addToTail(Integer* i)
{
	if (!tail)
	{
		head = tail = i;
		return;
	}
	i->back = tail;
	tail->next = i;
	tail = i;
}

void IntegerList::removeFromHead()
{
	if (!head)
	{
		cout << "The list is already empty\n" << endl;
	}
	else if (!head->next)
	{
		head = tail = NULL;
	}
	else
	{
		Integer* temp = head;
		head = temp->next;
		head->back = NULL;
		delete temp;
	}
	cout << "Integer removed from the top of the list\n";
	if (!head)
	{
		cout << "The list is now empty\n";
	}
}

void IntegerList::removeFromTail()
{
	if (!tail)
	{
		cout << "The list is already empty\n" << endl;
	}
	else if (!tail->back)
	{
		head = tail = NULL;
	}
	else
	{
		Integer* temp = tail;
		tail = temp->back;
		tail->next = NULL;
		delete temp;
	}
	cout << "Integer removed from the bottom of the list\n";
	if (!tail)
	{
		cout << "The list is now empty\n";
	}
}

void IntegerList::printHeadToTail()
{
	Integer *curr = head;
	while (curr)
	{
		cout << curr->number << " ";
		curr = curr->next;
	}
	if (!head)
	{
		cout << "List is empty, nothing to print";
	}
	cout << endl;
}

void IntegerList::printTailToHead()
{
	Integer *curr = tail;
	while (curr)
	{
		cout << curr->number << " ";
		curr = curr->back;
	}
	if (!tail)
	{
		cout << "List is empty, nothing to print";
	}
	cout << endl;
}