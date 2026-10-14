class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;

        for(int i=0;i<nums1.size();++i){
             for(int j=0;j<nums2.size();++j){
                if(nums1[i]==nums2[j]){
                    bool exists =false;
                    for(int k=0;k<inter.size();++k){
                        if(inter[k]==nums1[i]){
                            exists=true;
                            break;
                        }
                    }
                    if(!exists){
                        inter.push_back(nums1[i]);
                    }
                }
             }
            
        }
         return inter;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna