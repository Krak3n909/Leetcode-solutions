1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        for(int i = 0;i < matrix.size();i++)
5        {
6            for(int j = 0;j < matrix[0].size();j++)
7            {
8                if(j <= i)
9                {
10                    swap(matrix[i][j], matrix[j][i]);
11                }
12            }
13        }
14
15        for(int i = 0;i < matrix.size();i++)
16        {
17            int l = 0, r = matrix[0].size() - 1;
18            while(l < r)
19            {
20                swap(matrix[i][l++], matrix[i][r--]);
21            }
22        }
23        
24    }
25};