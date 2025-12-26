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
15    void tr(TreeNode* r,int &k, int &kk,int &res)
16    {
17        if(!r)
18        {
19            return ;
20        }
21        tr(r->left,k,kk,res);
22        k++;
23        if(k==kk)
24        {
25            res=r->val;
26            return ;
27        }
28        tr(r->right,k,kk,res);
29    }
30
31    int kthSmallest(TreeNode* root, int kk) {
32        int k=0;
33        int res=-1;
34        tr(root, k, kk,res);
35        return res;
36    }
37};