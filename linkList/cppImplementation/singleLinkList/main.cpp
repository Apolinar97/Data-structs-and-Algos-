#include <iostream>
#include "LinkList.h"

int main() {
	LinkList LL;
	std::cout<<LL.getCount()<<"\n";
	std::cout<<LL.isEmpty()<<"\n";

	LL.addFront(3);
} 