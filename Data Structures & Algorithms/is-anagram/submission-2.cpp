class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){
            return false;
        }
        vector<bool> visited(t.size(), false);
        for(int i = 0; i < s.size(); i++){
            for(int y = 0; y < t.size(); y++){
                if(s[i] == t[y] && visited[y] == false){
                    visited[y] = true;
                    break;
                }
            }
        }
        for(bool x : visited){
            if(x == false){
                return false;
            }
        }
        return true;
    }
};
