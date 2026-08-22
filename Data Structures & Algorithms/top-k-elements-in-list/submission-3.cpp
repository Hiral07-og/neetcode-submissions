class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int x:nums)
            m[x]++;
        vector<vector<int>>bucket(n+1);
        for(auto &p:m){
            bucket[p.second].push_back(p.first);
        }
        vector<int>result;
        for(int f=n;f>=1;f--){
            for(int x:bucket[f]){
                result.push_back(x);
                if(result.size()==k)
                    return result;
            }
        }
        return result;
    }
};
