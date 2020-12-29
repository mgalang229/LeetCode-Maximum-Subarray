class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_max = 0;
        // store the first element in the 'final_max'
        int final_max = nums[0];
        // check if there are no elements in the vector
        if ((int) nums.size() == 0) {
            return 0;
        }
        // add every current element in 'cur_max'
        // store the larger value between the 'final_max' and 'cur_max'
        // if the 'cur_max' is less than zero, then reset it back to zero
        // explanation: we assume that an empty subarray is allowed, so the maximum subarray
        // sum is always at least zero.
        for (int i = 0; i < (int) nums.size(); i++) {
            cur_max += nums[i];
            final_max = max(final_max, cur_max);
            cur_max = max(cur_max, 0);
        }
        return final_max;
    }
};
