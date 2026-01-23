1class Trie {
2public:
3
4    struct trieNode{
5        bool isEnd;
6        trieNode* children[26];
7    };
8
9    trieNode* getNode()
10    {
11        trieNode* n = new trieNode();
12        n->isEnd = false;
13        for(int i=0;i<26;i++)
14        {
15            n->children[i] = NULL;
16        }
17        return n;
18    }
19
20    trieNode* root;
21
22    Trie() {
23        root = getNode();
24    }
25    
26    void insert(string word) {
27        trieNode* crawler = root;
28        for(int i=0;i<word.size();i++)
29        {
30            int idx = word[i]-'a';
31            if(crawler->children[idx] == NULL)
32            {
33                crawler->children[idx] = getNode();
34            }
35            crawler = crawler->children[idx];
36        }
37        crawler->isEnd = true;
38    }
39    
40    bool search(string word) {
41        trieNode* crawler = root;
42        for(int i=0;i<word.size();i++)
43        {
44            int idx = word[i]-'a';
45            if(crawler->children[idx] == NULL)
46            {
47                return false;
48            }
49            crawler = crawler->children[idx];
50        }
51        return crawler->isEnd;
52    }
53    
54    bool startsWith(string word) {
55        trieNode* crawler = root;
56        for(int i=0;i<word.size();i++)
57        {
58            int idx = word[i]-'a';
59            if(crawler->children[idx] == NULL)
60            {
61                return false;
62            }
63            crawler = crawler->children[idx];
64        }
65        return true;
66    }
67};
68
69/**
70 * Your Trie object will be instantiated and called as such:
71 * Trie* obj = new Trie();
72 * obj->insert(word);
73 * bool param_2 = obj->search(word);
74 * bool param_3 = obj->startsWith(prefix);
75 */