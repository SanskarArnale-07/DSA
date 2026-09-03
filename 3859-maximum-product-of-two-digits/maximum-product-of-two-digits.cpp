class Solution {
public:
    int maxProduct(int n) {
        int l = 0;
        int sl = 0;
        while(n>0){
            int digit = n%10;
            if(digit>l){
                sl = l;
                l = digit;
            }
            else if(digit > sl){
                sl = digit;
            }
            n = n/10;
        }
        return l * sl;
    }
};