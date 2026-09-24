# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr = head
        current = head
        prev = None
        length = 0
        while curr:
            length += 1
            curr = curr.next
        travel = length - n
        nodeNum = 0
        while current:
            if travel == 0:
                head = current.next
                return head
            if nodeNum == travel and prev != None:
                prev.next = current.next 
                return head
            prev = current 
            current = current.next
            nodeNum += 1

