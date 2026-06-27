class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int x = 0; x < nums.size(); x++){
                if(nums[i] == nums[x] && i != x){
                    return true;
                }
            }
        }
        return false; 
    }
};