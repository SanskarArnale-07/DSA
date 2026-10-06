class Solution {
public:
    int minAddToMakeValid(string s) {
        int count1 = 0, count2 = 0;
        for(char c : s){
            if(c == '('){
                count1++;
            }
            else if(c == ')' && count1 > 0){
                count1--;
            }
            else{
                count2++;
            }
        }
        return count1 + count2;
    }
};