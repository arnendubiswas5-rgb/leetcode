class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int ,int>counts;
        for(int num:nums){
            counts[num]++;
        }
        for(auto& pair:counts){
            if(pair.second%2!=0){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna