1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4        unordered_map<char, string> k;
5        unordered_set<string> z;
6        int j = 0;
7        int i = 0;
8        int ii = 0;
9        while(j < pattern.size() && ii <= s.size())
10        {
11            if(ii == s.size() || s[ii] == ' ' )
12            {
13                string tmp = s.substr(i, ii - i);
14                if(k.find(pattern[j]) == k.end())
15                {
16                    if(z.find(tmp) != z.end())
17                    {
18                        return false;
19                    }
20                    k[pattern[j++]] = tmp;
21                    z.insert(tmp);
22                }
23                else
24                {
25                    if(k[pattern[j++]] != tmp)
26                    {
27                        return false;
28                    }
29                }
30                i = ii + 1;
31                ii++;
32            }
33            else
34            {
35                ii++;
36            }
37        }
38        if(j < pattern.size() || ii <= s.size())
39        {
40            return false;
41        }
42        return true;
43    }
44};