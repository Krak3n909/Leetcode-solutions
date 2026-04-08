1class Solution {
2public:
3
4    int trav(vector<int>& nums, int l, int r)
5    {
6        int p2 = 0;
7        int p1 = 0;
8        for(int i = l ;i <= r;i++)
9        {
10            int curr = max(p1, p2 + nums[i]);
11            p2 = p1;
12            p1 = curr;
13        }
14        return p1;
15    }
16
17    int rob(vector<int>& nums) {
18        
19        int n = nums.size();
20
21        if(n == 1)
22        {
23            return nums[0];
24        }
25        else if(n == 2)
26        {
27            return max(nums[0], nums[1]);
28        }
29        return max(
30            trav(nums, 0, n - 2),
31            trav(nums, 1, n - 1)
32        );
33    }
34};