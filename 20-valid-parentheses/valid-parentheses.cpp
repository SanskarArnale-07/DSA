class Solution {
public:
    bool isValid(string s) {
        stack<char> c1;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                c1.push(c);
            }
            else if(c == ')'){
                if(c1.empty() || c1.top() != '(')
                    return false;
                c1.pop();
            }
            else if(c == ']'){
                if(c1.empty() || c1.top() != '[')
                    return false;
                c1.pop();
            }
            else if(c == '}'){
                if(c1.empty() || c1.top() != '{')
                    return false;
                c1.pop();
            }
        }
        return c1.empty();
    }
};