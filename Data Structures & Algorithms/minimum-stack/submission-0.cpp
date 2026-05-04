class MinStack {
public:
    vector<int> vec;
    int mini;

    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        vec.push_back(val);
        mini = min(mini, val);
    }
    
    void pop() {
        vec.pop_back();

        mini = INT_MAX;
        for (int i = 0; i < vec.size(); i++) {
            mini = min(mini, vec[i]);
        }
    }
    
    int top() {
        return vec[vec.size() - 1]; 
    }
    
    int getMin() {
        return mini;
    }
};