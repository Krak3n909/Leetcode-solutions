1class Solution {
2public:
3
4    void swap(int& a, int& b) {
5        int temp = a;
6        a = b;
7        b = temp;
8    }    
9
10    void bt(vector<vector<int>>& k, int idx,vector<int>& nums)
11    {
12        if(idx == nums.size())
13        {
14            k.push_back(nums);
15            return;
16        }
17        for(int i=idx;i<nums.size();i++)
18        {
19            swap(nums[i], nums[idx]);
20            bt(k, idx+1, nums);
21            swap(nums[i], nums[idx]);
22        }
23    }
24
25
26
27    vector<vector<int>> permute(vector<int>& nums) {
28        vector<vector<int>> k;
29        bt(k, 0, nums);
30        return k;
31    }
32};