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
15    void f(vector<vector<int>>& o,TreeNode* r)
16    {
17        if(r==nullptr)
18        {
19            return;
20        }
21        queue<TreeNode*> q;
22        vector<int> e;
23        q.push(r);
24        q.push(nullptr);
25        while(!q.empty())
26        {
27            TreeNode* t=q.front();
28            q.pop();
29            if(t==nullptr)
30            {
31                o.push_back(e);
32                e.clear();
33
34                if(!q.empty())
35                {
36                    q.push(nullptr);
37                }
38            }
39            else
40            {
41                e.push_back(t->val);
42
43                if(t->left)
44                {
45                    q.push(t->left);
46                }
47                if(t->right)
48                {
49                    q.push(t->right);
50                }
51            }
52        }
53    }
54
55    vector<vector<int>> levelOrder(TreeNode* root) {
56        vector<vector<int>> o;
57        f(o,root);
58        return o;
59    }
60};