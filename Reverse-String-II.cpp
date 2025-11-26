1class Solution {
2public:
3    string reverseStr(string s, int k) {
4        int i=0;
5        while(i+2*k<=s.size())
6        {
7            int f=i,l=i+k-1;
8            while(f<l)
9            {
10                swap(s[f++],s[l--]);
11            }
12            i+=2*k;
13        }
14        if(i+k>s.size())
15        {
16            int f=i,l=s.size()-1;
17            while(f<l)
18            {
19                swap(s[f++],s[l--]);
20            }
21        }
22        else
23        {
24            int f=i,l=i+k-1;
25            while(f<l)
26            {
27                swap(s[f++],s[l--]);
28            }
29        }
30        return s;
31    }
32};