1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int> res(nums.size());
5        int i=nums.size()-1;
6
7        int l=0,r=i;
8        while(l<=r)
9        {
10            if(abs(nums[l])>=abs(nums[r]))
11            {
12                res[i--]=(nums[l]*nums[l]);
13                l++;
14            }
15            else
16            {
17                res[i--]=(nums[r]*nums[r]);
18                r--;
19            }
20        }
21        return res;
22    }
23};