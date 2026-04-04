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
14    TreeNode* sortedArrayToBST(vector<int>& nums) {
15        return convert(nums, 0, nums.size() - 1);
16    }
17
18    TreeNode* convert(vector<int>& nums, int left, int right)
19    {
20        if(left > right)
21        {
22            return nullptr;
23        }
24        int mid = left + (right - left) / 2;
25        TreeNode* md = new TreeNode(nums[mid]);
26        md->left = convert(nums, left, mid - 1);
27        md->right = convert(nums, mid + 1, right);
28        return md;
29    }
30};