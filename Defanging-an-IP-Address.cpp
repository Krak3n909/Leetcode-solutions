1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string res = "";
5        for(auto a:address)
6        {
7            if(a == '.')
8            {
9                res += "[.]";
10            }
11            else
12            {
13                res += a;
14            }
15        }
16        return res;
17    }
18};