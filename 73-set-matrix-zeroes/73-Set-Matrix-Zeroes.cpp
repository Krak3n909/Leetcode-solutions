class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstRow = false;
        bool firstCol = false;
        for(auto a: matrix)
        {
            if(a[0] == 0)
            {
                firstCol = true;
                break;
            }
        }
        for(auto a: matrix[0])
        {
            if(a == 0)
            {
                firstRow = true;
                break;
            }
        }
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i = 1;i < n;i++)
        {
            for(int j = 1;j < m;j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if(firstRow)
        {
            for(auto& a:matrix[0])
            {
                a = 0;
            }
        }
        if(firstCol)
        {
            for(auto& a:matrix)
            {
                a[0] = 0;
            }
        }
    }
};