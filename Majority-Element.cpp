1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int c = 1;
5        int el = nums[0];
6        for(int i = 1;i < nums.size(); i++)
7        {
8            if(el != nums[i])
9            {
10                c--;
11            }
12            else
13            {
14                c++;
15            }
16            if(c < 0)
17            {
18                c = 0;
19                el = nums[i];
20            }
21        }
22        return el;
23    }
24};