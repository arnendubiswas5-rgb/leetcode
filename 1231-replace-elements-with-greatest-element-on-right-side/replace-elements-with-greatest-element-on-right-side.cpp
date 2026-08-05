class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maximum = -1;
        
        for (int j = arr.size() - 1; j >= 0; j--) {
            int current = arr[j];
            arr[j] = maximum;
            maximum = max(maximum, current);
        }
        
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna