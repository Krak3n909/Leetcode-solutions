1class Solution {
2public:
3
4    int srch(vector<int>& nums, int target, bool left)
5    {
6        int l = 0;
7        int r = nums.size() - 1;
8
9        int ans = -1;
10        while(l <= r)
11        {
12            int mid = l + (r - l) / 2;
13            if(nums[mid] == target)
14            {
15                ans = mid;
16                if(left)
17                {
18                    r = mid - 1;
19                }
20                else
21                {
22                    l = mid + 1;
23                }
24            }
25            else if(nums[mid] < target)
26            {
27                l = mid + 1;
28            }
29            else
30            {
31                r = mid - 1;
32            }
33        }
34        return ans;
35    }
36
37    vector<int> searchRange(vector<int>& nums, int target) {
38        vector<int> k = {-1, -1};
39        k[0] = srch(nums, target, true);
40        k[1] = srch(nums, target, false);
41        return k;
42    }
43};