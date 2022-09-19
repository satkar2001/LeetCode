class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        vector<int> ans(n);
        
        ans[n-1]=1;
        for(int i=n-2;i>=0;i--){
            ans[i]=ans[i+1]*nums[i+1];
            
        }
        
        for(int i=0;i<n;i++){
            ans[i]=prod*ans[i];
            prod=prod*nums[i];
        }
        return ans;
        
        
    }
};