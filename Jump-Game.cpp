1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int mx = 0;
5        int n = nums.size();
6        for(int i = 0;i < n;i++)
7        {
8            if(i > mx)
9            {
10                break;
11            }
12            mx = max(i + nums[i], mx);
13            
14        }
15        return (mx >= n - 1);
16    }
17};