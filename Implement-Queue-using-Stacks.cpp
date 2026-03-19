1class MyQueue {
2public:
3    stack<int> k1;
4    stack<int> k2;
5
6
7    MyQueue() {
8        
9    }
10    
11    void push(int x) {
12        while(!k2.empty())
13        {
14            k1.push(k2.top());
15            k2.pop();
16        }
17        k1.push(x);
18        while(!k1.empty())
19        {
20            k2.push(k1.top());
21            k1.pop();
22        }
23    }
24    
25    int pop() {
26        int tmp = k2.top();
27        k2.pop();
28        return tmp;
29    }
30    
31    int peek() {
32        return k2.top();
33    }
34    
35    bool empty() {
36        return k2.empty();
37    }
38};
39
40/**
41 * Your MyQueue object will be instantiated and called as such:
42 * MyQueue* obj = new MyQueue();
43 * obj->push(x);
44 * int param_2 = obj->pop();
45 * int param_3 = obj->peek();
46 * bool param_4 = obj->empty();
47 */