1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> k;
5        for(int i=0;i<nums2.size();i++)
6        {
7            k[nums2[i]]=i;
8        }
9        vector<int> res;
10        for(auto a:nums1)
11        {
12            int st=k[a];
13            int n=-1;
14            while(++st<nums2.size())
15            {
16                if(a<nums2[st])
17                {
18                    n=nums2[st];
19                    break;
20                }
21            }
22            res.push_back(n);
23        }
24        return res;
25    }
26};