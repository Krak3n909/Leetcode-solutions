1class Solution {
2public:
3
4    bool isNum(string s)
5    {
6        if((s[0]>='0' && s[0]<='9' ) || (s.size()>1 && s[0]=='-'))
7        {
8            return true;
9        }
10        return false;
11    }
12
13    int expr(int a,int b, string s)
14    {
15        if(s[0]=='+')
16        {
17            return a+b;
18        }
19        else if(s[0]=='-')
20        {
21            return b-a;
22        }
23        else if(s[0]=='*')
24        {
25            return b*a;
26        }
27        else if(s[0]=='/')
28        {
29            return b/a;
30        }
31        return -1;
32    }
33
34    int evalRPN(vector<string>& tokens) {
35        stack<int> k;
36        for(auto a:tokens)
37        {
38            if(isNum(a))
39            {
40                k.push(stoi(a));
41            }
42            else
43            {
44                int aa=k.top();
45                k.pop();
46                int b=k.top();
47                k.pop();
48                k.push(expr(aa,b,a));
49            }
50        }
51        return k.top();
52    }
53};