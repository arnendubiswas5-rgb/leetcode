class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
      int count=0;
        for(int num:arr ){
            if(num%2!=0){
                count++;
                if (count==3){
                    return true;
                }
            }else{
                count=0;
            }
        }
               return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna