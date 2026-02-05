1class Solution {
2public:
3    int trailingZeroes(int n) {
4        int c = 0;
5        int i = 1;
6        int num = 5;
7        while(num <= n)
8        {
9            int tmp = n / num;
10            c += tmp * i;
11            num *= 5;
12        }
13        return c;
14    }
15};