class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map< string, int> k;
        for(int i=0;i<list1.size();i++)
        {
            k[list1[i]]=i;
        }

        vector<string> res;
        int min=INT_MAX;
        for(int i=0;i<list2.size();i++)
        {
            if(k.find(list2[i])!=k.end())
            {
                int sm=i+k[list2[i]];
                if(sm < min)
                {
                    res.clear();
                    res.push_back(list2[i]);
                    min=sm;
                }
                else if(sm==min)
                {
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};