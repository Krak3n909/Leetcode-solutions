1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l = 0;
5        int r = nums.size() - 1;
6        while(l <= r)
7        {
8            int mid = l + (r - l) / 2;
9            if(nums[mid] == target)
10            {
11                return mid;
12            }
13            else if(nums[l] <= nums[mid])
14            {
15                if(target <= nums[mid] && target >= nums[l])
16                {
17                    r = mid - 1;
18                }
19                else
20                {
21                    l = mid + 1;
22                }
23            }
24            else
25            {
26                if(target >= nums[mid] && target <= nums[r])
27                {
28                    l = mid + 1;
29                }
30                else
31                {
32                    r = mid - 1;
33                }
34            }
35        }
36            return -1;
37    }
38};