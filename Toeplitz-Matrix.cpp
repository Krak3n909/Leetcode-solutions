1class Solution {
2public:
3    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
4        bool res = true;
5        for(int i = 0;i<matrix.size();i++)
6        {
7            int x = matrix.size() - 1 - i;
8            int y = 0;
9            int t = matrix[x][y];
10            while( x < matrix.size() && y< matrix[0].size() )
11            {
12                if(matrix[x][y]!=t)
13                {
14                    return false;
15                }
16                x++;
17                y++;
18            }
19        }      
20
21        
22        for(int i = 0;i<matrix[0].size();i++)
23        {
24            int y = matrix[0].size() - 1 - i;
25            int x = 0;
26            int t = matrix[x][y];
27            while( x < matrix.size() && y< matrix[0].size() )
28            {
29                if(matrix[x][y]!=t)
30                {
31                    return false;
32                }
33                x++;
34                y++;
35            }
36        }        
37        return true;
38    }
39};