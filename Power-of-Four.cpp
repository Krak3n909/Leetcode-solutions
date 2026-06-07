1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        long long x = 1;
5        while(x <= n)
6        {
7            if(x == n)
8            {
9                return true;
10            }
11            x *= 4;
12        }
13        return false;
14    }
15};