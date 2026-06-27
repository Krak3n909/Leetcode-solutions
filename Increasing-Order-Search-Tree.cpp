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
15    void trav(TreeNode* root, vector<TreeNode*>& list)
16    {
17        if(!root)
18        {
19            return;
20        }
21        trav(root->left, list);
22        list.push_back(root);
23        trav(root->right, list);
24    }
25
26    TreeNode* increasingBST(TreeNode* root) {
27        vector<TreeNode*> list;
28        trav(root, list);
29        TreeNode* tracker = list[0];
30        for(int i = 1;i < list.size();i++)
31        {
32            list[i]->left = nullptr;
33            list[i]->right = nullptr;
34            tracker->right = list[i];
35            tracker = tracker->right;
36        }
37        return list[0];
38    }
39};