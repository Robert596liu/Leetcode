class MinStack {
    stack<int> s;
    stack<int> sMin;
    public:
    void push(int x) {
        s.push(x);
        if (sMin.empty() || x <= sMin.top())
            sMin.push(x);
    }

    void pop() {
        if (s.top() <= sMin.top())
            sMin.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return sMin.top();
    }
};
