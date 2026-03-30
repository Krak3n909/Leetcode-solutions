1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int l = 0;
5        int r = nums.size() - 1;
6        while(l <= r)
7        {
8            int mid = (l + r) / 2;
9            if(target < nums[mid])
10            {
11                r = mid - 1;
12            }
13            else if(target > nums[mid])
14            {
15                l = mid + 1;
16            }
17            else
18            {
19                return mid;
20            }
21        } 
22        l = 0;
23        r = nums.size() - 1;
24        int m = (l + r) / 2;
25        while(l <= r)
26        {
27            m = (l + r) / 2;
28            if(nums[m] > target)
29            {
30                r = m - 1;
31            }
32            else
33            {
34                l = m + 1;
35            }
36        }
37        return l;
38    }
39};