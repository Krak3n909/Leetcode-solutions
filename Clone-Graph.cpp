1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> neighbors;
7    Node() {
8        val = 0;
9        neighbors = vector<Node*>();
10    }
11    Node(int _val) {
12        val = _val;
13        neighbors = vector<Node*>();
14    }
15    Node(int _val, vector<Node*> _neighbors) {
16        val = _val;
17        neighbors = _neighbors;
18    }
19};
20*/
21
22class Solution {
23private:
24unordered_map<Node* , Node*> copies;
25
26public:
27    Node* cloneGraph(Node* node) {
28        if (!node) {
29            return NULL;
30        }
31
32        if (copies.find(node) == copies.end())
33        {
34            copies[node] = new Node(node->val,{});
35            for(Node* neighbor : node->neighbors)
36            {
37                copies[node] -> neighbors.push_back(cloneGraph(neighbor));
38            }
39        }
40        return copies[node];
41    }
42};