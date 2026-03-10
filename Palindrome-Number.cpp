1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x < 0)
5        {
6            return false;
7        }
8
9        int n = x;
10        long long y = 0;
11        while(n > 0)
12        {
13            y = y*10 + n % 10;
14            n /= 10;
15        }
16        return x == y;
17    }
18};