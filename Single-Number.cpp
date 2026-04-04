1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0;
5        for(auto a:nums)
6        {
7            ans ^= a;
8        }
9        return ans;
10    }
11};