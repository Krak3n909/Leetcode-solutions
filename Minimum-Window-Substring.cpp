1class Solution {
2public:
3    string minWindow(string s, string t) {
4        if(s.empty() || t.empty() || s.length() < t.length())
5        {
6            return "";
7        }
8        vector<int> map(128, 0);
9        int count = t.length();
10        int start = 0, end = 0, minLen = INT_MAX, startIndex = 0;
11        for(char c : t)
12        {
13            map[c]++;
14        }
15
16        while(end < s.length())
17        {
18            if(map[s[end++]]-- > 0)
19            {
20                count--;
21            }
22            while(count == 0)
23            {
24                if(end - start < minLen)
25                {
26                    startIndex = start;
27                    minLen = end - start;
28                }
29                if(map[s[start++]]++ == 0)
30                {
31                    count++;
32                }
33            }
34        }
35        return minLen == INT_MAX? "": s.substr(startIndex, minLen);
36    }
37};