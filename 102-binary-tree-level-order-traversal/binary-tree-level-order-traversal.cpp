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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue <TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        while(!q.empty()){
            int len = q.size();
            vector<int>temp;
            for(int i = 0;i<len;i++){
                TreeNode* current = q.front();
                q.pop();
                temp.push_back(current->val);
                if(current->left!=NULL){
                    q.push(current->left);
                }
                if(current->right!=NULL){
                    q.push(current->right);
                }
            }
            res.push_back(temp);
            
        }
        return res;
    }
};