1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        int carry = 0;
5        digits[digits.size() - 1]++;
6        for(int i = digits.size() - 1;i >= 0;i--)
7        {
8            int tmp = digits[i];
9            tmp += carry;
10            if(tmp >= 10)
11            {
12                carry = 1;
13                tmp -= 10;
14            }
15            else
16            {
17                carry = 0;
18            }
19            digits[i] = tmp;
20        }
21        if(carry)
22        {
23            reverse(digits.begin(), digits.end());
24            digits.push_back(carry);
25            reverse(digits.begin(), digits.end());
26        }
27        return digits;
28    }
29};