#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

class BinaryTree {
public:
    TreeNode* root;

    BinaryTree() {
        root = nullptr;
    }

    // Insert in a simple way (for demonstration)
    TreeNode* insert(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }

        if (val < node->data) {
            node->left = insert(node->left, val);
        } else {
            node->right = insert(node->right, val);
        }

        return node;
    }

    // In-order traversal (Left, Root, Right)
    void inorder(TreeNode* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Pre-order traversal (Root, Left, Right)
    void preorder(TreeNode* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Post-order traversal (Left, Right, Root)
    void postorder(TreeNode* node) {
        if (node == nullptr) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    BinaryTree tree;

    // Insert some values
    tree.root = tree.insert(tree.root, 10);
    tree.insert(tree.root, 5);
    tree.insert(tree.root, 15);
    tree.insert(tree.root, 3);
    tree.insert(tree.root, 7);
    tree.insert(tree.root, 12);
    tree.insert(tree.root, 18);

    cout << "In-order traversal: ";
    tree.inorder(tree.root);  // Output: 3 5 7 10 12 15 18
    cout << endl;

    cout << "Pre-order traversal: ";
    tree.preorder(tree.root);  // Output: 10 5 3 7 15 12 18
    cout << endl;

    cout << "Post-order traversal: ";
    tree.postorder(tree.root);  // Output: 3 7 5 12 18 15 10
    cout << endl;

    return 0;
}
