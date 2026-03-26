1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char, char> k;
5        unordered_set<char> m;
6        for(int i = 0;i < s.size();i++)
7        {
8            if(k.find(s[i]) == k.end())
9            {
10                if(m.find(t[i]) != m.end())
11                {
12                    return false;
13                }
14                k[s[i]] = t[i];
15                m.insert(t[i]);
16            }
17            else
18            {
19                if(t[i] != k[s[i]])
20                {
21                    return false;
22                }
23            }
24        }
25        return true;
26    }
27};