1class WordDictionary {
2public:
3
4    struct trie{
5        bool isEnd;
6        trie* c[26];
7    };
8    trie* n;
9    trie* getNode()
10    {
11        trie* tmp = new trie();
12        tmp->isEnd = false;
13        for(int i=0;i<26;i++)
14        {
15            tmp->c[i] = NULL;
16        }
17        return tmp;
18    }
19
20    WordDictionary() {
21        n = getNode();
22    }
23    
24    void addWord(string word) {
25        trie* crawler = n;
26        for(int i=0;i<word.size();i++)
27        {
28            int idx = word[i]-'a';
29            if(crawler->c[idx]==NULL)
30            {
31                crawler->c[idx] = getNode();
32            }
33        crawler = crawler->c[idx];
34        }
35        crawler->isEnd = true;
36    }
37
38    bool dfs(trie* crawler, int idx, string &word)
39    {
40        if(idx == word.size())
41        {
42            return crawler->isEnd;
43        }
44        if(word[idx]=='.')
45        {
46            for(auto a:crawler->c)
47            {
48                if(a && dfs(a, idx+1, word))
49                {
50                    return true;
51                }
52            }
53            return false;
54        }
55        else
56        {
57            int i = word[idx] - 'a';
58            if(crawler->c[i]==NULL)
59            {
60                return false;
61            }
62            else
63            {
64                return dfs(crawler->c[i], idx+1, word);
65            }
66        }
67        return false;
68    }
69    
70    bool search(string word) {
71        return dfs(n, 0, word);
72    }
73};
74
75/**
76 * Your WordDictionary object will be instantiated and called as such:
77 * WordDictionary* obj = new WordDictionary();
78 * obj->addWord(word);
79 * bool param_2 = obj->search(word);
80 */