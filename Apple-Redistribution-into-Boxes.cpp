1class Solution {
2public:
3    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
4        int t=0;
5        for(auto a:apple)
6        {
7            t+=a;
8        }
9        int i=capacity.size()-1;
10        sort(capacity.begin(),capacity.end());
11        while(t>0)
12        {
13            t-=capacity[i--];
14        }
15        return (-1*(i-capacity.size()+1));
16    }
17};