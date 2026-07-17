class Solution {
public:
    bool isPalindrome(string s) {
        string updated = "";
        for(char chars: s){
            if(isalnum(chars)){
                updated += tolower(chars);
            }
        }
        int start = 0;
        int end = updated.size() - 1;
        while(start <= (updated.size())/2){
            if(updated[start] == updated[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
