#include <iostream>

using namespace std;


class Node { 
    public: 
        int value;
        Node* left;
        Node* right;

        Node(int value) {
            this->value = value;
            left = nullptr;
            right = nullptr;
        }
};


class BinarySearchTree {
    public:
        Node* root;

    public:
        BinarySearchTree() { root = nullptr; }

        void destroy(Node* currentNode) {
            if (currentNode->left) destroy(currentNode->left);
            if (currentNode->right) destroy(currentNode->right);
            delete currentNode;
        }

        ~BinarySearchTree() { destroy(root); }
        
};



int main() {
        
    BinarySearchTree* myBST = new BinarySearchTree();

    cout << "Root: " << myBST->root;

    /*
        EXPECTED OUTPUT:
        ----------------
        Root: 0x0

    */

}

