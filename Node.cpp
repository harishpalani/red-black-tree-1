#include "Node.h"

using namespace std;

Node::Node() {
    data = 0;
    color = 1;
}

Node::~Node() {
    
}

// Accessors & mutators
int Node::getData() { return data; }
void Node::setData(int d) { data = d; } 
int Node::getColor() { return color; }
void Node::setColor(int c) { color = c; } 
Node* Node::getLeft() { return left; }
void Node::setLeft(Node* l) { left = l; }
Node* Node::getRight() { return right; }
void Node::setRight(Node* r) { right = r; }