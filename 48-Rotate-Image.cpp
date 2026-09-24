class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();


        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(j > i)
                {
                    matrix[i][j] = matrix[i][j] ^ matrix[j][i];
                    matrix[j][i] = matrix[i][j] ^ matrix[j][i];
                    matrix[i][j] = matrix[i][j] ^ matrix[j][i];
                }
            }
        }

        for(int i = 0;i < n;i++)
        {
            int l = 0;
            int r = m - 1;
            while(l < r)
            {
                matrix[i][l] = matrix[i][l] ^ matrix[i][r];
                matrix[i][r] = matrix[i][l] ^ matrix[i][r];
                matrix[i][l] = matrix[i][l] ^ matrix[i][r];
                l++;
                r--;
            }
        }
    }
};