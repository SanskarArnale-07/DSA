class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest = 1, count = 0, lastSmall = INT_MIN;
        if(nums.size() == 0){
            return 0;
        }
        for(int i = 0;i <nums.size();i++){
            if(nums[i] - 1 == lastSmall){
                count++;
                lastSmall = nums[i];
            }
            else if(nums[i] != lastSmall){
                count = 1;
                lastSmall = nums[i];
            }
            largest = max(largest,count);
        }
        return largest;

    }
};