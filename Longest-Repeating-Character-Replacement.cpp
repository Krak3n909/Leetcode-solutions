1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        vector<int> hash(26, 0);
5        int c = 0;
6        int l = 0, r = 0;
7        while(r < s.size())
8        {
9            int mx = 0;
10            hash[s[r] - 'A']++;
11            for(auto a:hash)
12            {
13                mx = max(a, mx);
14            }
15            if(r - l + 1 - mx > k)
16            {
17                hash[s[l] - 'A']--;
18                l++;
19            }
20            else
21            {
22                c = max(r - l + 1, c);
23            }
24            r++;
25        }
26        return c;
27    }
28};