class Solution {
public:
    int maxDepth(string s) {
        int counter = 0, maxCounter = 0;
        for(char c : s){
            if(c == '('){
                counter++;
                maxCounter = max(maxCounter,counter);
            }
            else if(c == ')'){
                counter--;
            }
        }
        return maxCounter;
    }
};