1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int start = 0;
5        int end = s.size() - 1;
6        while(start < end)
7        {
8            if(!isalnum(s[start]))
9            {
10                start++;
11                continue;
12            }
13            else if(!isalnum(s[end]))
14            {
15                end--;
16                continue;
17            }
18            else if(tolower(s[start]) != tolower(s[end]))
19            {
20                return false;
21            }
22            else
23            {
24                start++;
25                end--;
26            }
27        }
28        return true;
29    }
30};