1class MinStack {
2public:
3
4    stack<int> s,m;
5
6    MinStack() {
7        
8    }
9    
10    void push(int val) {
11        s.push(val);
12        if(m.empty() || m.top()>=val)
13        {
14            m.push(val);
15        }
16    }
17    
18    void pop() {
19        if(m.top() == s.top())
20        {
21            m.pop();
22        }
23        s.pop();
24    }
25    
26    int top() {
27        return s.top();
28    }
29    
30    int getMin() {
31        return m.top();
32    }
33};
34
35/**
36 * Your MinStack object will be instantiated and called as such:
37 * MinStack* obj = new MinStack();
38 * obj->push(val);
39 * obj->pop();
40 * int param_3 = obj->top();
41 * int param_4 = obj->getMin();
42 */