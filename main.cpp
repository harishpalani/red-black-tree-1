/**
 * Red-Black Tree | A (roughly) self-balancing binary tree
 * @author Harish Palani
 * @version April 2017
 */
#include <iostream>

using namespace std;

int main() {
    
    cout << "Red-Black Tree | Insertion" << "\n" << "Created by Harish Palani, April 2017" << "\n" << endl;
    Node* root = NULL;
    
    // Get input list
    cout << "Enter your list, separated by spaces:" << endl;
    string input;
    getline(cin, input);
    stringstream ss(input);
    
    // Load input list into vector
    vector<int> list;
    int i;
    while (ss >> i) {
        list.push_back(i);
        if (ss.peek() == ' ') {
            ss.ignore();
        }
    }
    
    // Insert vector contents into RBT
    for (i = 0; i < list.size(); i++) {
        root = insert(root, list.at(i));
    }
    
    // 
    
    return 0;
}