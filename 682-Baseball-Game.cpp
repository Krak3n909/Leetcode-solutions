class Solution {
public:

    bool checkint(string a)
    {
        if((a[0] >= '0' && a[0] <= '9') || a[0] == '-' )
        {
            return true;
        }
        
        return false;
    }

    int calPoints(vector<string>& operations) {
        vector<int> k;
        for(auto a: operations)
        {
            if(checkint(a))
            {
                k.push_back(stoi(a));
            }
            else if(a == "C")
            {
                k.pop_back();
            }
            else if(a == "D")
            {
                k.push_back(k[k.size() - 1] * 2 );
            }
            else
            {
                k.push_back((k[k.size() - 1] + k[k.size() - 2]));
            }
        }
        return accumulate(k.begin(), k.end(), 0);
    }
};