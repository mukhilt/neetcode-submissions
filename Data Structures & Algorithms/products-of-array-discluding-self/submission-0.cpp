class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prodP = 1;
        vector<int> prefix(n,1);
        for(int i = 0; i < n;i++){
            prefix[i] = prodP;
            prodP = prodP * nums[i];
        }
        int prodS = 1;
        vector<int> sufix(n,1);
        for(int i = n -1; i > -1; i--){
            sufix[i] = prodS;
            prodS = prodS * nums[i];
        }
        vector<int> answer; 
        for(int i = 0; i < n; i++){
            answer.push_back(prefix[i] * sufix[i]);
        }
        return answer;
    }
};
