1/*
2// Definition for a QuadTree node.
3class Node {
4public:
5    bool val;
6    bool isLeaf;
7    Node* topLeft;
8    Node* topRight;
9    Node* bottomLeft;
10    Node* bottomRight;
11    
12    Node() {
13        val = false;
14        isLeaf = false;
15        topLeft = NULL;
16        topRight = NULL;
17        bottomLeft = NULL;
18        bottomRight = NULL;
19    }
20    
21    Node(bool _val, bool _isLeaf) {
22        val = _val;
23        isLeaf = _isLeaf;
24        topLeft = NULL;
25        topRight = NULL;
26        bottomLeft = NULL;
27        bottomRight = NULL;
28    }
29    
30    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
31        val = _val;
32        isLeaf = _isLeaf;
33        topLeft = _topLeft;
34        topRight = _topRight;
35        bottomLeft = _bottomLeft;
36        bottomRight = _bottomRight;
37    }
38};
39*/
40
41class Solution {
42public:
43
44    bool check(int x, int y, int n, vector<vector<int>>& grid)
45    {
46        int f = grid[x][y];
47        for(int i=0;i<n;i++)
48        {
49            for(int j=0;j<n;j++)
50            {
51                if(grid[x+i][y+j] != f)
52                {
53                    return false;
54                }
55            }
56        }
57        return true;
58    }
59
60    Node* con(vector<vector<int>>& grid, int x, int y, int nn)
61    {
62        Node* n;
63        if(check(x, y, nn, grid))
64        {
65            n = new Node(grid[x][y],true);
66        }
67        else
68        {
69            n = new Node(true, false);
70            n->topLeft = con(grid, x, y, nn/2);
71            n->bottomLeft = con(grid, x+nn/2, y, nn/2);
72            n->topRight = con(grid, x, y+nn/2, nn/2);
73            n->bottomRight = con(grid, x+nn/2, y+nn/2, nn/2);
74        }
75        return n;
76    }
77
78    Node* construct(vector<vector<int>>& grid) {
79        return con(grid, 0, 0, grid.size());
80    }
81};