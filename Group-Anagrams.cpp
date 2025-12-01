1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>> k;
5        for(auto a:strs)
6        {
7            string tmp=a;
8            sort(a.begin(),a.end());
9            k[a].push_back(tmp);
10        }
11        vector<vector<string>> res;
12        
13        for(auto a:k)
14        {
15            vector<string> tmk;
16            for(auto b:a.second)
17            {
18                tmk.push_back(b);
19            }
20            res.push_back(tmk);
21        }
22        return res;
23    }
24};