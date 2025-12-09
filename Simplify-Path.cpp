1class Solution {
2public:
3    string simplifyPath(string path) {
4        string res;
5        deque<string> s;
6        for(int i=0;i<path.size();i++)
7        {
8            if(path[i]=='/')
9            {
10                continue;
11            }
12            string p="";
13            while(i< path.size() && path[i]!='/')
14            {
15                p+=path[i];
16                ++i;
17            }
18            if(p==".")
19            {
20                continue;
21            }
22            else if(p=="..")
23            {
24                if(!s.empty())
25                {
26                    s.pop_front();
27                }
28            }
29            else
30            {
31                s.push_front(p);
32            }
33        }
34        while(!s.empty())
35        {
36            res+=("/"+s.back());
37            s.pop_back();
38        }
39        if(res=="")
40        {
41            return "/";
42        }
43        return res;
44    }
45};