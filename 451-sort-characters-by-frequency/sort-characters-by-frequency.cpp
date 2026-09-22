class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>freq;
        for (char c: s){
            freq[c]++;
        }
        vector<pair<char, int>> vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end(), [](const pair<char, int>& a, const pair<char,int>& b){
            return a.second>b.second;
        });
        string result ="";
        for (auto& pair : vec) {
            result.append(pair.second, pair.first);
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna