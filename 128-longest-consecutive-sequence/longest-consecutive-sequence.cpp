class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        if(nums.size() == 0){
            return 0;
        }
        int longest = 1;
        for(int num : s){
            if(s.find(num-1) == s.end()){
                int current = num;
                int length = 1;
                while(s.find(current+1)!=s.end()){
                    current++;
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};