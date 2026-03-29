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
15    bool trav(TreeNode* r, int targetSum, int currentSum)
16    {
17        if(!r)
18        {
19            return false;
20        }
21        if(!r->left && !r->right)
22        {
23            return (currentSum+r->val) == targetSum;
24        }
25        return trav(r->right, targetSum, currentSum + r->val) || trav(r->left, targetSum, currentSum + r->val);
26    }
27
28
29    bool hasPathSum(TreeNode* root, int targetSum) {
30        if(!root)
31        {
32            return false;
33        }
34        return trav(root, targetSum, 0);
35    }
36};