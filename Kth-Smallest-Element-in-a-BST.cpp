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
15    void tr(vector<int> &k, TreeNode* r)
16    {
17        if(!r)
18        {
19            return;
20        }
21
22        k.push_back(r->val);
23        tr(k,r->left);
24        tr(k,r->right);
25    }
26
27    int kthSmallest(TreeNode* root, int l) {
28        vector<int> k;
29        tr(k,root);
30        sort(k.begin(),k.end());
31        return k[l-1];
32    }
33};