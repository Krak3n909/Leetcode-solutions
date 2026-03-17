1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int c = 0;
5        int l = 0;
6        for(auto a:s)
7        {
8            if(a == ' ' && c > 0)
9            {
10                l = c;
11                c = 0;
12            }
13            else if( a != ' ')
14            {
15                c++;
16            }
17        }
18        return (c > 0) ?  c : l;
19    }
20};