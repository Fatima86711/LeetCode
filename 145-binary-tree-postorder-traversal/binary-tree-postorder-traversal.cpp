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
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> result;
        helperFunction(root, result);
        return result;
        
    }
    void helperFunction (TreeNode* node, vector<int>&result)
    {
        if(node==NULL) return;
        helperFunction(node->left,result);
        helperFunction(node->right, result);
        result.push_back(node->val);


    }
};