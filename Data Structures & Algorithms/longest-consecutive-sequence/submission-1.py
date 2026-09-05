class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        tracker = set()
        for n in nums:
            tracker.add(n)

        answer = 0
        count = 0
        for n in nums:
            if (n - 1) in tracker:
                continue
            else:
                for i in range(len(nums)):
                    if (n + i) in tracker:
                        count += 1
                    else:
                        break
                answer = max(count, answer)
            count = 0
        return answer