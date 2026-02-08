1class Solution {
2public:
3    int coinChange(vector<int>& coins, int amount) {
4        vector<int> dp(amount + 1, amount + 1);
5        dp[0] = 0;
6        for(int i = 1;i <= amount; i++)
7        {
8            for(auto a:coins)
9            {
10                if(i - a >= 0)
11                {
12                    dp[i] = min(dp[i], 1 + dp[i - a]);
13                }
14            }
15        }
16        if(dp[amount] < amount + 1)
17        {
18            return dp[amount];
19        }
20        else
21        {
22            return -1;
23        }
24    }
25};