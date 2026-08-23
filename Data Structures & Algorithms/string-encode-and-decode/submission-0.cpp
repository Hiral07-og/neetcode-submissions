class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        vector<int>sizes;
        if(strs.empty()){
            return "";
        }
        for(string&s:strs){
            sizes.push_back(s.size());
        }
        for(int sz:sizes){
            res.append(to_string(sz));
            res.push_back(',');
        }
        res.push_back('#');
        for(string &s:strs)
            res.append(s);
        return res;
    }

    vector<string> decode(string s) {
        vector<int>sizes;
        vector<string>res;
        if(s.empty())
            return{};
        int i=0;
        while(s[i]!='#'){
            int j=i;
            while(s[j]!=',')
                j++;
            sizes.push_back(stoi(s.substr(i,j-i)));
            i=j+1;
        }
         i++;
    for(int sz:sizes){
        res.push_back(s.substr(i,sz));
        i+=sz;
    }
    return res;
    }
};
