class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = 0
        right = 0
        maxLength = 0
        maxCount = 0
        tracker = {}
        for right in range(len(s)):
            if s[right] in tracker:
                tracker[s[right]] +=1
            else:
                tracker[s[right]] = 1
            windowLength = (right - left)+1
            for key in tracker:
                if tracker[key] > maxCount:
                    maxCount = tracker[key]
            if((windowLength - maxCount) <= k):
                maxLength = windowLength
            else:
                tracker[s[left]] -=1
                left+=1

        return maxLength


