class Solution {
  public:
     Node* prev = nullptr;
    Node* head = nullptr;
    Node* bToDLL(Node* root) {
        // code here
         if (root == nullptr) {
            return nullptr;
        }

        // Inorder traversal: First process the left subtree
        bToDLL(root->left);

        // If this is the first node (leftmost), set it as the head
        if (prev == nullptr) {
            head = root;
        } else {
            // Connect the previous node with the current node
            root->left = prev;
            prev->right = root;
        }

        // Update the previous node to the current node
        prev = root;

        // Process the right subtree
        bToDLL(root->right);

        // Return the head of the doubly linked list
        return head;
    }
};
