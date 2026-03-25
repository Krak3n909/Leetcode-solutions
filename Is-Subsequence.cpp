1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int i = 0;
5        int j = 0;
6        while(i < s.size() && j < t.size())
7        {
8            if(s[i] == t[j])
9            {
10                i++;
11                j++;
12            }
13            else
14            {
15                j++;
16            }
17        }
18        return (i == s.size());
19        
20    }
21};