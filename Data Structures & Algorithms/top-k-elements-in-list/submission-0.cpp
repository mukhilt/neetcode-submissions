class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> table;
        for(int i = 0; i < nums.size(); i++){
            table[nums[i]]++;
        }
        priority_queue<pair<int, int>> tracker; 
        for(auto couple:table){
            tracker.push({couple.second, couple.first});
        }
        int x = 0; 
        vector<int> answer;
        while(x <k){
            answer.push_back(tracker.top().second);
            tracker.pop();
            x++;
        }
        return answer;
    }
};
