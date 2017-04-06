#ifndef NODE_H
#define NODE_H

class Node {
    public:
        int getData(); // get the value
        void setData(int d); // set the data
        int getColor(); // get the color
        void setColor(int c); // set the color
        Node* getLeft(); // get the left node
        void setLeft(Node* l); // set the left node
        Node* getRight(); // get the right node
        void setRight(Node* r); // set the right node
    
    private:
        int data; // numerical value stored in the node
        int color; // RED or BLACK
        Node* left; // left node
        Node* right; // right node
}    

#endif