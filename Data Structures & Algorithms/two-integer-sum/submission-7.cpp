class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> values; 
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++){
            values.insert({nums[i], i});
        }
        for(int x = 0; x < nums.size(); x++){
            int other = target - nums[x];
            if(values.contains(other) && values[other] != x){
                int minIndex = min(x,values[other]);
                int maxIndex = max(x,values[other]);
                answer.push_back(minIndex);
                answer.push_back(maxIndex);
                break;
            }
        }
        return answer;
    }
};
