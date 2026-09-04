class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        answer = []
        tracker = {}
        for a in range(len(nums)):
            x = target - nums[a]
            if(x in tracker and a != tracker[x]):
                answer.append(tracker[x])
                answer.append(a)

            tracker[nums[a]] = a
        return answer
                
