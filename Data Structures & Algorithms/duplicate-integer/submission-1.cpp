class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> answer;
        for(int i = 0; i < nums.size(); i++){
            if(!answer.count(nums[i])){
                answer.insert(nums[i]);
            }
            else{
                return true;
            }
        }
        return false;
    }
};