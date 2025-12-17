1class Solution {
2public:
3
4    bool chk(int i)
5    {
6        int n=i;
7        while(n>0)
8        {
9            int m=n%10;
10            if(m==0 || i%m!=0)
11            {
12                return false;
13            }
14            n/=10;
15        }
16        return true;
17    }
18
19    vector<int> selfDividingNumbers(int left, int right) {
20        vector<int> k;
21        for(int i=left;i<=right;i++)
22        {
23            if(chk(i))
24            {
25                k.push_back(i);
26            }
27        }
28        return k;
29    }
30};