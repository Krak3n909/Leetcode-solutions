1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        vector<int> pre(nums.size(), 0);
5        pre[0] = nums[0];
6        for (int i = 1; i < nums.size(); i++) {
7            pre[i] = pre[i - 1] + nums[i];
8        }
9        if (pre[pre.size() - 1] - nums[0] == 0) {
10            return 0;
11        }  else {
12            for (int i = 1; i < pre.size() - 1; i++) {
13                if (pre[i - 1] == (pre[pre.size() - 1] - pre[i])) {
14                    return i;
15                }
16            }
17        }
18        if (pre[pre.size() - 1] - nums[pre.size() - 1] == 0) {
19            return pre.size() - 1;
20        }
21        return -1;
22    }
23};