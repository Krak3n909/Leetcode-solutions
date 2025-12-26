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
15    void trav(TreeNode* r, int lvl, vector<double> &res, vector<int> &lvc)
16    {
17        if(!r)
18        {
19            return;
20        }
21        if(res.size()<lvl)
22        {
23            res.push_back(r->val);
24            lvc.push_back(1);
25        }
26        else
27        {
28            res[lvl-1] += r->val;
29            lvc[lvl-1] ++;
30        }
31        trav(r->left, lvl+1, res,lvc);
32        trav(r->right, lvl+1, res,lvc);
33    }
34
35    vector<double> averageOfLevels(TreeNode* root) {
36        vector<double> res;
37        vector<int> lv;
38        trav(root, 1, res,lv);
39        for(int i=0;i<res.size();i++)
40        {
41            res[i]=res[i]/lv[i];
42        }
43        return res;
44    }
45};