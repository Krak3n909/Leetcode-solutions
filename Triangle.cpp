1class Solution {
2public:
3    int minimumTotal(vector<vector<int>>& triangle) {
4        int s = triangle.size() - 2;
5        while(s >= 0)
6        {
7            for(int i = 0; i < triangle[s].size() ; i++)
8            {
9                triangle[s][i] = triangle[s][i] + min(triangle[s + 1][i], triangle[s + 1][i + 1]);
10            }
11            s--;
12        }
13        return triangle[0][0];
14    }
15};