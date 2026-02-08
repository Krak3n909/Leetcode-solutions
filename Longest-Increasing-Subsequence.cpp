1class Solution {
2public:
3    int lengthOfLIS(vector<int>& nums) {
4        
5        int n = nums.size();
6        if(n==0)
7        {
8            return 0;
9        }
10        vector<int> dp(n,1);
11        for(int i = n-1;i>=0;i--)
12        {
13            for(int j=i;j<n;j++)
14            {
15                if(nums[i] < nums[j])
16                    dp[i] = max(dp[i],1 + dp[j]);
17            }
18        }
19        int mx = INT_MIN;
20        for(auto a:dp)
21        {
22            mx = max(a,mx);
23        }
24        return mx;
25    }
26};