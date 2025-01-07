/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorderHelper(root,result);
        return result;
    }
    void preorderHelper(TreeNode*root,vector<int>& result){
        if(root==NULL) return;
        
        result.push_back(root->val);
        preorderHelper(root->left,result);
        preorderHelper(root->right,result);
    }
};

// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> result;
//         preorderHelper(root, result);
//         return result;
//     }
    
//     void preorderHelper(TreeNode* node, vector<int>& result) {
//         if (node == nullptr) return;
//         result.push_back(node->val); // Visit the root node
//         preorderHelper(node->left, result); // Traverse left subtree
//         preorderHelper(node->right, result); // Traverse right subtree
//     }
// };
