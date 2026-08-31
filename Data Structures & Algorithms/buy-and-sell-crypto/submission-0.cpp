class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int val=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff;
                if(prices[j]>prices[i])
                    diff=prices[j]-prices[i];
                val=max(diff,val);
            }
        }
        return val;
    }
};
