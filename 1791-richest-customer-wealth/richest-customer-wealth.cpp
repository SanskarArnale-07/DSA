class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int maximum = 0;
        for(int i = 0; i<row; i++){
            int current = 0;
            for(int j = 0; j<accounts[i].size();j++){
                current = current + accounts[i][j];
            }
            maximum = max(maximum, current);
        }
        return maximum;
    }

};