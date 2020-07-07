#ifndef BST_H
#define BST_H
/****
 * Filename: BST.h
 * NAME: Apolinar Camacho
 * Purpose: Header file for the implementation of a binary search treee
 * DATE: 02/09/2020
 * */
#include <iostream>

typedef int dataType;

struct Node {
    Node *left;
    Node *right;
    dataType data;
};

class BST {
private:
    Node *root;

public:
    BST();
    ~BST();
    void deleteTree(Node* root); //called in destructor.

    void insertNode(dataType elem);
    void deleteNode(dataType elem);

    void inOrderTrav(Node* root);
    void preOrderTrav(Node* root);
    void postOrderTrav(Node* root);

    void showInOrder();
    void showPostOrder();
    void showPreOrder();

    bool search(dataType key);

};

#endif