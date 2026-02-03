1class Solution {
2public:
3
4    int binSearch(vector<int>& nums, int target, bool left)
5    {
6        int l = 0, r = nums.size() - 1;
7        int i = -1;
8        while( l <= r)
9        {
10            int mid = (l + r) / 2;
11            if(nums[mid] < target)
12            {
13                l = mid + 1;
14            }
15            else if(nums[mid] > target)
16            {
17                r = mid - 1;
18            }
19            else
20            {
21                i = mid;
22                if(left)
23                {
24                    r = mid - 1;
25                }
26                else
27                {
28                    l = mid + 1;
29                }
30            }
31        }
32        return i;
33    }
34
35    vector<int> searchRange(vector<int>& nums, int target) {
36        int left = binSearch(nums, target, true);
37        int right = binSearch(nums, target, false);
38        return {left, right};
39    }
40};