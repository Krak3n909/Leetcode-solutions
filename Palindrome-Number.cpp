1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x < 0)
5        {
6            return false;
7        }
8        long long y;
9        int tmp = x;
10        while(tmp)
11        {
12            int dec = tmp % 10;
13            y *= 10;
14            y += dec;
15            tmp /= 10;
16        }
17        return x == y;
18    }
19};