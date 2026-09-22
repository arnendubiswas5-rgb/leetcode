class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int , int>freq;
        for(int num: nums){
            freq[num]++;
        }
        int pairs=0;
        int leftovers=0;
        for (auto& pair : freq) {
            pairs += pair.second / 2;
            leftovers += pair.second % 2;
        }

        return {pairs, leftovers};
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna