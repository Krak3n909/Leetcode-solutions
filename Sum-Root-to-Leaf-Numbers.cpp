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
15    void sum(TreeNode* root, string s,int &t)
16    {
17        s+=('0'+root->val);
18        if(!root || (!root->left && !root->right))
19        {
20            int m = stoi(s);
21            t+=m;
22        }
23
24        if(root->left)
25            sum(root->left,s,t);
26        if(root->right)
27            sum(root->right,s,t);
28    }
29
30    int sumNumbers(TreeNode* root) {
31        int t=0;
32        string s="";
33        sum(root,s,t);
34        return t;
35    }
36};