class BrowserHistory {
public:
    stack<string> back_stack;
    stack<string> forward_stack;

    BrowserHistory(string homepage) {
        back_stack.push(homepage);
    }

    void visit(string url) {
        back_stack.push(url);
        while (!forward_stack.empty()) {
            forward_stack.pop();
        }
    }

    string back(int steps) {
        while (steps > 0 && back_stack.size() > 1) {
            forward_stack.push(back_stack.top());
            back_stack.pop();
            steps--;
        }
        return back_stack.top();
    }

    string forward(int steps) {
        while (steps > 0 && !forward_stack.empty()) {
            back_stack.push(forward_stack.top());
            forward_stack.pop();
            steps--;
        }
        return back_stack.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
