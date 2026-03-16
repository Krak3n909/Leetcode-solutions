1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i = 0, j = 0;
5        while(i < nums.size() && j < nums.size())
6        {
7            if(nums[i] == nums[j])
8            {
9                j++;
10            }
11            else
12            {
13                nums[++i] = nums[j];
14            }
15        }
16        return i + 1;
17    }
18};