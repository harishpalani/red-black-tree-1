#ifndef NODE_H
#define NODE_H

class Node {
    public:
        int getData();
        void setData(int d);
        int getColor();
        void setColor(int c);
        Node* getLeft();
        void setLeft(Node* l);
        Node* getRight();
        void setRight(Node* r);
    
    private:
        int data;
        int color; // RED or BLACK
        Node* left;
        Node* right;
}    

#endif