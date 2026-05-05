1class Solution {
2public:
3    double myPow(double x, long n) {
4        if(n == 0)
5        {
6            return 1;
7        }
8        if(n < 0)
9        {
10            return myPow(1 / x, -n);
11        }
12        if(n % 2 == 0)
13        {
14            return myPow(x * x, n / 2);
15        }
16        else
17        {
18            return x * myPow(x * x, n / 2);
19        }
20    }
21};