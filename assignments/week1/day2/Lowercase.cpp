class Solution {
public:
    string toLowerCase(string s) {
        string upper = "ABDCEFGHIJKLMNOPQRSTUVWXYZ";
        string lower = "acbdefghijklmnopqrstuvwxyz";
        for(int i = 0; i < s.length(); i++){
            if(upper.find(s[i]) >= 0){
                s[i] = lower[upper.find(s[i])];
            }
        }
        return s;
    }
}