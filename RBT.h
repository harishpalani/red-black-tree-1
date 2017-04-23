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
        if (c == 'r') { mBlack = false; }
        else { mBlack = true; }
    }
    
    // Sets left node (mLeft)
    void setLeft(Node* node) {
        mLeft = node;
        if (node != 0) { node->parent = this; }
    }
    
    // Sets right node (mRight)
    void setRight(Node* node) {
        mRight = node;
        if (node != 0) { node->parent = this; }
    }
};

class RBT {
    public:
        RBT();
        ~RBT();
        void print(); // Option #1
        void insert(int data); // Option #3
    
    private:
        Node* root;
        
};

#endif