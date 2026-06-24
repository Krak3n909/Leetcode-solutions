1class Solution {
2public:
3    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
4        vector<vector<int>> ans(matrix[0].size(), vector<int>());
5        for(int i = 0; i < matrix[0].size();i++)
6        {
7            for(int j = 0; j < matrix.size();j++)
8            {
9                ans[i].push_back(matrix[j][i]);
10            }
11        }
12        return ans;
13    }
14};