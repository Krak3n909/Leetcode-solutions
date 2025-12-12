1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4        int a= target-'a';
5        char tg=letters[0];
6        int mn=INT_MAX;
7        for(auto aa:letters)
8        {
9            int b=aa-'a';
10            if(b>a)
11            {
12                if(b<mn)
13                {
14                    mn=b;
15                    tg=aa;
16                }
17            }
18        }
19        return tg;
20    }
21};