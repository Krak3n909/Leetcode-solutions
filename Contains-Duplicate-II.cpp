1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int, vector<int>> z;
5        for(int i = 0;i < nums.size();i++)
6        {
7            if(z.find(nums[i]) == z.end())
8            {
9                vector<int> m(1, i);
10                z[nums[i]] = m;
11            }
12            else
13            {
14                for(auto a: z[nums[i]])
15                {
16                    int dif = abs(a - i);
17                    if(dif <= k)
18                    {
19                        return true;
20                    }
21                }
22                z[nums[i]].push_back(i);
23            }
24        }
25        return false;
26    }
27};