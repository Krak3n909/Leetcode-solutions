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
15    void trv(TreeNode* r, set<int> &k)
16    {
17        if(!r)
18        {
19            return;
20        }
21        k.insert(r -> val);
22        trv(r-> left, k);
23        trv(r-> right, k);
24    }
25
26    int findSecondMinimumValue(TreeNode* root) {
27        set<int> k;
28        trv(root, k);
29        if(k.size() < 2)
30        {
31            return -1;
32        }
33        int i = 0;
34        for(auto a:k)
35        {
36            i++;
37            if(i == 2)
38            {
39                return a;
40            }
41        }
42        return -1;
43    }
44};