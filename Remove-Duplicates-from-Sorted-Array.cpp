1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i=0;
5        int j=0;
6        while(j<nums.size() && i<nums.size())
7        {
8            if(nums[i]>=nums[j])
9            {
10                j++;
11            }
12            else
13            {
14                swap(nums[++i],nums[j]);
15                j++;
16            }
17        }
18        return i+1;
19    }
20};