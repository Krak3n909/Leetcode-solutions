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
15    void build(TreeNode* root, TreeNode* &n)
16    {
17        if(!root)
18        {
19            return;
20        }
21        TreeNode* l = NULL;
22        TreeNode* r = NULL;
23        if(root->left)
24            l = root->left;
25        if(root->right)
26            r = root->right;
27
28        n->left = NULL;
29        n->right = NULL;
30        
31        n->right=root;
32        n=n->right;
33
34
35        build(l,n);
36        build(r,n);
37    }
38
39    void flatten(TreeNode* root) {
40        if(!root || (!root->left && !root->right))
41        {
42            return;
43        }
44        TreeNode* nn = root;
45        build(root , root);
46    }
47};