1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5        for(int i = 0; i < nums.size(); i++)
6        {
7            int c = 0;
8            int j = i + 1;
9            while(j < nums.size() && (nums[j - 1] == nums[j] - 1))
10            {
11                j++;
12                c++;
13            }
14            if(c > 0)
15            {
16                string tmp = "";
17                tmp += to_string(nums[i]);
18                tmp += "->";
19                tmp += to_string(nums[j - 1]);
20                ans.push_back(tmp);
21                i = j - 1;
22            }
23            else
24            {
25                string tmp = "";
26                tmp += to_string(nums[i]);
27                ans.push_back(tmp);
28            }
29        }
30        return ans;
31    }
32};