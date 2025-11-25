class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res,sm=0;
        int j=0;
        for(int i=0;i<k;i++)
        {
            sm+=nums[i];
        }
        res=sm/k;
        for(int i=k;i<nums.size();i++)
        {
            sm-=nums[j++];
            sm+=nums[i];
            double avg=sm/k;
            res=max(res,avg);
        }
        return res;
    }
};