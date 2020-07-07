#include "Node.h"

class LinkList {
private:
	nodePtr _head;
	int _count;
public:
	LinkList();
	void addFront(elemType val);
	void deleteFront(elemType& removedVal);

	void addRear(elemType val);
	void deleteRear(elemType& removedVal);


	bool isEmpty();
	void displayAll();
	int getCount();
};