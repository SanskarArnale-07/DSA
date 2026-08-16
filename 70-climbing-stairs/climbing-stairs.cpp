class Solution {
public:
    int climbStairs(int n) {
        long long a = 1;
        long long b = 1;
        for(long long i = 0; i < n; i++) {
            long long temp = a + b;
            a = b;
            b = temp;
        }
        return a;
    }
};