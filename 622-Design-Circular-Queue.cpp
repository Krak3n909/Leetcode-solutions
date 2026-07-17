class MyCircularQueue {
public:
    vector<int> m;
    int f = 0;
    int r = 0;
    int size = 0;
    int k = 0;
    MyCircularQueue(int kk) {
        m.resize(kk);
        k = kk;
    }
    
    bool enQueue(int value) {
        if(size == k)
        {
            return false;
        }
        m[r] = value;
        size++;
        r = (r + 1) % k;
        return true;
    }
    
    bool deQueue() {
        if(size == 0)
        {
            return false;
        }
        f = (f + 1) % k;
        size--;
        return true;
    }
    
    int Front() {
        if(size == 0)
        {
            return -1;
        }
        return m[f];
    }
    
    int Rear() {
        if(size == 0)
        {
            return -1;
        }
        int tr = r - 1;
        if( tr < 0)
        {
            tr = k - 1;
        }
        return m[tr];
    }
    
    bool isEmpty() {
        return !size;
    }
    
    bool isFull() {
        return size == k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */