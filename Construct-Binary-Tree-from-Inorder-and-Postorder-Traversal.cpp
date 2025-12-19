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
15    TreeNode* build(deque<int>& k,vector<int>& inorder)
16    {
17        if(!inorder.empty())
18        {
19            int val = k.back();
20            k.pop_back();
21            auto it = find(inorder.begin(),inorder.end(),val);
22            int idx = it - inorder.begin();
23            vector<int> left(inorder.begin(), inorder.begin()+idx);
24            vector<int> right(inorder.begin()+idx+1, inorder.end());
25            TreeNode* root = new TreeNode(val);
26            root->right = build(k,right);
27            root->left = build(k,left);
28
29            return root;
30        }
31        return nullptr;
32    }
33
34    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
35        deque<int> k(postorder.begin(), postorder.end());
36        return build(k, inorder);
37    }
38};