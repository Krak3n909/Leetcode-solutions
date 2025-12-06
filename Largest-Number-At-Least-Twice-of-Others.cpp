1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        vector<int> k;
5        for(auto a:nums)
6        {
7            k.push_back(a);
8        }
9        sort(nums.begin(),nums.end());
10        if(nums[nums.size()-1]<nums[nums.size()-2]*2)
11        {
12            return -1;
13        }
14        else
15        {
16            for(int i=0;i<k.size();i++)
17            {
18                if(k[i]==nums[nums.size()-1])
19                {
20                    return i;
21                }
22            }
23        }
24        return -1;
25    }
26};