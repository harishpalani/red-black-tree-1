#ifndef NODE_H
#define NODE_H

#include <cmath>
#include <cstring>
#include <iostream>

struct Node {
    int mData;
    bool mBlack;
    
    Node* mLeft;
    Node* mRight;
    Node* mParent;
    
    // Node constructor w/ initialization list
    Node(int data, bool black = false) : mLeft(0), mRight(0), mParent(0) {
        mData = data;
        mBlack = black;
    }
    
    // Default node constructor
    Node() : mLeft(0), mRight(0), mParent(0) {
        mData = 0;
        mBlack = true;
    }
    
    // Checks if node is painted red
    bool isRed() { return !mBlack; }
    
    // Paints node either red or black
    void setColor(char color) { // 'r' = RED | 'b' = BLACK
        if (color == 'r') { mBlack = false; }
        else { mBlack = true; }
    }
    
    // Sets left node (mLeft)
    void setLeft(Node* node) {
        mLeft = node;
        if (node != 0) { node->mParent = this; }
    }
    
    // Sets right node (mRight)
    void setRight(Node* node) {
        mRight = node;
        if (node != 0) { node->mParent = this; }
    }
    
    // Checks if node is child in the specified direction
    bool isChild(char direction) {
        if (direction = 'l') {
            return mParent->mLeft == this;
        } else {
            return mParent->mRight == this;
        }
    }
    
    // Gets grandparent node
    Node* getGrandparent() {
        if (mParent == 0) { return 0; }
        return mParent->mParent;
    }
    
    // Gets uncle node
    Node* getUncle() {
        Node* grandparent = getGrandparent();
        if (grandparent == 0) { return 0; }
        if (grandparent->mLeft == mParent) { grandparent->mRight; }
        return grandparent->mLeft;
    }
};

class RBT {
    public:
        RBT();
        ~RBT();
        void print();           // Option #1
        void insert(int data); // Option #2
        void insert(Node* node);
        void populate(int* &list, int i, Node* node);
        int countLevels(Node* root, int level);
        Node* insertFirst(Node* child, int data);
    
    private:
        Node* root;
        
};

#endif