1class Solution {
2public:
3
4    void c(int nm,vector<int>& a)
5    {
6        int cn=0;
7        while(nm>0)
8        {
9            int rem=nm%2;
10            nm/=2;
11            if(rem)
12            {
13                cn++;
14            }
15        }
16        a.push_back(cn);
17    }
18
19    vector<int> countBits(int n) {
20        vector<int> ans;
21        for(int i=0;i<=n;i++)
22        {
23            c(i,ans);
24        }
25        return ans;
26    }
27};