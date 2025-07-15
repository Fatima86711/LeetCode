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
    TreeNode* searchBST(TreeNode* root, int val) {
        stack<TreeNode*> s;
        // vector<int>res
        if(root==NULL){
            return root;
        }
        s.push(root);
        while(!s.empty()){
            TreeNode* current = s.top();
            s.pop();
            if(current->val== val){
                return current;
            }
            if(current->right!=NULL){
                s.push(current->right);
            }
            if(current->left!=NULL){
                s.push(current->left);
            }
        }
        return NULL;
    }
};