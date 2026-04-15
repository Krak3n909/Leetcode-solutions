1class Solution {
2public:
3    string longestPalindrome(string s) {
4        int c = 0;
5        string res = "";
6        for(int i = 0;i < s.size();i++)
7        {
8            int l = i, r = i;
9            while(l >= 0 && r < s.size() && s[l] == s[r])
10            {
11                if(c < r - l + 1)
12                {
13                    res = s.substr(l, r - l + 1);
14                    c = r - l + 1;
15                }
16                l--;
17                r++;
18            }
19        }
20
21        for(int i = 0;i < s.size();i++)
22        {
23            int l = i, r = i + 1;
24            while(l >= 0 && r < s.size() && s[l] == s[r])
25            {
26                if(c < r - l + 1)
27                {
28                    res = s.substr(l, r - l + 1);
29                    c = r - l + 1;
30                }
31                l--;
32                r++;
33            }
34        }
35        return res;
36    }
37};