class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int arraySum = 0, elementSum = 0;
        for(int i = 0; i<nums.size();i++){
            arraySum += nums[i];
        }
        for(int i = 0; i<nums.size();i++){
            while(nums[i] > 0){
                int digits = nums[i]%10;
                elementSum += digits;
                nums[i] /= 10;
        }
    }
    return arraySum - elementSum;
    }
};