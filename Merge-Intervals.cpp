1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        vector<vector<int>> ans;
5        sort(intervals.begin(), intervals.end());
6        int fp = intervals[0][0];
7        int lp = intervals[0][1];
8        for(int i = 0;i < intervals.size();i++)
9        {
10            if(lp >= intervals[i][0])
11            {
12                lp = max(intervals[i][1], lp);
13            }
14            else
15            {
16                ans.push_back({fp, lp});
17                fp = intervals[i][0];
18                lp = intervals[i][1];
19            }
20        }
21            ans.push_back({fp, lp});
22        return ans;
23    }
24};