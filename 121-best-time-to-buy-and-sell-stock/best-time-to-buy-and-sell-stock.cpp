class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min_price=INT_MAX;
        int Max_price=0;

        for(int price:prices){
            if(price<Min_price){
                Min_price=price;
            }else{
                Max_price=max(Max_price,price-Min_price);
            }
        }
        return Max_price;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna