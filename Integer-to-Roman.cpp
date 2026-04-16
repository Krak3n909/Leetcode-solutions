1class Solution {
2public:
3    string intToRoman(int num) {
4        vector<int> value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
5        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
6        string res = "";
7        int i = 0;
8        while(num)
9        {
10            if(value[i] > num)
11            {
12                i++;
13                continue;
14            }
15            int c = num / value[i];
16            num -= c * value[i];
17            while(c--)
18            {
19                res += symbols[i];
20            }
21            i++;
22        }
23        return res;
24    }
25};