1class Solution {
2public:
3    string reverseWords(string s) {
4        int i=0;
5        while(s[i]==' ')
6        {
7            i++;
8        }
9        int k=i;
10        while(k<s.size())
11        {
12            int j=k;
13            while(k<s.size() && s[k]!=' ')
14            {
15                j=k;
16                k++;
17            }
18            while(i<j)
19            {
20                swap(s[i++],s[j--]);
21            }
22            i=k+1;
23            k++;
24        }
25        return s;
26        
27    }
28};