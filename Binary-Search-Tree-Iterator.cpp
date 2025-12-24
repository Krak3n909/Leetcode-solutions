1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class BSTIterator {
13    stack< TreeNode* > k;
14public:
15
16    void pushAll(TreeNode* r)
17    {
18        while(r)
19        {
20            k.push(r);
21            r=r->left;
22        }
23    }
24
25    BSTIterator(TreeNode* root) {
26        pushAll(root);
27    }
28    
29    int next() {
30        TreeNode* tmp = k.top();
31        k.pop();
32        pushAll(tmp->right);
33        return tmp->val;
34        
35    }
36    
37    bool hasNext() {
38        return !k.empty();
39    }
40
41};
42
43/**
44 * Your BSTIterator object will be instantiated and called as such:
45 * BSTIterator* obj = new BSTIterator(root);
46 * int param_1 = obj->next();
47 * bool param_2 = obj->hasNext();
48 */