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
15    void trav(TreeNode* r, int &res)
16    {
17        if(!r)
18        {
19            return;
20        }
21        else
22        {
23            res++;
24        }
25        trav(r->left, res);
26        trav(r->right, res);
27    }
28
29
30    int countNodes(TreeNode* root) {
31        int res = 0;
32        if(!root)
33        {
34            return res;
35        }
36        trav(root, res);
37        return res;
38    }
39};