#include <iostream>
#include "Integer.h"

using namespace std;

Integer::Integer()
{
	number = 0;
	next = NULL;
	back = NULL;
}

void Integer::setNum(int num)
{
	number = num;
}