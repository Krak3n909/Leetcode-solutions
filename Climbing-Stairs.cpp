1class Solution {
2public:
3    int climbStairs(int n) {
4        int f = 1, s = 1, res = 1;
5        for(int i = 0;i < n - 1;i++)
6        {
7            res = f + s;
8            f = s;
9            s = res;
10        } 
11        return res;
12    }
13};