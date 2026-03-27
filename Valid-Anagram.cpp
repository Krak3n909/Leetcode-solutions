1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        vector<int> k(26, 0);
5        for(auto a:s)
6        {
7            k[a - 'a']++;
8        }
9        for(auto a:t)
10        {
11            k[a - 'a']--;
12            if(k[a - 'a'] < 0)
13            {
14                return false;
15            }
16        }
17        for(auto a:k)
18        {
19            if(a != 0)
20            {
21                return false;
22            }
23        }
24        return true;
25    }
26};