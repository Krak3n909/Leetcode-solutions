1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(!root || root==p || root==q)
14        {
15            return root;
16        }
17
18        TreeNode* left = lowestCommonAncestor(root->left, p, q);
19        TreeNode* right = lowestCommonAncestor(root->right, p, q);
20
21        if(left && right)
22        {
23            return root;
24        }
25
26        return left? left:right;
27    }
28};