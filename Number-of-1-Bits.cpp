1class Solution {
2public:
3    int hammingWeight(int n) {
4        int c = 0;
5        while(n)
6        {
7            if(n % 2 == 1)
8            {
9                c++;
10            }
11            n >>= 1;
12        }
13        return c;
14    }
15};