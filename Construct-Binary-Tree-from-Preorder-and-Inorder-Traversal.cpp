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
15    TreeNode* tree(deque<int>& preorder,vector<int>& inorder)
16    {
17        if(!inorder.empty())
18        {
19            int val = preorder.front();
20            preorder.pop_front();
21            auto it = find(inorder.begin(),inorder.end(),val);
22            int idx = it - inorder.begin();
23            vector<int> left(inorder.begin(),inorder.begin()+idx);
24            vector<int> right(inorder.begin()+idx+1,inorder.end());
25
26            TreeNode* root = new TreeNode(val);
27            root->left = tree(preorder,left);
28            root->right = tree(preorder,right);
29            return root;
30        }
31        return nullptr;
32
33    }
34
35    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
36        deque<int> pre(preorder.begin(),preorder.end());
37        return tree(pre,inorder);
38    }
39};