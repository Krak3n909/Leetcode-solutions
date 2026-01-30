1class Solution {
2public:
3    int reverseBits(int n) {
4        int res = 0, c = 0;
5        while(n)
6        {
7            c++;
8            if(n % 2 == 1)
9            {
10                res += 1;
11            }
12            n = n >> 1;
13            res = res << 1;
14        }
15        while(c != 31)
16        {
17            res = res << 1;
18            c++;
19        }
20        return res;
21    }
22};