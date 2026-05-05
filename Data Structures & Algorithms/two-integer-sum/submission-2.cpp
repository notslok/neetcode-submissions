class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp.insert({nums.at(i), i});
        }

        vector<int> ans(2);
        int diff = 0;
        for(int i=nums.size()-1; i>=0; i--){
            diff = target - nums.at(i);
            if(mp.find(diff) != mp.end()){
                ans[0] = mp.at(diff);
                ans[1] = i;
                break;
            }
        }

        return ans;
    }
};
