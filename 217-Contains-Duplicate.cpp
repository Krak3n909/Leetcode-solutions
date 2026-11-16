class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> data;
        for(auto a:nums)
        {
            if(data.find(a) != data.end())
            {
                return true;
            }
            data.insert(a);
        }
        return false;
    }
};