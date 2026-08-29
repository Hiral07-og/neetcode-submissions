class Solution {
public:
    int maxArea(vector<int>& heights) {
        int vol=0;
        int l=0,r=heights.size()-1;
        while(l<r){
            int width=r-l;
            int ht=min(heights[l],heights[r]);
            int curr=width*ht;
            vol=max(vol,curr);
            if(heights[l]<heights[r])
                l++;
            else
                r--;
        }
        return vol;
    }
};
