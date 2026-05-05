class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp.insert({nums.at(i), i});
        }

        vector<int> ans(2);
        int diff = 0;
        for(int i=nums.size()-1; i>=0; i--){ // traversing from back, as mapping is done from front
            diff = target - nums.at(i);      // we wont get repeated index
            if(mp.find(diff) != mp.end()){
                ans[0] = mp.at(diff);        // inserting indexof(diff) first as its from LHS hence smaller
                ans[1] = i;                  // inserting current index second as its from RHS(due to reverse traversal) hence bigger
                break;
            }
        }

        return ans;
    }
};
