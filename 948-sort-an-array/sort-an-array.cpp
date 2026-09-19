class Solution {
    void MergeSort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int mid = (left + right) / 2;
            MergeSort(nums, left, mid);
            MergeSort(nums, mid + 1, right);
            merge(nums, left, mid, right);
        }
    }
    void merge(vector<int>& nums, int left, int mid, int right) {
    vector<int> temp;
    int i = left;
    int j = mid + 1;
    while (i <= mid && j <= right) {

        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i]);
            i++;
        }
        else {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= right) {
        temp.push_back(nums[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); k++) {
        nums[left + k] = temp[k];
    }
}
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        MergeSort(nums, left, right);
        return nums;
    }
};