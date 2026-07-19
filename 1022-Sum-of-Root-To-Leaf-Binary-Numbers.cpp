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

    void trav(TreeNode* r, int tmp, int &res)
    {
        if(!r)
        {
            return;
        }
        
        tmp <<= 1;
        tmp |= r -> val;
        if(!r -> left && !r->right)
        {
            res += tmp;
            return;
        }
        trav(r -> left, tmp, res);
        trav(r -> right, tmp, res);
    }

    int sumRootToLeaf(TreeNode* root) {
        int res = 0;
        trav(root, 0, res);
        return res;
    }
};