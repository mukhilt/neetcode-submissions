class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0;
        int end = heights.size() - 1;
        int maxVol = 0; 

        while(!(start >= end)){
            int width = end - start;
            int height = min(heights[start], heights[end]);

            int currVol = height * width;
            maxVol = max(currVol, maxVol); 

            if(heights[start] < heights[end]){
                start++;
            }
            else if(heights[start] > heights[end]){
                end--;
            }
            else{
                start++;
                end--;
            }
        }
        return maxVol;
    }
};
