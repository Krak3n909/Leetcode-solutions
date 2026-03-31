1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int ans = -1;
5        int mn = INT_MAX;
6        for(auto a:prices)
7        {
8            mn = min(a, mn);
9            ans = max(ans, abs(a - mn));
10        }
11        return ans;
12    }
13};