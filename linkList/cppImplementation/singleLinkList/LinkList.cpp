#include <iostream>
#include "LinkList.h"

LinkList::LinkList() {
	_head = NULL;
	_count = 0;
}

void LinkList::addFront(elemType val) {
	nodePtr newNode = new Node(val);
	if(isEmpty()) {
		_head = node;
		_count++;
		return;
	}
	//STart here.

}
void LinkList::deleteFront(elemType& removedVal) {
	
}

void LinkList::addRear(elemType val) {

}
void LinkList::deleteRear(elemType& removedVal) {

}

bool LinkList::isEmpty() {
	return(_count==0 && !_head);

}
void LinkList::displayAll() {

}
int  LinkList::getCount() {
	return _count;
}