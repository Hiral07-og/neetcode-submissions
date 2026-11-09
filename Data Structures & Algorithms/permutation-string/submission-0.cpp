class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());

        int l = 0, r = 0;

        while (l < s2.size()) {
            if (l-r+1 < s1.size()) {
                l++;
            }
            else if (l-r+1 == s1.size()) {
                string temp = s2.substr(r, s1.size());
                sort(temp.begin(), temp.end());

                if (temp == s1)
                    return true;

                r++;
                l++;
            }
        }

        return false;
    }
};
