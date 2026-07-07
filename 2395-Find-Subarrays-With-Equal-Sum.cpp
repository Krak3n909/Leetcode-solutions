class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> sums;
        int sum = 0;
        sum += nums[0];
        sum += nums[1];
        sums.insert(sum);
        for(int i = 2;i < nums.size();i++)
        {
            sum -= nums[i - 2];
            sum += nums[i];
            if(sums.find(sum) != sums.end())
            {
                return true;
            }
            else
            {
                sums.insert(sum);
            }
        }
        return false;
    }
};