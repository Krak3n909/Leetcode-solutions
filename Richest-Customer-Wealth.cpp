1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int mx = -INT_MAX;
5        for(auto a:accounts)
6        {
7            int t = 0;
8            for(auto b:a)
9            {
10                t+=b;
11            }
12            mx = max(mx,t);
13        }        
14        return mx;
15    }
16};