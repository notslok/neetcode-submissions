class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
           std::map<int, int> mp;

           for(auto& itr : nums){
                if(mp.find(itr) != mp.end()) return true; // has duplicate
                mp[itr]++;
           }
           return false; // doesnt have duplicate
    }
};