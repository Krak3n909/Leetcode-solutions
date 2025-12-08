1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int c=0;
5        int mx=-INT_MAX;
6        for(auto a:nums)
7        {
8            c+=a;
9            
10            mx=max(c,mx);
11            if(c<0)
12            {
13                c=0;
14            }
15        }
16        return mx;
17    }
18};