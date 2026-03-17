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
15    int trav(TreeNode* r, int &res)
16    {
17        if(!r)
18        {
19            return 0;
20        }
21        int l = trav(r -> left, res);
22        int ri = trav(r -> right, res);
23        res = max(res, l + ri);
24        return (1 + max(l , ri));
25    }
26
27    int diameterOfBinaryTree(TreeNode* root) {
28        int res = 0;
29        trav(root, res);
30        return res;
31    }
32};