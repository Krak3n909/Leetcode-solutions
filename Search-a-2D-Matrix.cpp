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
19                startRow = targetRow + 1;
20            }
21            else if(matrix[targetRow][0] > target)
22            {
23                endRow = targetRow - 1;
24            }
25            else
26            {
27                targetRow = -1;
28                break;
29            }
30        }
31        if(targetRow == -1)
32        {
33            return false;
34        }
35        int l = 0;
36        int r = col - 1;
37        while(l <= r)
38        {
39            int mid = (l + r) / 2;
40            
41            cout<<0<<mid<<endl;
42            if(matrix[targetRow][mid] == target)
43            {
44                return true;
45            }
46            else if( matrix[targetRow][mid] > target )
47            {
48                r = mid - 1;
49            }
50            else 
51            {
52                l = mid + 1; 
53            }
54        }
55        return false;
56    }
57};