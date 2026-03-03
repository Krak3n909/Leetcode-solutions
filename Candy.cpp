1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4        int n = ratings.size();
5        vector<int> c(n, 1);
6        for(int i = 0;i < n - 1;i++)
7        {
8            if(ratings[i + 1] > ratings[i])
9            {
10                c[i + 1] = max(c[i + 1], c[i] + 1);
11            }
12        }
13        for(int i = n - 1;i > 0;i--)
14        {
15            if(ratings[i - 1] > ratings[i])
16            {
17                c[i - 1] = max(c[i - 1], c[i] + 1);
18            }
19        }
20        int tot = accumulate(c.begin(), c.end(), 0);
21        return tot;
22    }
23};