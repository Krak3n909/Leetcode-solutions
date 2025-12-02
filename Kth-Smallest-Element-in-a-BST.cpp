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
15    void tr(vector<int> &k, TreeNode* r,int l,int& res)
16    {
17        if(!r || k.size()>=l)
18        {
19            return;
20        }
21
22        tr(k,r->left,l,res);
23        k.push_back(r->val);
24        if(k.size()==l)
25        {
26            res=r->val;
27            return;
28        }
29        tr(k,r->right,l,res);
30    }
31
32    int kthSmallest(TreeNode* root, int l) {
33        vector<int> k;
34        int res=-1;
35        tr(k,root,l,res);
36        return res;
37    }
38};