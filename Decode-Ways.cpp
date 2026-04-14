1class Solution {
2public:
3    int numDecodings(string s) {
4        vector<int> dp(s.size() + 1, 0);
5        dp[0] = 1;
6        dp[1] = (s[0] == '0') ? 0:1;
7        for(int i = 1;i < s.size();i++)
8        {
9            int f = s[i] - '0';
10            int se = s[i - 1] - '0';
11            se *= 10;
12            se += s[i] - '0';
13
14            if(f >= 1 && f <= 9)
15            {
16                dp[i + 1] += dp[i];
17            }
18            if(se >= 10 && se <= 26)
19            {
20                dp[i + 1] += dp[i - 1];
21            }
22        }
23        int n = s.size();
24        return dp[n];
25    }
26};