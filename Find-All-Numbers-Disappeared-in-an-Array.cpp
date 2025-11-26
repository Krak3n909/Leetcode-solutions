1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        unordered_set<int> k;
5        for(auto a:nums)
6        {
7            k.insert(a);
8        }
9        vector<int> res;
10        for(int i=1;i<=nums.size();i++)
11        {
12            if(k.find(i)==k.end())
13            {
14                res.push_back(i);
15            }
16        }
17        return res;
18    }
19};