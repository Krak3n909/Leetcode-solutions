1class MyStack {
2public:
3
4    queue<int> stack;
5
6    MyStack() {
7        
8    }
9    
10    void push(int x) {
11        stack.push(x);
12        int n = stack.size();
13        n -= 1;
14        while(n--)
15        {
16            int tmp = stack.front();
17            stack.pop();
18            stack.push(tmp);
19        }
20    }
21    
22    int pop() {
23        int tmp = stack.front();
24        stack.pop();
25        return tmp;
26    }
27    
28    int top() {
29        if(stack.empty())
30        {
31            return -1;
32        }
33        return stack.front();
34    }
35    
36    bool empty() {
37        return stack.empty();
38    }
39};
40
41/**
42 * Your MyStack object will be instantiated and called as such:
43 * MyStack* obj = new MyStack();
44 * obj->push(x);
45 * int param_2 = obj->pop();
46 * int param_3 = obj->top();
47 * bool param_4 = obj->empty();
48 */