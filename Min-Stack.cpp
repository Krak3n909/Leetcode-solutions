1class MinStack {
2public:
3
4    stack<int> k;
5    vector<int> kk;
6    MinStack() {
7        
8    }
9    
10    void push(int val) {
11        k.push(val);
12        kk.push_back(val);
13        sort(kk.begin(),kk.end());
14    }
15    
16    void pop() {
17        k.pop();
18        stack<int> k2;
19        kk.clear();
20        while(!k.empty())
21        {
22            kk.push_back(k.top());
23            k2.push(k.top());
24            k.pop();
25        }
26        sort(kk.begin(),kk.end());
27        while(!k2.empty())
28        {
29            k.push(k2.top());
30            k2.pop();
31        }
32    }
33    
34    int top() {
35        return k.top();
36    }
37    
38    int getMin() {
39        return kk[0];
40    }
41};
42
43/**
44 * Your MinStack object will be instantiated and called as such:
45 * MinStack* obj = new MinStack();
46 * obj->push(val);
47 * obj->pop();
48 * int param_3 = obj->top();
49 * int param_4 = obj->getMin();
50 */