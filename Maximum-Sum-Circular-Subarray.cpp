1class Solution {
2public:
3    int maxSubarraySumCircular(vector<int>& nums) {
4        int mx = 0;
5        int sum = 0;
6        int minSub = INT_MAX;
7        int curSub = 0;
8        int mxSub = INT_MIN;
9        int curSub2 = 0;
10        for(auto a:nums)
11        {
12            sum += a;
13            curSub += a;
14            curSub2 += a;
15            minSub = min(minSub, curSub);
16            if(curSub> 0 )
17            {
18                curSub = 0;
19            }
20            mxSub = max(mxSub, curSub2);
21            if(curSub2< 0 )
22            {
23                curSub2 = 0;
24            }
25        }
26        return (sum==minSub)?mxSub:max(mxSub,sum - minSub);
27    }
28};