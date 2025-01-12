class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        // if the string is odd than parantheses not matched
        if (n % 2 == 1)
            return false;
        stack<int> open;
        stack<int> openClose;
        for (int i = 0; i < n; i++) {
            if (locked[i] == '0') {
                openClose.push(i); // we need to push index not character and we
                                   // store all changeble parentheses.
            } else if (s[i] == '(') {
                open.push(i); // we push open parentheses
            } else if (s[i] == ')') {
                if (!open.empty()) {
                    open.pop(); // if open stack have parentheses than we pop
                                // first from here.
                } else if (!openClose.empty()) {
                    openClose.pop(); // if open empty then we pop from changeble
                                     // stack
                } else {
                    return false; // if both stack is empty than we return
                                  // false.
                }
            }
        }

        // now one case is that where both stack are non empty. so we try to
        // balance from both the stack.
        while (!open.empty() && !openClose.empty() &&
               open.top() < openClose.top()) {
            open.pop();
            openClose.pop();
        }
        // now if open is empty we return true because even no ch are present in
        // openClose stack. if open is not empty than it return false.
        return open.empty();
    }
};