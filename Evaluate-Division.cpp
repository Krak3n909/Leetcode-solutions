1class Solution {
2public:
3
4    void dfs(unordered_map<string, vector<pair<string, double>>> &k, string src, string dst, double &ans, double prod, 
5            unordered_set<string> &vis)
6            {
7                if(k.find(src)==k.end() || vis.find(src) !=vis.end())
8                {
9                    return;
10                }
11                vis.insert(src);
12                if(src == dst)
13                {
14                    ans=prod;
15                    return;
16                }
17                for(auto a: k[src])
18                {
19                    dfs(k, a.first, dst, ans, prod*a.second, vis);
20                }
21            }
22
23    vector<double> calcEquation(vector<vector<string>>& equations,
24                                vector<double>& values,
25                                vector<vector<string>>& queries) {
26        unordered_map<string, vector<pair<string, double>>> k;
27        for (int i = 0; i < equations.size(); i++) {
28            string u = equations[i][0];
29            string v = equations[i][1];
30            k[u].push_back(make_pair(v, values[i]));
31            k[v].push_back(make_pair(u, (1.0 / values[i])));
32        }
33        vector<double> res;
34        for (auto& p : queries) {
35            double ans = -1.0;
36            double prod = 1.0;
37            unordered_set<string> vis;
38            if (k.find(p[0]) != k.end()) {
39
40                dfs(k, p[0], p[1], ans, prod, vis);
41            }
42            res.push_back(ans);
43        }
44        return res;
45    }
46};