1class Solution {
2public:
3
4    int height(TreeNode* r)
5    {
6        if(!r)
7        {
8            return 0;
9        }
10        return 1 + max(height(r->left), height(r->right));
11    }
12
13    bool isBalanced(TreeNode* root) {
14        if(!root)
15        {
16            return true;
17        }
18        int left = height(root->left);
19        int right = height(root->right);
20
21        if(abs(left - right) > 1)
22        {
23            return false;
24        }
25        return isBalanced(root->left) && isBalanced(root->right);
26    }
27};