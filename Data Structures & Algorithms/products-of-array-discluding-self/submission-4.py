class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        cumprev = []
        cumsuf = []
        answer = []
        for n in range(len(nums)):
            if(n == 0):
                cumprev.append(nums[n])
                c = 0
            else:
                cumprev.append(nums[n] * cumprev[c])
                c+=1

        for n in range(len(nums) - 1, -1, -1):
            if(n == (len(nums) - 1)):
                cumsuf.append(nums[n])
            else:
                cumsuf.append(nums[n] * cumsuf[-1])
        cumsuf.reverse()

        for n in range(len(nums)):
            if n == 0:
                answer.append(cumsuf[1])
            elif n == len(nums) - 1:
                answer.append(cumprev[len(cumprev)-2])
            else:
                answer.append(cumprev[n - 1] * cumsuf[n + 1])
        return answer
