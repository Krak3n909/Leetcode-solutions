1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int left = 0;
5        int maxLength = 0;
6        unordered_set<char> k;
7        for(int right = 0;right < s.size();right++)
8        {
9            while(k.find(s[right]) != k.end())
10            {
11                k.erase(s[left]);
12                left++;
13            }
14            k.insert(s[right]);
15            maxLength = max(maxLength, right - left + 1);
16        }
17        return maxLength;
18    }
19};