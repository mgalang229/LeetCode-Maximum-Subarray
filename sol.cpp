class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = INT_MIN;
        int sum = 0;
        // use Kadane's Algorithm for finding the largest subarry sum
        for (int i = 0; i < (int) nums.size(); i++) {
            sum = max(nums[i], sum + nums[i]);
            best = max(best, sum);
        }
        return best;
    }
};
