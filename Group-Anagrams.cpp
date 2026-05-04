1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> k;
5        for(auto a:strs)
6        {
7            string tmp = a;
8            sort(a.begin(), a.end());
9            k[a].push_back(tmp);
10        }
11        vector<vector<string>> ans;
12        for(auto a:k)
13        {
14            ans.push_back(a.second);
15        }
16        return ans;
17    }
18};