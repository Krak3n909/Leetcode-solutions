1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if(numRows == 1 || numRows >= s.size())
5        {
6            return s;
7        }
8        vector<string> v(numRows, "");
9        int j = 0, dir = -1;
10        for(int i = 0;i < s.size();i++)
11        {
12            if(j == 0 || j == numRows - 1)
13            {
14                dir *= -1;
15            }
16            v[j] += s[i];
17            j += dir;
18        }
19        string res = "";
20        for(auto a:v)
21        {
22            res += a;
23        }
24        return res;
25    }
26};