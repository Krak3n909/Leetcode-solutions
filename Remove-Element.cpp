1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int ct = 0;
5        int i = 0;
6        int n = nums.size();
7        while(i < n)
8        {
9            if(nums[i] == val)
10            {
11                ct++;
12            }
13            else
14            {
15                swap(nums[i], nums[i - ct]);
16            }
17            i++;
18        }
19        return n - ct;
20    }
21};