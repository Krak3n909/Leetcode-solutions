1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> res;
6        for(int i = 0;i < nums.size();i++)
7        {
8            while(i > 0 && nums[i] == nums[i - 1])
9            {
10                i++;
11            if(i >= nums.size())
12            {
13                break;
14            }
15            }
16            if(i >= nums.size())
17            {
18                break;
19            }
20            int j = i + 1;
21            int k = nums.size() - 1;
22            while(j < nums.size() && j < k)
23            {
24                int tot = nums[i] + nums[j] + nums[k];
25                if(tot > 0)
26                {
27                    k--;
28                }
29                else if(tot < 0)
30                {
31                    j++;
32                }
33                else
34                {
35                    res.push_back({nums[i], nums[j], nums[k]});
36                    j++;
37                    while(nums[j] == nums[j - 1] && j < k)
38                    {
39                        j++;
40                    }
41                }
42
43            }
44        }
45        return res;
46    }
47};