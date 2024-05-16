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
    bool evaluateTree(TreeNode* root) {
       return evaluateNode(root);    
    }
    
private:
    bool evaluateNode(TreeNode* node)
    {
        if(node == nullptr)
        {
            return false;
        }
        if(node->left == nullptr && node->right == nullptr)
        {
            return (node->val == 1);
        }
        
        bool left = evaluateNode(node->left);
        bool right = evaluateNode(node->right);

        if(node->val == 2)
        {
            return(left || right);
        }
        else if(node->val==3)
        {
            return(left && right);
        }
        return false;
    }
};
