class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isNonDecreasing = true;
        bool isNonIncreasing = true;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] >= nums[i - 1])
            {
                continue;
            }
            else
            {
                isNonDecreasing = false;
                break;
            }
        }
        if(isNonDecreasing)
        {
            return true;
        }

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] <= nums[i - 1])
            {
                continue;
            }
            else
            {
                isNonIncreasing = false;
                break;
            }
        }
        return isNonIncreasing;

    }
};