1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        for(int i = digits.size() - 1;i >= 0;i--)
5        {
6            if(digits[i] < 9)
7            {
8                digits[i]++;
9                return digits;
10            }
11            digits[i] = 0;
12        }
13        digits.insert(digits.begin(), 1);
14        return digits;
15    }
16};