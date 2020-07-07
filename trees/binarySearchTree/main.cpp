#include <iostream>
#include "BST.h"

int main() {

    BST bst = BST();
    bst.insertNode(4);
    bst.insertNode(1);
    bst.insertNode(20);
    
    bst.showInOrder();
    std::cout<<"==========\n";
    bst.showPostOrder();
    std::cout<<"==========\n";

    bst.showPreOrder();
    std::cout<<"==========\n";

    std::cout<<"Searching: "<< bst.search(1)<<"\n";



    return 0;
}