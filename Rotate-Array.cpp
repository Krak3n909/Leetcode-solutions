1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        k = k % nums.size();
5        int n = nums.size();
6        reverse(nums.begin(), nums.begin() + (n - k));
7        reverse(nums.begin() + (n - k) , nums.end());
8        reverse(nums.begin(), nums.end());
9    }
10};