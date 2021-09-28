#pragma once
#include"Linked_List.h"

class Iterator
{
private:
	node* itr;
public:
	Iterator(node* ptr = nullptr)
	{
		itr = ptr;
	}

	Iterator& operator++(int)////////////////////////////////////////////////////////////////////////////////////////////////////
	{
		if (itr)
			itr = itr->next;
		return *this;
	}

	bool operator !=(const Iterator& right)//////////////////////////////////////////////////////////////////////////////////////
	{
		return  (this->itr == right.itr) ? false : true;
	}

	Iterator operator=(const Iterator& right)////////////////////////////////////////////////////////////////////////////////////
	{
		itr = right.itr;
		itr->data = right.itr->data;
		return *this;
	}

	int& operator *() //* operator overlaoding
	{
		return itr->data;
	}
};

