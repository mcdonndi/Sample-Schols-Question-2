#include <iostream>
#include "IntegerList.h"

using namespace std;

int main()
{
	int choice = 0;
	int n;
	IntegerList list;

	cout << "Add a number to the list: ";
	cin >> n;
	Integer* i = new Integer;
	i->setNum(n);
	list.addToHead(i);

	while (choice != 7)
	{
		cout << "What would you like to do?\n";
		cout << "(1) Add a number to the top of the List\n";
		cout << "(2) Add a number to the bottom of the List\n";
		cout << "(3) Remove a number from the top of the List\n";
		cout << "(4) Remove a number from the bottom of the List\n";
		cout << "(5) Print list from top to bottom\n";
		cout << "(6) Print list from top to bottom\n";
		cout << "(7) Exit\n";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter a number to be added to the top of the list: ";
			cin >> n;
			Integer *i = new Integer;
			i->setNum(n);
			list.addToHead(i);
		}
		else if (choice == 2)
		{
			cout << "Enter a number to be added to the bottom of the list: ";
			cin >> n;
			Integer *i = new Integer;
			i->setNum(n);
			list.addToTail(i);
		}
		else if (choice == 3)
		{
			list.removeFromHead();
		}
		else if (choice == 4)
		{
			list.removeFromTail();
		}
		else if (choice == 5)
		{
			list.printHeadToTail();
		}
		else if (choice == 6)
		{
			list.printTailToHead();
		}
		else if (choice != 7)
		{
			cout << "Invalid input please try again\n";
		}
	}
	return 0;
}