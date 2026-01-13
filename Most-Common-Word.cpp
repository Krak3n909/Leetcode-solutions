1class Solution {
2public:
3
4    bool chk(char c)
5    {
6        return ((c>='a' && c<='z') || (c>='A' && c<='Z') );
7    }
8
9    bool chk2(char c)
10    {
11        return  (c>='A' && c<='Z') ;
12    }
13
14    string mostCommonWord(string paragraph, vector<string>& banned) {
15        unordered_set<string> bn;
16        for(auto a:banned)
17        {
18            bn.insert(a);
19        }
20        unordered_map<string,int> k;
21        string tmp = "";
22        for(int i=0;i<paragraph.size();i++)
23        {
24            if(chk(paragraph[i]))
25            {
26                if(chk2(paragraph[i]))
27                {
28                    paragraph[i] = tolower(paragraph[i]);
29                }
30                tmp+=paragraph[i];
31            }
32            else if(tmp != "")
33            {
34                if(bn.find(tmp)==bn.end())
35                {
36                    k[tmp]++;
37                }
38                tmp="";
39            }
40        }
41        if(tmp != "")
42        {
43            if(bn.find(tmp)==bn.end())
44                {
45                    k[tmp]++;
46                }
47                tmp="";
48        }
49        int mx = -INT_MAX;
50        string word = "";
51        for(auto a:k)
52        {
53            //cout<<a.first<<endl;
54            if(k[a.first]>=mx)
55            {
56                mx=k[a.first];
57                word = a.first;
58            }
59        }
60        return word;
61    }
62};