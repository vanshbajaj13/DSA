class Solution {
public:
    string reverseWords(string s) {
        string rs = "",temp;
        stringstream ss(s);
        while(ss >> temp){
            rs = temp + " " + rs;
        }
        return rs.replace(rs.length()-1,1,"");
    }
};
