#include <iostream>
#include "Node.h"

Node::Node() {
	_next = NULL;
}

Node::Node(elemType val) {
	_val = val;
	_next = NULL;
}

nodePtr Node::getNext() {
	return _next;
}
void Node::setNext(nodePtr next) {
	_next = next;
}

elemType Node::getVal() {
	return _val;
}
void Node::setVal(elemType val) {
	_val = val;
}

void Node::printVal() {
	std::cout<<_val<<"\n";
}