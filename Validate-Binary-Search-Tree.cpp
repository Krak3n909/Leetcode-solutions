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
15    bool trav(TreeNode* r, long min, long max)
16    {
17        if(!r)
18        {
19            return true;
20        }
21        if(!(r->val>min && r->val<max))
22        {
23            return false;
24        }
25        return trav(r->left,min,r->val) && trav(r->right,r->val,max);
26    }
27
28    bool isValidBST(TreeNode* root) {
29        return trav(root,LONG_MIN, LONG_MAX);
30    }
31};