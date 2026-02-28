1class Solution {
2public:
3
4    bool check(char c)
5    {
6        if(c >= 'A' && c<= 'Z')
7        {
8            return true;
9        }
10        return false;
11    }
12
13    string toLowerCase(string s) {
14        for(int i = 0; i < s.size();i++)
15        {
16            if(check(s[i]))
17            {
18                s[i] = s[i] - ('A' - 'a');
19            }
20        }
21        return s;
22    }
23};