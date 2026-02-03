1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int l = 0;
5        int r = nums.size() - 1;
6        int mn = nums[r];
7        while(l <  r)
8        {
9            int mid = (l + r) / 2;
10            mn = (nums[mid], mn);
11            if(nums[r] < nums[mid])
12            {
13                l = mid + 1;
14            }
15            else
16            {
17                r = mid ;
18            }
19        }
20        return nums[l];
21    }
22};