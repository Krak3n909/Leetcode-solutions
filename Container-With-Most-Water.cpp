1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int mx = 0;
7        while(left < right)
8        {
9            int mn = min(height[left], height[right]);
10            int k = mn * (right - left);
11            mx = max(k, mx);
12            if(height[left] < height[right])
13            {
14                left++;
15            }
16            else
17            {
18                right--;
19            }
20        }
21        return mx;
22    }
23};