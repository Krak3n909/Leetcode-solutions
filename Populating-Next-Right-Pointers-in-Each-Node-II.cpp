1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) {
22        if(!root)
23        {
24            return root;
25        }
26        queue<Node*> q;
27        q.push(root);
28        q.push(nullptr);
29        while(q.size()>1)
30        {
31            Node* curr = q.front();
32            q.pop();
33            if(!curr)
34            {
35                q.push(nullptr);
36                continue;
37            }
38            curr->next = q.front();
39            if(curr->left)
40            {
41                q.push(curr->left);
42            }
43            if(curr->right)
44            {
45                q.push(curr->right);
46            }
47        }
48        return root;
49    }
50};