class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>counts;
        for(int num:nums){
            counts[num]++;
        }
         int sum=0;
         for(const auto& [num, count] : counts) {
            if (count == 1) {
                sum += num;
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna