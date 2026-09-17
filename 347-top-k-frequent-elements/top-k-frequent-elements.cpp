class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int>counts;

        for(int num:nums){
            counts[num]++;
        }
        vector<vector<int>>buckets(n+1);
        for (auto& [num, freq]:counts){
            buckets[freq].push_back(num);
        }
        vector<int> result;
for (int i = n; i >= 1 && result.size() < k; --i) {
    for (int num : buckets[i]) {
        result.push_back(num);
        if (result.size() == k) break;
    }
}
return result;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna