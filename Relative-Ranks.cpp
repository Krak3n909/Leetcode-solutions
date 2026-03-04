1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        vector<int> k;
5        for(auto a:score)
6        {
7            k.push_back(a);
8        }
9        sort(k.begin(), k.end());
10        vector<string> res(k.size(), "");
11        for(int i = 0;i < k.size();i++)
12        {
13            int idx = -1;
14            for(int j = 0; j < k.size();j++)
15            {
16                if(k[j] == score[i])
17                {
18                    idx = j;
19                    break;
20                }
21            }
22            int sc = k.size() - idx;
23            if(sc == 1)
24            {
25                res[i] = "Gold Medal";
26            }
27            else if(sc == 2)
28            {
29                res[i] = "Silver Medal";
30            }
31            else if(sc == 3)
32            {
33                res[i] = "Bronze Medal";
34            }
35            else
36            {
37                res[i] = to_string(sc);
38            }
39        }
40        return res;
41    }
42};