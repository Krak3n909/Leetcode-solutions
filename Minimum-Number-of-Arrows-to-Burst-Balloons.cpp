1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& p) {
4        sort(p.begin(),p.end());
5        int ans=1;
6        int lastpoint=p[0][1];
7        for(auto a:p)
8        {
9            if(a[0]>lastpoint)
10            {
11                ans++;
12                lastpoint=a[1];
13            }
14            lastpoint = min(a[1],lastpoint);
15        }
16        return ans;
17    }
18};