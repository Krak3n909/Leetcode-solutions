1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int row = matrix.size();
5        int col = matrix[0].size();
6        int startRow = 0;
7        int endRow = row - 1;
8        int targetRow = -1;
9        while(startRow <= endRow)
10        {
11            targetRow = (startRow + endRow)/2;
12            if(matrix[targetRow][0] <= target && matrix[targetRow][col-1] >= target)
13            {
14                break;
15            }
16            else if(matrix[targetRow][col-1] < target)
17            {
18                if(targetRow == row - 1)
19                {
20                    return false;
21                }
22                startRow = targetRow + 1;
23            }
24            else if(matrix[targetRow][0] > target)
25            {
26                if(targetRow == 0)
27                {
28                    return false;
29                }
30                endRow = targetRow - 1;
31            }
32        }
33        int l = 0;
34        int r = col - 1;
35        while(l <= r)
36        {
37            int mid = (l + r) / 2;
38            if(matrix[targetRow][mid] == target)
39            {
40                return true;
41            }
42            else if( matrix[targetRow][mid] > target )
43            {
44                r = mid - 1;
45            }
46            else 
47            {
48                l = mid + 1; 
49            }
50        }
51        return false;
52    }
53};