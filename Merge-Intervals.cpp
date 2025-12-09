1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& i) {
4        sort(i.begin(),i.end());
5        vector<vector<int>> k;
6        int fp=i[0][0];
7        int lp=i[0][1];
8        for(int j=0;j<i.size();j++)
9        {
10            if(i[j][0]<=lp)
11            {
12                lp=max(i[j][1],lp);
13            }
14            else
15            {
16                k.push_back({fp,lp});
17                fp=i[j][0];
18                lp=i[j][1];
19            }
20        }
21        k.push_back({fp,lp});
22        return k;
23    }
24};