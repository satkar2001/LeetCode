class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int currbest=nums[0];
        int overbest=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(currbest>=0){
                currbest+=nums[i];
            }
            else{
                currbest=nums[i];
                
            }
            if(currbest>overbest){
                overbest=currbest;
            }
            
        }
        return overbest;
        
        
    }
};