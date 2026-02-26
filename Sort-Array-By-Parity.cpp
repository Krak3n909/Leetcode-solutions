1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int n = nums.size();
5        int c = 0;
6        for(int i = 0; i < n; i++)
7        {
8            if(nums[i] % 2 == 1)
9            {
10                c++;
11            }
12            else
13            {
14                swap(nums[i], nums[i - c]);
15            }
16        }
17        return nums;
18    }
19};