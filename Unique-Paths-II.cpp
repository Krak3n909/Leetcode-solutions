1class Solution {
2public:
3    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
4        if(obstacleGrid.size() == 1 && obstacleGrid[0].size() == 1)
5        {
6            if(obstacleGrid[0][0] == 1)
7            {
8                return 0;
9            }
10            else
11            {
12                return 1;
13            }
14        }
15            if(obstacleGrid[0][0] == 0)
16            {
17                obstacleGrid[0][0] = 2;
18            }
19
20        for(int i = 0; i < obstacleGrid.size(); i++)
21        {
22            for(int j = 0; j < obstacleGrid[0].size(); j++)
23            {
24                if(obstacleGrid[i][j] == 1)
25                {
26                    continue;
27                }
28                int tx = i - 1;
29                int ty = j - 1;
30                if(tx < 0 && ty < 0)
31                {
32                    
33                    continue;
34                }
35                else if(tx < 0 )
36                {
37                    if(obstacleGrid[i][ty] > 1)
38                    {
39                        obstacleGrid[i][j] += obstacleGrid[i][ty] - 1;
40                    }
41                }
42                else if(ty < 0)
43                {
44                    if(obstacleGrid[tx][j] > 1)
45                    {
46                        obstacleGrid[i][j] += obstacleGrid[tx][j] - 1;
47                    }
48                }
49                else
50                {
51                    if(obstacleGrid[i][ty] > 1)
52                    {
53                        obstacleGrid[i][j] += obstacleGrid[i][ty] - 1;
54                    }
55                    if(obstacleGrid[tx][j] > 1)
56                    {
57                        obstacleGrid[i][j] += obstacleGrid[tx][j] - 1;
58                    }
59                }
60                if(obstacleGrid[i][j] >=  1)
61                {
62                    obstacleGrid[i][j]++;
63                }
64
65            }
66        }
67        if(obstacleGrid[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1] >= 1)
68        {
69            return obstacleGrid[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1] - 1;
70        }
71        else
72        {
73            return obstacleGrid[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1];
74        }
75    }
76};