1class Solution {
2public:
3    int reverse(int z) {
4        long long x=z;
5        long long m = pow(2, 31) - 1;
6        long long mn = pow(-2, 31);
7        cout << m << mn;/*
8        if (x > m || x < mn) {
9            return 0;
10        }*/
11        long long n = 0;
12        if (x < 0) {
13            x *= -1;
14            while (x > 0) {
15                n *= 10;
16                n += x % 10;
17                x /= 10;
18            }
19            if (n > m || n < mn) {
20                return 0;
21            }
22            return n * -1;
23        }
24        while (x > 0) {
25            n *= 10;
26            n += x % 10;
27            x /= 10;
28        }
29        if (n > m || n < mn) {
30            return 0;
31        }
32        return n;
33    }
34};