1class Solution {
2public:
3    string longestPalindrome(string s) {
4        int c = 0;
5        string res = "";
6        for(int i = 0; i < s.size();i++)
7        {
8            int l = i, r = i;
9            while( l>= 0 && r < s.size() && s[l] == s[r])
10            {
11                if(c < (r - l + 1))
12                {
13                    c = r - l + 1;
14                    res = s.substr(l, r - l + 1);
15                }
16                l--;
17                r++;
18            }
19        }
20        for(int i = 0; i < s.size();i++)
21        {
22            int l = i, r = i + 1;
23            while( l>= 0 && r < s.size() && s[l] == s[r])
24            {
25                if(c < (r - l + 1))
26                {
27                    c = r - l + 1;
28                    res = s.substr(l, r - l + 1);
29                }
30                l--;
31                r++;
32            }
33        }
34        return res;
35    }
36};