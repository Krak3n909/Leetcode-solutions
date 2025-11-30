1class Solution {
2public:
3    vector<string> uncommonFromSentences(string s1, string s2) {
4        unordered_map<string,int> k1;
5        unordered_map<string,int> k2;
6        string s="";
7        for(int i=0;i<s1.size();i++)
8        {
9            if(s1[i]==' ')
10            {
11                if(s!="")
12                {
13                    k1[s]++;
14                    s="";
15                }
16            }
17            else
18            {
19                s+=s1[i];
20            }
21        }
22        if(s!="")
23        {
24            k1[s]++;
25            s="";
26        }
27        for(int i=0;i<s2.size();i++)
28        {
29            if(s2[i]==' ')
30            {
31                if(s!="")
32                {
33                    k2[s]++;
34                    s="";
35                }
36            }
37            else
38            {
39                s+=s2[i];
40            }
41        }
42        if(s!="")
43        {
44            k2[s]++;
45            s="";
46        }
47
48        vector<string> res;
49
50        for(auto a:k1)
51        {
52            if(k1[a.first]>1)
53            {
54                continue;
55            }
56            if(k2.find(a.first)==k2.end())
57            {
58                res.push_back(a.first);
59            }
60        }
61        
62        for(auto a:k2)
63        {
64            if(k2[a.first]>1)
65            {
66                continue;
67            }
68            cout<<k2[a.first]<<endl;
69            if(k1.find(a.first)==k1.end())
70            {
71                res.push_back(a.first);
72            }
73        }
74        return res;
75    }
76};