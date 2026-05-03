1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int curEnd = 0;
5        int curFarthest = 0;
6        int i = 0;
7        int jmp = 0;
8        while(i < nums.size() - 1)
9        {
10            curFarthest = max(curFarthest, i + nums[i]);
11            if(i == curEnd)
12            {
13                jmp++;
14                curEnd = curFarthest;
15            }
16            i++;
17        }
18        return jmp;
19    }
20};