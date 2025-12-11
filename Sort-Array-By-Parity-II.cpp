1class Solution {
2public:
3    vector<int> sortArrayByParityII(vector<int>& nums) {
4        vector<int> k(nums.size());
5        int j=1,l=0;
6        for(int i=0;i<nums.size();i++)
7        {
8            if(nums[i]%2)
9            {
10                k[j]=nums[i];
11                j+=2;
12            }
13            else
14            {
15                k[l]=nums[i];
16                l+=2;
17            }
18        }       
19        return k;
20    }
21};