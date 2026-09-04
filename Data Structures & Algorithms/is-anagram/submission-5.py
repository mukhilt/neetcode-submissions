class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        stringOne = list(s)
        stringTwo = list(t)
        stringOne.sort()
        stringTwo.sort()

        if stringOne == stringTwo:
            return True
        
        return False