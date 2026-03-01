1class Solution {
2public:
3
4    bool check(char c)
5    {
6        if(c == 'a' || c == 'u' || c == 'o' || c == 'i' || c == 'e'  )
7        {
8            return true;
9        }
10        return false;
11    }
12
13    string trimTrailingVowels(string s) {
14        int i = 0;
15        while(i < s.size() && check(s[s.size() - i - 1]))
16        {
17            i++;
18        }
19        string ss = "";
20        for(int j = 0;j < s.size() - i ;j++)
21        {
22            ss += s[j];
23        }
24        return ss;
25    }
26};