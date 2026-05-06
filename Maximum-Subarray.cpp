1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int c = 0;
5        int mx = -INT_MAX;
6        for(auto a:nums)
7        {
8            c += a;
9            mx = max(c, mx);
10            if(c < 0)
11            {
12                c = 0;
13            }
14        }
15        return mx;
16    }
17};