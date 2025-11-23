class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int tg=nums.size()/3;
        unordered_map<int,int> k;
        unordered_set<int> s;
        vector<int> res;
        for(auto a:nums)
        {
            k[a]++;
            if(k[a]>tg)
            {
                s.insert(a);
            }
        }
        for(auto a:s)
        {
            res.push_back(a);
        }
        return res;
    }
};