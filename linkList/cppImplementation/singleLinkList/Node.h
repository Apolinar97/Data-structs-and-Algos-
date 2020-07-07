
class Node;
typedef Node* nodePtr;
typedef int elemType;

class Node{
private:
	elemType _val;
	nodePtr _next;
	int _count;
public:
	Node();
	Node(elemType val);

	nodePtr getNext();
	void setNext(nodePtr next);

	elemType getVal();
	void setVal(elemType val);

	int getCount();
	void setCount(int count);

	void printVal();



};