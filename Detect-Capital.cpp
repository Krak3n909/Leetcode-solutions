class Solution {
public:

    bool check(char a)
    {
        return (a>='A' && a<='Z');
    }

    bool detectCapitalUse(string word) {
        int count=0;
        for(auto a:word)
        {
            if(check(a))
            {
                count++;
            }
        }
        if(count==word.size())
        {
            return true;
        }
        else if(count>0)
        {
            return check(word[0]) && count==1;
        }
        else
        {
            return true;
        }
    }
};