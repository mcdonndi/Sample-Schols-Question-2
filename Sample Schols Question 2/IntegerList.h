#include "Integer.h"

class IntegerList
{
private:
	Integer *head;
	Integer *tail;

public:
	IntegerList();

	void addToHead(Integer*);
	void addToTail(Integer*);
	void removeFromHead();
	void removeFromTail();
	void printHeadToTail();
	void printTailToHead();
};