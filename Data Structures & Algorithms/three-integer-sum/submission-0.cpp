class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> tracker; 
        set<vector<int>> seen;
        vector<vector<int>> answer;
        for(int a = 0; a < nums.size(); a++){
            tracker.insert({nums[a], a});
        }
        for(int i = 0; i < nums.size(); i++){
            int other = -nums[i];
            for(int x = 0; x < nums.size(); x++){
                if(tracker.contains(other - nums[x]) &&  x != i){
                    int y = tracker[other - nums[x]];
                    if(y != i && y != x){
                        vector<int> vectors = {nums[i], nums[x], other - nums[x]};
                        sort(vectors.begin(), vectors.end());
                        seen.insert(vectors);
                    }
                }
            }
        }
        for(auto& vec: seen){
            answer.push_back(vec);
        }
        return answer;
    }
};
