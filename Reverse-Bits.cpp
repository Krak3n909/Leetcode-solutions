1class Solution {
2public:
3    int reverseBits(int n) {
4        long long ans = 0;
5        int c = 0;
6        while(n)
7        {
8            c++;
9            ans += n % 2;
10            ans *= 2;
11            n /= 2;
12        }
13        while(c < 31)
14        {
15            c++;
16            ans *= 2;
17        }
18        return ans;
19    }
20};