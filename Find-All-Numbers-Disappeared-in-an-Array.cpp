1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        vector<int> res;
5        for(int i=0;i<nums.size();i++)
6        {
7            const int idx = abs(nums[i])-1;
8            nums[idx] = -abs(nums[idx]);
9        }
10        for(int i=0;i<nums.size();i++)
11        {
12            if(nums[i]>0)
13            {
14                res.push_back(i+1);
15            }
16        }
17        return res;
18    }
19};