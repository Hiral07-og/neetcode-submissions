class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int c = 1;
        int count = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i-1] + 1) {
                count++;
                c = max(c, count);
            }
            else if(nums[i] != nums[i-1]) {
                count = 1;
            }
        }

        return c;
    }
};
