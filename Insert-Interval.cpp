1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& i, vector<int>& newInterval) {
4        i.push_back(newInterval);
5        sort(i.begin(),i.end());
6        vector<vector<int>> k;
7        int fp=i[0][0];
8        int lp=i[0][1];
9        for(int j=0;j<i.size();j++)
10        {
11            if(i[j][0]<=lp)
12            {
13                lp=max(lp,i[j][1]);
14            }
15            else
16            {
17                k.push_back({fp,lp});
18                fp=i[j][0];
19                lp=i[j][1];
20            }
21        }
22        k.push_back({fp,lp});
23        return k;
24    }
25};