1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        vector<int> k(26, 0);
5        for(auto a:magazine)
6        {
7            k[a - 'a']++;
8        }
9        for(auto a : ransomNote)
10        {
11            k[a - 'a']--;
12            if(k[a - 'a'] < 0)
13            {
14                return false;
15            }
16        }
17        return true;
18    }
19};