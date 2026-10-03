class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_count=0;
        int max_count=0;

        for(int num: nums){
            if (num==1){
                current_count++;
            }else{
                current_count=0;
            }
            max_count=max(current_count,max_count);
        }
        return max_count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna