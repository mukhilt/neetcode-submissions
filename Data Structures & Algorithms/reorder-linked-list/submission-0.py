# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        tracker = {}

        dummy = head
        answer = ListNode()
        tail = answer
        length = 0
        x = 0
        while dummy:
            tracker[x] = dummy
            length += 1
            x += 1
            dummy = dummy.next
        
        left = 0
        right = length - 1
        for i in range(length):
            if i%2 == 0:
                tail.next = tracker[left]
                left += 1
            else:
                tail.next = tracker[right]
                right -= 1
            tail = tail.next
        tail.next = None
        return None 
