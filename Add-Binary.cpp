1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.size() - 1, j = b.size() - 1;
5        int c = 0;
6        string res = "";
7        while(i >= 0 && j>=0)
8        {
9            int tmp = c;
10            tmp += a[i] - '0';
11            tmp += b[j] - '0';
12            if(tmp == 3)
13            {
14                res.push_back('1');
15                c = 1;
16            }
17            else if(tmp == 2)
18            {
19                res.push_back('0');
20                c = 1;
21            }
22            else if(tmp == 1)
23            {
24                res.push_back('1');
25                c = 0;
26            }
27            else
28            {
29                res.push_back('0');
30                c = 0;
31            }
32            i--;
33            j--;
34        }
35        while(i >= 0 )
36        {
37            int tmp = c;
38            tmp += a[i] - '0';
39            if(tmp == 3)
40            {
41                res.push_back('1');
42                c = 1;
43            }
44            else if(tmp == 2)
45            {
46                res.push_back('0');
47                c = 1;
48            }
49            else if(tmp == 1)
50            {
51                res.push_back('1');
52                c = 0;
53            }
54            else
55            {
56                res.push_back('0');
57                c = 0;
58            }
59            i--;
60        }
61        while(j >= 0 )
62        {
63            int tmp = c;
64            tmp += b[j] - '0';
65            if(tmp == 3)
66            {
67                res.push_back('1');
68                c = 1;
69            }
70            else if(tmp == 2)
71            {
72                res.push_back('0');
73                c = 1;
74            }
75            else if(tmp == 1)
76            {
77                res.push_back('1');
78                c = 0;
79            }
80            else
81            {
82                res.push_back('0');
83                c = 0;
84            }
85            j--;
86        }
87        if(c == 1)
88        {
89            res.push_back('1');
90        }
91        reverse(res.begin(), res.end());
92        return res;
93
94    }
95};