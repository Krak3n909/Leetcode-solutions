1class Solution {
2public:
3    int minPathSum(vector<vector<int>>& grid) {
4        for(int i = grid.size() - 1;i >= 0; i--)
5        {
6            for(int j = grid[0].size() - 1;j >= 0; j--)
7            {
8                int ti = i + 1;
9                int tj = j + 1;
10                if(ti >= grid.size() && tj >= grid[0].size())
11                {
12                    continue;
13                }
14                else if(ti >= grid.size())
15                {
16                    grid[i][j] += grid[i][tj];
17                }
18                else if(tj >= grid[0].size())
19                {
20                    grid[i][j] += grid[ti][j];
21                }
22                else
23                {
24                    grid[i][j] += min(grid[i][tj], grid[ti][j]);
25                }
26            }
27        }
28        return grid[0][0];
29    }
30};