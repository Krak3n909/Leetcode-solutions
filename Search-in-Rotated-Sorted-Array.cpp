1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l = 0;
5        int r = nums.size() - 1;
6        while (l <= r)
7        {
8            int mid = (l + r) / 2;
9            cout<<mid<<endl;
10            if(nums[mid] == target)
11            {
12                return mid;
13            }
14            else if(nums[l] <= nums[mid])
15            {
16                if(target >= nums[l] && nums[mid] >= target)
17                {
18                    r = mid - 1;
19                }
20                else
21                {
22                    l = mid + 1;
23                }
24            }
25            else
26            {
27                if(target <= nums[r] && nums[mid] <= target)
28                {
29                    l = mid + 1;
30                }
31                else
32                {
33                    r = mid - 1;
34                }
35            }
36        }
37        return -1;
38    }
39};