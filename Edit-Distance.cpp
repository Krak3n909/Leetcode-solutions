1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int m = word1.size();
5        int n = word2.size();
6        vector< vector< int >> k(m + 1, vector<int> (n + 1, 0));
7        for(int i = 0;i <= m; i++)
8        {
9            for(int j = 0;j <= n; j++)
10            {
11                if(i == 0)
12                {
13                    k[i][j] = j;
14                }
15                else if(j == 0)
16                {
17                    k[i][j] = i;
18                }
19            }
20        }
21
22        for(int i = 1;i <= m; i++)
23        {
24            for(int j = 1;j <= n; j++)
25            {
26                if(word1[i - 1] != word2[j - 1])
27                {
28                    k[i][j] = min(k[i][j - 1] ,min(k[i - 1][j], k[i - 1][j - 1]));
29                    k[i][j]++;
30                }
31                else
32                {
33                    k[i][j] = k[i - 1][j - 1];
34                }
35            }
36        }
37        return k[m][n];
38    }
39};