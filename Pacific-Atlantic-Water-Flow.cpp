1class Solution {
2public:
3
4    void marker(int i, int j, vector<vector<bool>>& mark, int n, int m,vector<vector<int>>& heights)
5    {
6        int dx[4] = {0, 0, 1, -1};
7        int dy[4] = {1, -1, 0, 0};
8        for(int k = 0;k < 4;k++)
9        {
10            int ti = i + dx[k];
11            int tj = j + dy[k];
12            if(ti < 0 || ti >= m || tj < 0 || tj >= n || mark[ti][tj])
13            {
14                continue;
15            }
16            if(heights[i][j] <= heights[ti][tj])
17            {
18                mark[ti][tj] = true;
19                marker(ti, tj, mark, n, m, heights);
20            }
21        }
22    }
23
24    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
25        int n = heights[0].size();
26        int m = heights.size();
27        vector<vector<bool>> pacificVisited(heights.size(), vector<bool>(heights[0].size(), false));
28        vector<vector<bool>> atlanticVisited(heights.size(), vector<bool>(heights[0].size(), false));
29        for(int i = 0;i < m;i++)
30        {
31            for(int j = 0;j < n;j++)
32            {
33                if(i == 0 || j == 0)
34                {
35                    pacificVisited[i][j] = true;
36                }
37            }
38        }
39        for(int i = 0;i < m;i++)
40        {
41            for(int j = 0;j < n;j++)
42            {
43                if(i == m - 1 || j == n - 1)
44                {
45                    atlanticVisited[i][j] = true;
46                }
47            }
48        }
49        for(int i = 0;i < m;i++)
50        {
51            for(int j = 0;j < n;j++)
52            {
53                if(pacificVisited[i][j])
54                {
55                    marker(i, j, pacificVisited, n, m, heights);
56                }
57            }
58        }
59        for(int i = 0;i < m;i++)
60        {
61            for(int j = 0;j < n;j++)
62            {
63                if(atlanticVisited[i][j])
64                {
65                    marker(i, j, atlanticVisited, n, m, heights);
66                }
67            }
68        }
69        vector<vector<int>> res;
70        for(int i = 0;i < m;i++)
71        {
72            for(int j = 0;j < n;j++)
73            {
74                if(atlanticVisited[i][j] && pacificVisited[i][j])
75                {
76                    res.push_back({i, j});
77                }
78            }
79        }
80        return res;
81    }
82};