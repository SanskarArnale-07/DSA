class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_arr = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum_arr = sum_arr + nums[i];
        }
        int sum_num = 0;
        for(int i = 0; i<=nums.size();i++)
        {
            sum_num = sum_num + i;
        }
        return (sum_num - sum_arr);

    }
};