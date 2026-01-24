1class Solution {
2public:
3
4    
5    vector<int> tmp;
6    void trav(vector<vector<int>>& res, int& n, int& k, int idx) {
7
8        if (tmp.size() == k) {
9            res.push_back(tmp);
10            return;
11        }
12        for (int i = idx; i <= n; i++) {
13            tmp.push_back(i);
14            trav(res, n, k, i + 1);
15            tmp.pop_back();
16        }
17    }
18
19    vector<vector<int>> combine(int n, int k) {
20        vector<vector<int>> res;
21        trav(res, n, k, 1);
22
23        return res;
24    }
25};