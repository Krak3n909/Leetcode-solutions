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

    void tr(TreeNode* r)
    {
        if(!r)
        {
            return;
        }
        if(r->right || r->left)
        {
            swap(r->right,r->left);
        }
        tr(r->left);
        tr(r->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        tr(root);
        return root;
    }
};