1class Solution {
2public:
3    int countMonobit(int n) {
4        if(n==0)
5        {
6            return 1;
7        }
8        else if(n==1)
9        {
10            return 2;
11        }
12        int t = 1;
13        int i = 0;
14        while(pow(2 , i) <= n + 1)
15        {
16            i++;
17        }
18        t += i-1;
19        return t;
20    }
21};