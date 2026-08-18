class Solution {
public:


    bool check(char c1, char c2)
    {
        return tolower(c1) == tolower(c2);
    }

    bool isValid(char c)
    {
        
        if(( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) || (c >= '0' && c <= '9'))
        {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l <= r)
        {
            if( !isValid(s[l]) )
            {
                l++;
                continue;
            }
            else if( !isValid(s[r]) )
            {
                r--;
                continue;
            }
            if(!check(s[l], s[r]))
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};