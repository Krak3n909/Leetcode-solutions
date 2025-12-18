1
2    class Node{
3    public:
4        int key;
5        int val;
6        Node* next;
7        Node* prev;
8        Node(int k,int v):key(k),val(v),next(nullptr),prev(nullptr){}
9    };
10
11class LRUCache {
12private:
13
14
15    int cap;
16    unordered_map<int, Node*> cache;
17    Node* oldest;
18    Node* latest;
19
20
21public:
22    void remove(Node* node)
23    {
24        Node* pr=node->prev;
25        Node* nx=node->next;
26        pr->next=nx;
27        nx->prev=pr;
28    }
29
30    void insert(Node* node)
31    {
32        Node* prev=latest->prev;
33        Node* next=latest;
34        prev->next=node;
35        next->prev=node;
36        node->next=next;
37        node->prev=prev;
38    }
39
40    LRUCache(int capacity) : cap(capacity) {
41        oldest = new Node(0, 0);
42        latest = new Node(0, 0);
43        oldest->next=latest;
44        latest->prev=oldest;
45    }
46    
47    int get(int key) {
48        if(cache.find(key)!=cache.end())
49        {
50            Node* node=cache[key];
51            remove(node);
52            insert(node);
53            return node->val;
54        }
55        return -1;
56    }
57    
58    void put(int key, int value) {
59        if(cache.find(key) != cache.end())
60        {
61            remove(cache[key]);
62        }
63        Node* newNode =new Node(key,value);
64        cache[key] = newNode;
65        insert(newNode);
66        if(cache.size()>cap){
67            Node* lru = oldest->next;
68            remove(lru);
69            cache.erase(lru->key);
70            delete lru;
71        }
72    }
73};
74
75/**
76 * Your LRUCache object will be instantiated and called as such:
77 * LRUCache* obj = new LRUCache(capacity);
78 * int param_1 = obj->get(key);
79 * obj->put(key,value);
80 */