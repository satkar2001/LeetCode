class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        
        if(s1.length()>s2.length()){
            return false;
        }
        
        vector<int>freqs1(26,0);
        
        for(char c:s1){
            freqs1[c-'a']++;
            
        }
        vector<int>freqs2(26.0);
        int l=0,r=0;
        
        while(r<s2.size()){
            freqs2[s2[r]-'a']++;
            
            if(r-l+1 == s1.size()){
                if(freqs1==freqs2){
                    return true;
                }
            }
            
            
            if(r-l+1 <s1.size()){
                r++;
            }
            
            else{
                freqs2[s2[l]-'a']--;
                l++;
                r++;
            }
            
        }
        return false;
        
        
        
    }
};