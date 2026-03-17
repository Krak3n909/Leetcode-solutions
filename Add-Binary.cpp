1class Solution {
2public:
3    string addBinary(string a, string b) {
4        string res = "";
5        int n = a.size() - 1;
6        int m = b.size() - 1;
7        int i = n;
8        int j = m;
9        int c = 0;
10        while(i >= 0 && j >= 0)
11        {
12            int f = a[i--] - '0';
13            int s = b[j--] - '0';
14            int tmp = f + s + c;
15            if(tmp == 0)
16            {
17                c = 0;
18                res += "0";
19            }
20            else if(tmp == 1)
21            {
22                c = 0;
23                res += "1";
24            }
25            else if(tmp == 2)
26            {
27                res += "0";
28                c = 1;
29            }
30            else if(tmp == 3)
31            {
32                res += "1";
33                c = 1;
34            }
35        }
36        while(i >= 0)
37        {
38            int f = a[i--] - '0';
39            int tmp = f + c;
40            if(tmp == 0)
41            {
42                c = 0;
43                res += "0";
44            }
45            else if(tmp == 1)
46            {
47                c = 0;
48                res += "1";
49            }
50            else if(tmp == 2)
51            {
52                res += "0";
53                c = 1;
54            }
55            else if(tmp == 3)
56            {
57                res += "1";
58                c = 1;
59            }
60        }
61        
62        while(j >= 0)
63        {
64            int s = b[j--] - '0';
65            int tmp = s + c;
66            if(tmp == 0)
67            {
68                c = 0;
69                res += "0";
70            }
71            else if(tmp == 1)
72            {
73                c = 0;
74                res += "1";
75            }
76            else if(tmp == 2)
77            {
78                res += "0";
79                c = 1;
80            }
81            else if(tmp == 3)
82            {
83                res += "1";
84                c = 1;
85            }
86        }
87        if(c)
88        {
89            res += "1";
90        }
91        reverse(res.begin(), res.end());
92        return res;
93    }
94};