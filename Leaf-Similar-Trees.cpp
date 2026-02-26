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
15    void tr(TreeNode* r, vector<int>& a)
16    {
17        if(!r)
18        {
19            return;
20        }
21        if(! r-> left && ! r-> right)
22        {
23            a.push_back(r->val);
24            return;
25        }
26        tr(r -> left, a);
27        tr(r -> right, a);
28    }
29
30    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
31        vector<int> a;
32        vector<int> b;
33        tr(root1, a);
34        tr(root2, b);
35        if(a.size() != b.size())
36        {
37            return false;
38        }
39        for(int i = 0;i < a.size();i++)
40        {
41            if(a[i] != b[i])
42            {
43                return false;
44            }
45        }
46        return true;
47    }
48};