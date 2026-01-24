1class Solution {
2public:
3    void trav(vector<string>& res, int idx, string& digits, string tmp, vector<string> &k) {
4        if (idx == digits.size()) {
5            res.push_back(tmp);
6            return;
7        }
8
9        int i = digits[idx] - '1';
10        for (char a : k[i]) {
11            string m = tmp + a;
12            trav(res, idx + 1, digits, m, k);
13        }
14    }
15
16    vector<string> letterCombinations(string digits) {
17
18        vector<string> k;
19        k.push_back("");
20        k.push_back("abc");
21        k.push_back("def");
22        k.push_back("ghi");
23        k.push_back("jkl");
24        k.push_back("mno");
25        k.push_back("pqrs");
26        k.push_back("tuv");
27        k.push_back("wxyz");
28        vector<string> res;
29        trav(res, 0, digits, "", k);
30        return res;
31    }
32};