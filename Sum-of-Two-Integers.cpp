1class Solution {
2public:
3    int getSum(int a, int b) {
4        int tmpXOR;
5        int tmpAND;
6        while(b != 0)
7        {
8            tmpXOR = a ^ b;
9            tmpAND = a & b;
10            tmpAND <<= 1;
11            a = tmpXOR;
12            b = tmpAND;
13        }
14        return a;
15    }
16};