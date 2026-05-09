1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& intervals,
4                               vector<int>& newInterval) {
5        vector<vector<int>> ans;
6        for(int i = 0;i <= intervals.size();i++)
7        {
8            if(i == intervals.size())
9            {
10                intervals.push_back(newInterval);
11            }
12            if(intervals[i][0] >= newInterval[0])
13            {
14                    intervals.insert(intervals.begin() + i, newInterval);
15                    break;
16            }
17        }
18        int fp = intervals[0][0];
19        int lp = intervals[0][1];
20        for(int i = 0;i < intervals.size();i++)
21        {
22            if(lp >= intervals[i][0])
23            {
24                lp = max(intervals[i][1], lp);
25            }
26            else
27            {
28                ans.push_back({fp, lp});
29                fp = intervals[i][0];
30                lp = intervals[i][1];
31            }
32        }
33        ans.push_back({fp, lp});
34        return ans;
35    }
36};