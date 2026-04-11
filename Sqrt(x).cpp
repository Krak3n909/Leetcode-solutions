1class Solution {
2public:
3    int mySqrt(int x) {
4        long long l = 0, r = x, ans = 0;
5        while(l <= r)
6        {
7            long long mid = (l + r) / 2;
8            if(mid * mid == x)
9            {
10                return mid;
11            }
12            else if(mid * mid > x)
13            {
14                r = mid - 1;
15            }
16            else
17            {
18                ans = mid;
19                l = mid + 1;
20            }
21        }
22        return ans;
23    }
24};