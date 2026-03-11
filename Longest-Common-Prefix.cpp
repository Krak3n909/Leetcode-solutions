1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string ans = strs[0];
5        int ansS = ans.size();
6        int cur = 0;
7        for(int i = 1; i < strs.size(); i++)
8        {
9            for(int j = 0; j < min(ans.size(), strs[i].size()); j++)
10            {
11                if(ans[j] == strs[i][j])
12                {
13                    cur++;
14                }
15                else
16                {
17                    break;
18                }
19            }
20            if(cur == 0)
21            {
22                return "";
23            }
24            else if(cur < ans.size())
25            {
26                ans = ans.substr(0, cur);
27            }
28            cur = 0;
29        }
30        return ans;
31    }
32};