# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        tracker = {}
        current = head
        while current:
            if current not in tracker:
                tracker[current] = 0
            else:
                tracker[current] += 1
            if tracker[current] > 0:
                return True
            current = current.next

        return False