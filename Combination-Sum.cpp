1class Solution {
2public:
3    void trav(vector<vector<int>>& ans, vector<int>& candidates, int target,
4              vector<int> &tmp, int sum, int idx) {
5        if (sum > target || idx >= candidates.size()) {
6            return;
7        }
8        if(sum == target)
9        {
10            ans.push_back(tmp);
11            return;
12        }
13        tmp.push_back(candidates[idx]);
14        trav(ans, candidates, target, tmp, sum + candidates[idx], idx);
15        tmp.pop_back();
16        trav(ans, candidates, target, tmp, sum, idx + 1);
17    }
18
19    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
20        vector<vector<int>> ans;
21        vector<int> tmp;
22        trav(ans, candidates, target, tmp, 0, 0);
23        return ans;
24    }
25};