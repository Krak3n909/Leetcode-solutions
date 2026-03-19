1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        if(needle.size() > haystack.size())
5        {
6            return -1;
7        }
8        int j = 0;
9        for(int i = 0; i <= haystack.size() - needle.size() ; i++)
10        {
11            if(haystack[i] == needle[j])
12            {
13                int n = i;
14                while(j < needle.size() && haystack[n] == needle[j])
15                {
16                    n++;
17                    j++;
18                    continue;
19                }
20                if(j >= needle.size())
21                {
22                    return i;
23                }
24                else
25                {
26                    j = 0;
27                }
28            }
29        }
30        return -1;
31    }
32};