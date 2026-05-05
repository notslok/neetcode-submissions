class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        
        map<char, int> mp;

        for(int i=0; i<s.size(); i++){
            mp[s.at(i)]++;
            mp[t.at(i)]--;
        }

        for(int i=0; i<s.size(); i++){
            if(mp[s.at(i)] != 0) return false;
        }

        return true;
        
    }
};
