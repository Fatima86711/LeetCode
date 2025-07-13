class MyQueue {
public:
 stack<int> inputStack;
 stack<int> outputStack;
    MyQueue() {
        
    }
    
    void transferToOutput(){
        if(outputStack.empty()){
            while(!inputStack.empty()){
                outputStack.push(inputStack.top());
                
               inputStack.pop( );
            }
        }
    }
    void push(int x) {
        inputStack.push(x);
    }
    
    int pop() {
        transferToOutput();
       int front= outputStack.top();
      outputStack.pop();
       return front;
    }
    
    int peek() {
        transferToOutput();
        return outputStack.top();
    }
    
    bool empty() {
        return outputStack.empty() && inputStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */