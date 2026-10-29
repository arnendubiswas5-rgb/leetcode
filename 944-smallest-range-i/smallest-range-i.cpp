class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min_val=INT_MAX;
        int max_val=INT_MIN;

        for(int num: nums){
            min_val=min(min_val,num);
            max_val=max(max_val,num);
        }
         return max(0, max_val - min_val - 2 * k);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna