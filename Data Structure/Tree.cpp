#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() : root(nullptr) {}

    void insert(int val) {
        root = insertRecursive(root, val);
    }

    TreeNode* insertRecursive(TreeNode* current, int val) {
        if (current == nullptr) {
            return new TreeNode(val);
        }

        if (val < current->data) {
            current->left = insertRecursive(current->left, val);
        } else if (val > current->data) {
            current->right = insertRecursive(current->right, val);
        }

        return current;
    }

    void inOrderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }

    void printInOrder() {
        inOrderTraversal(root);
        cout << endl;
    }
};

int main() {
    BinaryTree binaryTree;
    binaryTree.insert(5);
    binaryTree.insert(3);
    binaryTree.insert(7);
    binaryTree.insert(2);
    binaryTree.insert(4);

    cout << "In-order traversal of the binary tree: ";
    binaryTree.printInOrder();

    return 0;
}
