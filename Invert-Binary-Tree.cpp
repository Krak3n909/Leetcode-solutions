1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14
15    void inv(TreeNode* r)
16    {
17        if(!r)
18        {
19            return;
20        }
21        TreeNode* tmp = r->left;
22        r->left = r->right;
23        r->right = tmp;
24        inv(r->left);
25        inv(r->right); 
26    }
27
28    TreeNode* invertTree(TreeNode* root) {
29        inv(root);
30        return root;
31    }
32};