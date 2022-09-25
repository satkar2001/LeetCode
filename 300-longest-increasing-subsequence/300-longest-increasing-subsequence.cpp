class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //substring/subarray and subsequence are different substring has to be consequtive whereas subsequence need not be
        //In the dp method we traverse the array and we check for each element from its left to 0
        //if any number is lower than it then we check the dp value of the number and update own dp value by adding 
        //+1 to the smaller numbers dp value
        int ans = 1, n = nums.size();
        vector<int> dp(n , 1); 
        for(int i = 1; i < n; i++){
            for(int j = i - 1; j >= 0; j--){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                    ans = max(ans, dp[i]);
                }
            }
        }
        return ans;
    }
};