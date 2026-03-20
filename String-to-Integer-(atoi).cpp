1class Solution {
2public:
3
4    bool isNum(char c)
5    {
6        return (c >= '0' && c <= '9');
7    }
8
9    int myAtoi(string s) {
10        long long ans = 0;
11        int sign = 1;
12        int i = 0;
13        while(i < s.size() && s[i] == ' ')
14        {
15            i++;
16        }
17        while(i < s.size() && (s[i] == '-' || s[i] == '+'))
18        {
19            if(s[i] == '-')
20            {
21                sign *= -1;
22            }
23            i++;
24            break;
25        }
26        while(i < s.size() && isNum(s[i]))
27        {
28            if(ans * sign < INT_MIN)
29            {
30                return INT_MIN;
31            }
32            else if(ans * sign > INT_MAX)
33            {
34                return INT_MAX;
35            }
36            ans *= 10;
37            ans += s[i] - '0';
38            i++;
39        }
40        if(ans * sign < INT_MIN)
41        {
42            ans = INT_MIN;
43        }
44        else if(ans * sign > INT_MAX)
45        {
46            ans = INT_MAX;
47        }
48        return ans * sign;
49    }
50};