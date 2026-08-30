class Solution {
public:
    int subtractProductAndSum(int n) {
        int add=0;
        int mul=1;
        while(n>0){
           int digit =  n%10;
            mul *= digit;
            add +=digit;
            n/=10;
        }

        return mul-add;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna