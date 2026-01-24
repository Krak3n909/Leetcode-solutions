1class Solution {
2public:
3    void trav(vector<vector<int>>& res, int& n, int& k, int idx,
4              vector<int> tmp) {
5
6        tmp.push_back(idx);
7        if (tmp.size() == k) {
8            res.push_back(tmp);
9            return;
10        }
11        for (int i = idx; i < n; i++) {
12            trav(res, n, k, i + 1, tmp);
13        }
14    }
15
16    vector<vector<int>> combine(int n, int k) {
17        vector<vector<int>> res;
18        for (int i = 1; i <= n; i++) {
19            trav(res, n, k, i, {});
20        }
21        return res;
22    }
23};