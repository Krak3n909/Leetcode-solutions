1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        vector<vector<int>> k(m,vector<int>(n));
5        for(int i=0;i<m;i++)
6        {
7            for(int j=0;j<n;j++)
8            {
9                if(i==0 || j==0)
10                {
11                    k[i][j]=1;
12                }
13                else
14                {
15                    k[i][j]=k[i][j-1]+k[i-1][j];
16                }
17            }
18        }
19        return k[m-1][n-1];
20    }
21};