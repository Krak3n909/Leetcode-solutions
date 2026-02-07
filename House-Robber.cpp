1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        if(nums.size() < 2)
5        {
6            return nums[0];
7        }
8        nums[1] = max(nums[0], nums[1]);
9        for(int i = 2; i < nums.size(); i++)
10        {
11            nums[i] = max(nums[i - 1], nums[i] + nums[i - 2]);
12        }
13        return nums[nums.size() - 1];
14    }
15};