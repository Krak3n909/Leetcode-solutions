1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> k;
5        for(int i = 0; i < nums.size(); i++)
6        {
7            if(k.find( target - nums[i] ) != k.end())
8            {
9                return {k[target - nums[i]], i };
10            }
11            else
12            {
13                k[nums[i]] = i;
14            }
15        }
16        return {1, 1};
17    }
18};