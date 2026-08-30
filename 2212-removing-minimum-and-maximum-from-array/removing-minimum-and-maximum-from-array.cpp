class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]<nums[l]){
                l = i;
            }
            if(nums[i]>nums[r]){
                r = i;
            }
        }
        int left = min(l,r);
        int right = max(l,r);
        int fromFront = right + 1;
        int fromBack = n - left;
        int bothSides = (left+1) + (n-right);
        return min({fromFront,fromBack,bothSides});   
    }
};