1class Solution {
2public:
3
4    void tr(vector<vector<int>> &k,vector<int>& nums, int idx, vector<int> tmp)
5    {
6        if(idx >= nums.size())
7        {
8            k.push_back(tmp);
9            return;
10        }
11        tmp.push_back(nums[idx]);
12        tr(k, nums, idx+1, tmp);
13        tmp.pop_back();
14        tr(k, nums, idx+1, tmp);
15    }
16
17    vector<vector<int>> subsets(vector<int>& nums) {
18        vector<vector<int>> k;
19        tr(k, nums, 0, {});
20        return k;
21    }
22};