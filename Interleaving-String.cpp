1class Solution {
2public:
3    bool isInterleave(string s1, string s2, string s3) {
4        int n = s1.size();
5        int m = s2.size();
6        int z = s3.size();
7        if(m + n != z)
8        {
9            return false;
10        }
11        vector<vector<bool>> k(n + 1, vector<bool>(m + 1, false));
12        k[0][0] = true;
13        for(int i = 1; i <= m;i++)
14        {
15            if(k[0][i - 1] && s2[i - 1] == s3[i - 1])
16            {
17                k[0][i] = true;
18            }
19        }
20        
21        for(int i = 1; i <= n;i++)
22        {
23            if(k[i - 1][0] && s1[i - 1] == s3[i - 1])
24            {
25                k[i][0] = true;
26            }
27        }
28        for(int i = 1; i <= n;i++)
29        {
30            for(int j = 1; j <= m;j++)
31            {
32                int tgt = i + j;
33                if(s3[tgt - 1] == s2[j - 1] && k[i][j - 1])
34                {
35                    k[i][j] = true;
36                    continue;
37                }
38                if(s3[tgt - 1] == s1[i - 1] && k[i - 1][j])
39                {
40                    k[i][j] = true;
41                }
42            }
43        }
44        return k[n][m];
45    }
46};