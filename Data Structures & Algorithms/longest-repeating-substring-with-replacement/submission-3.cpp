class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int maxlen=0;
        int l=0,r=0,maxf=0;
        unordered_map<char,int>count;
        while(r<n){
            count[s[r]]++;
            maxf=max(maxf,count[s[r]]);
            while(r-l+1-maxf>k){
                count[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
