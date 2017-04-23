#include "RBT.h"

using namespace std;

RBT::RBT() {
    root = new Node();
}

RBT::~RBT() {
    delete root;
}

void RBT::print() {
    int levels = countLevels(root, 0);
    int nodes[(int)(pow(2, levels)) - 1];
    int* ptr = nodes;
    memset(nodes, 0, sizeof(nodes));
    populateArray(ptr, 0, root);
    
    int index = 0;
    for (int l = 1; l <= levels; l++) {
        
        for (int i = 0; i < pow(2, levels-l)-1; i++) {
            cout << ' ';
        }
        
        for (int n = 0; n < pow(2, l-1); n++) {
            // Set color
            if (nodes[index] > 0) {
                cout << nodes[index] << 'B';
            } else if (nodes[index] < 0) {
                cout << -nodes[index] << 'R';
            } else {
                cout << ' ';
            }
            
            index++;
            
            for (int i = 0; i < pow(2, levels - l + 1) - 1; i++) {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

void RBT::insert(int data) {
    insert(insertFirst(root, data));
}

void RBT::insert(Node* node) {
    if (node->mParent == 0) {
        node->setColor('b');
        return;
    } else if (node->mParent->mBlack) {
        return;
    } 
}

// Helper methods
int RedBlackTree::countLevels(Node* root, int level = 0) {
    if (currentRoot == 0) { return level; }
    return max(countLevels(root->mLeft, level + 1), countLevels(root->mRight, level + 1));
}

Node* RBT::insertFirst(Node* child, int data) {
    if (child->mLeft == 0 && child->mLeft == 0) {
        child->mData = data;
        child->setColor('r');
        child->setLeft(new Node());
        child->setRight(new Node());
        
        return child;
    }
    
    if (data < child->mData) {
        return insertFirst(child->mLeft, data);
    } else {
        return insertFirst(child->mRight, data);
    }
}