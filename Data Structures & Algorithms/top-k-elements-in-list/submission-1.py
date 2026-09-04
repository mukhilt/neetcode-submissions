class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        tracker = {}
        answer = []
        for n in nums:
            if n not in tracker:
                tracker[n] = 0
            tracker[n] = tracker[n] + 1
        sortedTracker = dict(sorted(tracker.items(), key = lambda item: item[1], reverse = True))
        
        n = 0
        for key in sortedTracker:
            if n < k:
                answer.append(key)
                n += 1
            else:
                break 

        return answer