1class Solution {
2private:
3    void mc(vector<int>& candidates,int target,int idx,vector<int>& cmb, int total,vector<vector<int>>& res)
4    {
5        if(total==target)
6        {
7            res.push_back(cmb);
8            return;
9        }
10
11        if(total>target || idx>=candidates.size())
12        {
13            return;
14        }
15        cmb.push_back(candidates[idx]);
16        mc(candidates,target,idx,cmb,total+candidates[idx],res);
17        cmb.pop_back();
18        mc(candidates,target,idx+1,cmb,total,res);
19
20
21    }
22public:
23    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
24        vector<vector<int>> res;
25        vector<int> cmb;
26        mc(candidates,target,0,cmb,0,res);
27        return res;
28    }
29
30};