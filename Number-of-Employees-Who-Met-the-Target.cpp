1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int c=0;
5        for(auto a:hours)
6        {
7            if(a>=target)
8            {c++;}
9        }
10        return c;
11    }
12};