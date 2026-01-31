1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int l = 0, r = nums.size() - 1; 
5        while( l <= r)
6        {
7            int mid = (l + r) / 2;
8            if(mid + 1 < nums.size() && nums[mid] < nums[mid + 1])
9            {
10                l = mid + 1;
11            }
12            else if(mid - 1 >= 0 && nums[mid] < nums[mid - 1])
13            {
14                r = mid - 1;
15            }
16            else
17            {
18                return mid;
19            }
20        }
21        return 0;
22    }
23};