#ifndef BST_CPP
#define BST_CPP

#include <iostream>
#include "BST.h"

BST::BST() {
    root = NULL;
}
BST::~BST() {
    std::cout<<"Deallocating tree from memory\n";
    deleteTree(root);

}



void BST::insertNode(dataType elem) {
    
    Node* node = new Node;
    node->data = elem;
    node->left = NULL;
    node->right = NULL;

    if(!root) {
        root = node;
        std::cout<<"Added " << elem << " as the root.\n";
    }
    else {
        Node* currentNode = root;
        Node* parent;

        while(currentNode != NULL) {
            
            if(node->data == currentNode->data) {
                std::cout<<"Element already exists... \n";
                return;
            }

            else {
                
                if(node->data < currentNode->data) {
                    std::cout<<"Shifiting left\n";
                    parent = currentNode;
                    currentNode = currentNode->left;
                }

                else {
                    std::cout<<"Shifiting right\n";
                    parent = currentNode;
                    currentNode = currentNode->right;
                }
            }
        }//end while
        if(node->data < parent->data) {
            parent->left = node;
            std::cout<<"Adding " << node->data << " to the left of the parent.\n";
        }

        else {
            parent->right = node;
            std::cout<<"Adding " << node->data << " to the right of the parent.\n";

        }
    }

}


void BST::deleteNode(dataType elem) {
    return;
}


void BST::inOrderTrav(Node* root) {
    if(root != NULL) {
        inOrderTrav(root->left);
        std::cout<<"data: "<< root->data<<"\n";
        inOrderTrav(root->right);
    }
}

void BST::showInOrder() {
    inOrderTrav(root);
}


void BST::postOrderTrav(Node* root) {
    if(root != NULL) {
        postOrderTrav(root->left);
        postOrderTrav(root->right);
        std::cout<<"data: "<< root->data <<"\n";
    }
}

void BST::showPostOrder() {
    postOrderTrav(root);
}

void BST::preOrderTrav(Node* root) {
    if(root != NULL) {
        std::cout<<"data: "<<root->data<<"\n";
        preOrderTrav(root->left);
        preOrderTrav(root->right);
    }   
}

void BST::showPreOrder() {
    preOrderTrav(root);
}


void BST::deleteTree(Node* root) {
    if( root != NULL) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

bool BST::search(dataType key) {
    if(!root) {
        std::cout<<"Empty tree...\n";
        return false;
    }

    else {
        Node* currentNode = root;
        while(currentNode != NULL) {
            if(currentNode->data == key) {
                return true;
            }
            else if(key < currentNode->data) {
                currentNode = currentNode->left;
            }
            else {
                currentNode = currentNode->right;
            }
        }

        return false;
    }
}

#endif