class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> st;
        for(int i = 0;i<digits.size();i++){
            if(digits[i]%2 != 0){
                continue;
            }
            for(int j = 0;j <digits.size(); j++){
                if(j==i){
                    continue;
                }
                for(int k = 0;k<digits.size();k++){
                    if(k==i||k==j){
                        continue;
                    }
                    if(digits[k] == 0){
                        continue;
                    }
                    int num = digits[k] * 100 + digits[j] * 10 + digits[i];
                    st.insert(num);
                }
            }
        }
        return st.size();
    }
};