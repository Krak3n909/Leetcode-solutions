1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        int c = 0;
5        for(auto a:nums)
6        {
7            int t = 0;
8            while(a>0)
9            {
10                a/=10;
11                t++;
12            }
13            if(!(t%2))
14            {
15                c++;
16            }
17        }
18        return c;
19    }
20};