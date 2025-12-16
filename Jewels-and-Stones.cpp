1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        unordered_set<char> k;
5        for(auto a:jewels)
6        {
7            k.insert(a);
8        }
9        int c=0;
10        for(auto a:stones)
11        {
12            if(k.find(a)!=k.end())
13            {
14                c++;
15            }
16        }
17        return c;
18    }
19};