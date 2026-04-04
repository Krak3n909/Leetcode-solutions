1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4        int n = text1.size();
5        int m = text2.size();
6        vector<vector<int>> k(n + 1, vector<int>(m + 1, 0));
7        for(int i = 1;i <= n;i++)
8        {
9            for(int j = 1;j <= m;j++)
10            {
11                if(text1[i - 1] == text2[j - 1])
12                {
13                    k[i][j] = k[i - 1][j - 1] + 1;
14                }
15                else
16                {
17                    k[i][j] = max(k[i][j - 1], k[i - 1][j]);
18                }
19            }
20        }
21        return k[n][m];
22    }
23};