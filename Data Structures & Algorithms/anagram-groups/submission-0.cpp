class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        array<int, 26> aux;
        aux.fill(0);
        map<array<int, 26>, vector<string>> anagram_mapping;

        for(int i=0; i<strs.size(); i++){
            for(int j=0; j<strs.at(i).size(); j++){
                ++aux[strs.at(i).at(j) - 'a'];
            }
            anagram_mapping[aux].push_back(strs.at(i));

            aux = {};
        }

        vector<vector<string>> ans;

        for(const auto& entry : anagram_mapping){
            ans.push_back(entry.second);
        }

        return ans;
    }
};
