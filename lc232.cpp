#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class MyQueue {
public:
    stack<int> stIn;
    stack<int> stOut;
    MyQueue() {
        
    }
    
    void push(int x) {
        stIn.push(x);
    }
    
    int pop() {
        if (stOut.empty())
        {
            while (!stIn.empty())
            {
                int val = stIn.top();
                stOut.push(val);
                stIn.pop();
            }
        }
        int k = stOut.top();
        stOut.pop();
        return k;
    }
    
    int peek() {
        int k = pop();
        stOut.push(k);
        return k;
    }
    
    bool empty() {
        return stIn.empty() && stOut.empty();
    }
};

