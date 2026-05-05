class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> mp;

        vector<int> ans(2);
        int diff;
        for(int i=0; i<nums.size(); i++){
            diff = target - nums.at(i);
            if(mp.find(diff) != mp.end()){
                // means the complement part of the sum is already indexed befor i.e. smaller index
                ans[0] = mp.at(diff);
                ans[1] = i;
                break;
            }
            mp.insert({nums.at(i), i});
        }

        return ans;
    }
};
