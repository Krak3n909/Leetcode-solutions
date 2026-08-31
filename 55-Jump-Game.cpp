class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++)
        {
            if(i > mx)
            {
                break;
            }
            mx = max(mx, i + nums[i]);
        }
        if(mx >= n - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};