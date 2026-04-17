1class Solution {
2public:
3
4    bool static comp(vector<int> a, vector<int> b)
5    {
6        return a[1] < b[1];
7    }
8
9    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
10        sort(intervals.begin(), intervals.end(), comp);
11        int res = 0;
12        int lastEnd = intervals[0][1];
13        for(int i = 1;i < intervals.size();i++)
14        {
15            if(lastEnd > intervals[i][0])
16            {
17                res++;
18            }
19            else
20            {
21                lastEnd = intervals[i][1];
22            }
23        }
24        return res;
25    }
26};