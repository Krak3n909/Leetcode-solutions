class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int res = 0;
        unordered_set<int> seen;
        for(int i = 0;i < nums.size();i++)
        {
            if(seen.find(nums[i]) == seen.end())
            {
                seen.insert(nums[i]);
            }
            else
            {
                res ^= nums[i];
            }
        }
        return res;
    }
};