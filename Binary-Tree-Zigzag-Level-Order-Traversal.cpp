1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
16        vector<vector<int>> res;
17        if(!root)
18        {
19            return res;
20        }
21        queue<TreeNode*> trav;
22        trav.push(root);
23        int t = 1;
24        while (!trav.empty()) {
25            int s = trav.size();
26            vector<int> tmp;
27            while (s--) {
28                TreeNode* tr = trav.front();
29                trav.pop();
30                if (tr) {
31                    tmp.push_back(tr->val);
32                    if (tr->left)
33                        trav.push(tr->left);
34                    if (tr->right)
35                        trav.push(tr->right);
36                }
37            }
38            if (t == -1) {
39                reverse(tmp.begin(), tmp.end());
40            }
41            res.push_back(tmp);
42            t *= -1;
43        }
44
45        return res;
46    }
47};