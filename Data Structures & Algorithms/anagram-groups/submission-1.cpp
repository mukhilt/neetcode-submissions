class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, vector<string>> theMap;
        for(string word: strs){
            string key = word;
            sort(key.begin(), key.end());
            theMap[key].push_back(word);
        }
        for(auto groups : theMap){
            answer.push_back(groups.second);
        }
        return answer;
    }
};
