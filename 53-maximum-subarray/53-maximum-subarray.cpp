class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int currbest=nums[0];
        int overbest=nums[0];
        
        for(int i=1;i<nums.size();i++){
            
            currbest=max(nums[i],currbest+nums[i]);
            
            overbest=max(overbest,currbest);
            
        }
        return overbest;
        
        
    }
};