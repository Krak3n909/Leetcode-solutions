1class Solution {
2public:
3
4    void chng(int i, int j, vector<vector<char>>& grid)
5    {
6        grid[i][j]='2';
7        int ci[4]={1,-1,0,0};
8        int cj[4]={0,0,1,-1};
9        for(int ii=0;ii<4;ii++)
10        {
11            int ti=ci[ii]+i;
12            int tj=cj[ii]+j;
13            if(ti>=0 && ti<grid.size() && tj>=0 && tj<grid[0].size() && grid[ti][tj]=='1')
14            {
15                chng(ti,tj,grid);
16            }
17        }
18    }
19
20    int numIslands(vector<vector<char>>& grid) {
21        int c=0;
22        for(int i=0;i<grid.size();i++)
23        {
24            for(int j=0;j<grid[i].size();j++)
25            {
26                if(grid[i][j]=='1')
27                {
28                    c++;
29                    chng(i,j,grid);
30                }
31            }
32        }
33        return c;
34        
35    }
36};