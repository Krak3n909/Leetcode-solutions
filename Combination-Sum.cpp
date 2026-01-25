1class Solution {
2public:
3
4    void trav(vector<vector<int>>& k, vector<int>& candidates, int& target, int idx, vector<int>& tmp, int sum)
5    {
6        if(sum>target || idx>=candidates.size())
7        {
8            return;
9        }
10        if(sum==target )
11        {
12            k.push_back(tmp);
13            return;
14        }
15        tmp.push_back(candidates[idx]);
16        trav(k, candidates, target, idx, tmp, sum+ candidates[idx]);
17        tmp.pop_back();
18        trav(k, candidates, target, idx+1, tmp, sum);
19    }
20
21    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
22        vector<vector<int>> k;
23        vector<int> tmp;
24        trav(k, candidates, target, 0, tmp, 0);
25        return k;
26    }
27};