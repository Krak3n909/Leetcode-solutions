1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int suffix = 1;
5        int prefix = 1;
6        int n = nums.size();
7        int mx = INT_MIN;
8        for(int i = 0;i < n;i++)
9        {
10            suffix *= nums[i];
11            prefix *= nums[n - 1 - i];
12            mx = max(mx, max(suffix, prefix));
13            if(!suffix)
14            {
15                suffix = 1;
16            }
17            if(!prefix)
18            {
19                prefix = 1;
20            }
21        }
22        return mx;
23    }
24};