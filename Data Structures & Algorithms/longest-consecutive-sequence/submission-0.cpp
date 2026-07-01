class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> tracker; 
        for(int i = 0; i < nums.size(); i++){
            tracker.insert(nums[i]);
        }
        int count = 0;
        int answer = 0;
        for(int x = 0; x < nums.size(); x++){
            if(tracker.contains(nums[x]-1)){
                continue; 
            }
            else{
                for(int y = 0; y < nums.size(); y++){
                    if(tracker.contains(nums[x] + y)){
                        count++;
                    }
                    else{
                        break;
                    }
                }
                answer = max(answer, count);
                count = 0;
            }
        }
        return answer;
    }
};
