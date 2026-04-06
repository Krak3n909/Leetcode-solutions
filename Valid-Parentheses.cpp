1class Solution {
2public:
3
4
5
6    bool isValid(string s) {
7        stack<char> k;
8        for(auto a:s)
9        {
10            if(a == ')')
11            {
12                if(!k.empty() && k.top() == '(')
13                {
14                    k.pop();
15                }
16                else
17                {
18                    return false;
19                }
20            }
21            else if(a == '}')
22            {
23                if(!k.empty() && k.top() == '{')
24                {
25                    k.pop();
26                }
27                else
28                {
29                    return false;
30                }
31            }
32            else if(a == ']')
33            {
34                if(!k.empty() && k.top() == '[')
35                {
36                    k.pop();
37                }
38                else
39                {
40                    return false;
41                }
42            }
43            else
44            {
45                k.push(a);
46            }
47        }
48        return k.empty();
49    }
50};