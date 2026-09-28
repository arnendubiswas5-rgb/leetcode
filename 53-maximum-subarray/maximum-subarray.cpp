class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxsofar=nums[0];
       int currentsum=nums[0];
          
          for(size_t i=1;i<nums.size();++i){
              currentsum=max(nums[i],currentsum+nums[i]);
                maxsofar=max(maxsofar,currentsum);
          }
             return maxsofar;
    }
};