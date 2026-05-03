1class Solution {
2public:
3
4    void trav(vector<vector<int>> &ans, vector<int>& nums, int idx)
5    {
6        if(idx == nums.size())
7        {
8            ans.push_back(nums);
9            return;
10        }
11        for(int i = idx;i < nums.size();i++)
12        {
13            swap(nums[i], nums[idx]);
14            trav(ans, nums, idx + 1);
15            swap(nums[i], nums[idx]);
16        }
17    }
18
19    vector<vector<int>> permute(vector<int>& nums) {
20        vector<vector<int>> ans;
21        trav(ans, nums, 0);
22        return ans;
23    }
24};