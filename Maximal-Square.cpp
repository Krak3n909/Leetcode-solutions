1class Solution {
2public:
3    int maximalSquare(vector<vector<char>>& matrix) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6        vector<vector<int>> dp(m, vector<int> (n, 301));
7        for(int i = 0; i < m; i++)
8        {
9            for(int j = 0; j < n; j++)
10            {
11                if(i == 0 || j == 0)
12                {
13                    dp[i][j] = matrix[i][j] - '0';
14                }
15                else if(matrix[i][j] == '0')
16                {
17                    dp[i][j] = 0;
18                }
19            }
20        }
21        for(int i = 1; i < m; i++)
22        {
23            for(int j = 1; j < n; j++)
24            {
25                if(dp[i][j] == 0)
26                {
27                    continue;
28                }
29                dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
30                dp[i][j]++;
31            }
32        }
33        int ans = INT_MIN;
34        for(int i = 0; i < m; i++)
35        {
36            for(int j = 0; j < n; j++)
37            {
38                ans = max(ans, dp[i][j]);
39            }
40        }
41        return ans*ans;
42    }
43};