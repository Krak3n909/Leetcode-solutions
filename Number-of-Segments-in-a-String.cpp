1class Solution {
2public:
3    int countSegments(string s) {
4        if(s.size() == 0)
5        {
6            return 0;
7        }
8        bool t = true;
9        for(auto a: s)
10        {
11            if(a != ' ')
12            {
13                t = false;
14                break;
15            }
16        }
17        if(t)
18        {
19            return 0;
20        }
21        int c = 0;
22        for(int i = 0;i < s.size();i++)
23        {
24            if(s[i] == ' ')
25            {
26                c++;
27                int j = i + 1;
28                while( j < s.size() && s[i] == s[j])
29                {
30                    j++;
31                }
32                i = j - 1;
33            }
34        }
35        if(s.size() > 1 && s[s.size() - 1] == ' ')
36        {
37            c--;
38        }
39        if(s[0] == ' ')
40        {
41            c--;
42        }
43        return c + 1;
44    }
45};