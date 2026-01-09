1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> res;
5        for(int i=1;i<=n;i++)
6        {
7            string tmp = "";
8            if(!(i%3))
9            {
10                tmp+="Fizz";
11            }
12            if(!(i%5))
13            {
14                tmp+="Buzz";
15            }
16            if(tmp=="")
17            {
18                res.push_back(to_string(i));
19            }
20            else
21            {
22                res.push_back(tmp);
23            }
24        }
25        return res;
26    }
27};