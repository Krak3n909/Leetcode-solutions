1class Solution {
2public:
3    int romanToInt(string s) {
4        int res = 0;
5        for(int i = 0;i < s.size(); i++)
6        {
7            if(s[i] == 'C')
8            {
9                if(s[i + 1] == 'M')
10                {
11                    res += 900;
12                    i++;
13                    continue;
14                }
15                else if(s[i + 1] == 'D')
16                {
17                    res += 400;
18                    i++;
19                    continue;
20                }
21                else
22                {
23                    res += 100;
24                }
25            }
26            else if(s[i] == 'X')
27            {
28                if(s[i + 1] == 'L')
29                {
30                    res += 40;
31                    i++;
32                    continue;
33                }
34                else if(s[i + 1] == 'C')
35                {
36                    res += 90;
37                    i++;
38                    continue;
39                }
40                else
41                {
42                    res += 10;
43                }
44            }
45            else if(s[i] == 'I')
46            {
47                if(s[i + 1] == 'V')
48                {
49                    res += 4;
50                    i++;
51                    continue;
52                }
53                else if(s[i + 1] == 'X')
54                {
55                    res += 9;
56                    i++;
57                    continue;
58                }
59                else
60                {
61                    res += 1;
62                }
63            }
64            else if(s[i] == 'V')
65            {
66                res += 5;
67            }
68            else if(s[i] == 'L')
69            {
70                res += 50;
71            }
72            else if(s[i] == 'D')
73            {
74                res += 500;
75            }
76            else if(s[i] == 'M')
77            {
78                res += 1000;
79            }
80            else
81            {
82                cout<<"WTF\n"<<endl;
83            }
84            cout<<res<<endl;
85        }
86            return res;
87    }
88};