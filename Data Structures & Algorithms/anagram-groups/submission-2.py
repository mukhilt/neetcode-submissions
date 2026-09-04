class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        tracker = {}
        answer = []
        for st in strs:
            sortedString = "".join(sorted(st))
            if sortedString not in tracker:
                tracker[sortedString] = []
            tracker[sortedString].append(st)

        for key in tracker:
            answer.append(tracker[key])

        return answer