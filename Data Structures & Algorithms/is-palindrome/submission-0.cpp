class Solution {
public:
    bool isPalindrome(string s) {
        string res, ser;
        for(char ch : s) {
            if(isalnum(ch)) {
                res.push_back(tolower(ch));
            }
        }
        int n = res.size();

        for(int i = n - 1; i >= 0; i--) {
            ser.push_back(res[i]);
        }

        return res == ser;
    }
};