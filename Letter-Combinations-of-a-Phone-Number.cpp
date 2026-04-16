1class Solution {
2public:
3
4    void trav(vector<string> &res, vector<string> &k, string& digits, int idx, string cur)
5    {
6        if(idx >= digits.size())
7        {
8            res.push_back(cur);
9            return;
10        }
11        int target = digits[idx] - '1';
12        for(auto a:k[target])
13        {
14            string tmp = cur;
15            tmp += a;
16            trav(res, k, digits, idx + 1, tmp);
17        }
18    }
19
20    vector<string> letterCombinations(string digits) {
21        vector<string> k;
22        k.push_back("");
23        k.push_back("abc");
24        k.push_back("def");
25        k.push_back("ghi");
26        k.push_back("jkl");
27        k.push_back("mno");
28        k.push_back("pqrs");
29        k.push_back("tuv");
30        k.push_back("wxyz");
31        vector<string> res;
32        trav(res, k, digits, 0, "");
33        return res;
34    }
35};