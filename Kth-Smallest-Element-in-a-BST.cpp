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
15    void tr(TreeNode* r, vector<int> &k)
16    {
17        if(!r)
18        {
19            return;
20        }
21        tr(r->left,k);
22        k.push_back(r->val);
23        tr(r->right,k);
24    }
25
26    int kthSmallest(TreeNode* root, int kk) {
27        vector<int> k;
28        tr(root, k);
29        return k[kk-1];
30    }
31};