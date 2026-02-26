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
21        tr(r -> left, a);
22        if(! r-> left && ! r-> right)
23        {
24            a.push_back(r->val);
25        }
26        tr(r -> right, a);
27    }
28
29    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
30        vector<int> a;
31        vector<int> b;
32        tr(root1, a);
33        tr(root2, b);
34        if(a.size() != b.size())
35        {
36            return false;
37        }
38        for(int i = 0;i < a.size();i++)
39        {
40            if(a[i] != b[i])
41            {
42                return false;
43            }
44        }
45        return true;
46    }
47};