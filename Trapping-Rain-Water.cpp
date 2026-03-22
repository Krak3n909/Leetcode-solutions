1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        vector<int> leftMax(n);
6        vector<int> rightMax(n);
7        int lm = 0, rm = 0;
8        for(int i = 0; i < n;i++)
9        {
10            leftMax[i] = lm;
11            rightMax[n - 1 - i] = rm;
12            lm = max(lm, height[i]);
13            rm = max(rm, height[n - 1 - i]);
14        }
15        int res = 0;
16        for(int i = 0; i < n;i++)
17        {
18            int tmp = min(leftMax[i], rightMax[i]);
19            res += ((tmp - height[i]) > 0) ? (tmp - height[i]) : 0;
20        }
21        return res;
22    }
23};