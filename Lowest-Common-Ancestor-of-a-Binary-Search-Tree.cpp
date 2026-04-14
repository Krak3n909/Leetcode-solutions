1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        while(root)
15        {
16            if(p->val > root->val && q->val > root->val)
17            {
18                root = root->right;
19            }
20            else if(p->val < root->val && q->val < root->val)
21            {
22                root = root->left;
23            }
24            else
25            {
26                return root;
27            }
28        }
29        return nullptr;
30    }
31};