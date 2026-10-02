class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        end = 0
        tracker = set()
        maxLength = 0
        while start < len(s):
            while s[start] in tracker:
                tracker.remove(s[end])
                end += 1
            tracker.add(s[start])
            if len(tracker) > maxLength:
                maxLength = len(tracker)
            start += 1


        return maxLength








