class Solution {
public:
    bool isValid(string s) {
        stack<char> tracker;
        unordered_map<char, char> pairs{
            {'}', '{'},
            {')', '('},
            {']', '['}
        };
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                tracker.push(s[i]);
            }
            else{
                if(tracker.empty() || tracker.top() != pairs[s[i]]){
                    return false;
                }
                else{
                    tracker.pop();
                }
            }
        }
        return tracker.empty();
    }
};
