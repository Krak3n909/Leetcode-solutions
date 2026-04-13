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
15    void chk(TreeNode* r, vector<double> &ans, vector<double> &c, int l)
16    {
17        if(!r)
18        {
19            return;
20        }
21        if(l + 1 > ans.size())
22        {
23            ans.push_back(0);
24            c.push_back(0);
25        }
26        ans[l] += r->val;
27        c[l]++;
28        chk(r->left, ans, c, l + 1);
29        chk(r->right, ans, c, l + 1);
30    }
31
32    vector<double> averageOfLevels(TreeNode* root) {
33        vector<double> ans;
34        vector<double> count;
35        chk(root, ans, count, 0);
36        for(int i = 0;i < ans.size();i++)
37        {
38            ans[i] /= count[i];
39        }
40        return ans;
41    }
42};