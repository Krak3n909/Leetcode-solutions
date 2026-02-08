1class Solution {
2public:
3    bool wordBreak(string s, vector<string>& wordDict) {
4        unordered_set<string> dict{wordDict.begin(), wordDict.end()};
5        vector<bool> dp(s.size()+1, false);
6        dp[0] = true;
7        for(int i = 1;i <= s.size(); i++)
8        {
9            for(int j = i - 1;j>=0;j--)
10            {
11                if(dp[j])
12                {
13                    string tgt = s.substr(j, i - j);
14                    if(dict.find(tgt) != dict.end())
15                    {
16                        dp[i] = true;
17                        break;
18                    }
19                }
20            }
21        }
22        return dp[s.size()];
23    }
24};