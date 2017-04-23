#include "RBT.h"

using namespace std;

RBT::RBT() {
    root = new Node();
}

RBT::~RBT() {
    delete root;
}