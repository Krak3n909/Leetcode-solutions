1class Solution {
2public:
3    string convertToBase7(int num) {
4        if(num == 0)
5        {
6            return "0";
7        }
8        string res = "";
9        string add = "";
10        if(num < 0)
11        {
12            add = '-';
13            num *= -1;
14        }
15        while(num)
16        {
17            int rem = num % 7;
18            res += '0' + rem;
19            num /= 7;
20        }
21        res += add;
22        reverse(res.begin(), res.end());
23        return res;
24    }
25};