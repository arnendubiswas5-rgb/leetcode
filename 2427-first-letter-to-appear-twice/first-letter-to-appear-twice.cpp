class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;
        for (char c: s){
            if (seen.count(c)){
                return c;
            }
            seen.insert(c);
        }
        return ' ';
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna