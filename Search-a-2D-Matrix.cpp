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
12            cout<<targetRow<<endl;
13            if(matrix[targetRow][0] <= target && matrix[targetRow][col-1] >= target)
14            {
15                break;
16            }
17            else if(matrix[targetRow][col-1] < target)
18            {
19                if(targetRow == row - 1)
20                {
21                    return false;
22                }
23                startRow = targetRow + 1;
24            }
25            else if(matrix[targetRow][0] > target)
26            {
27                if(targetRow == 0)
28                {
29                    return false;
30                }
31                endRow = targetRow - 1;
32            }
33        }
34        int l = 0;
35        int r = col - 1;
36        while(l <= r)
37        {
38            int mid = (l + r) / 2;
39            
40            cout<<0<<mid<<endl;
41            if(matrix[targetRow][mid] == target)
42            {
43                return true;
44            }
45            else if( matrix[targetRow][mid] > target )
46            {
47                r = mid - 1;
48            }
49            else 
50            {
51                l = mid + 1; 
52            }
53        }
54        return false;
55    }
56};