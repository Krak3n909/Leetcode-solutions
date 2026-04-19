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
14    int ans = INT_MIN;
15
16    int helper(TreeNode* r)
17    {
18        if(!r)
19        {
20            return 0;
21        }
22        int left = max(helper(r->left), 0);
23        int right = max(helper(r->right), 0);
24        ans = max(ans, r->val + left + right);
25        return r->val + max(left, right);
26    }
27
28    int maxPathSum(TreeNode* root) {
29        helper(root);
30        return ans;
31    }
32};