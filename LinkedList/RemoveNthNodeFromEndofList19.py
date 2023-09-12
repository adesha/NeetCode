# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        if head is None:
            return head
        
        ptr = head
        count = 0
        while ptr is not None:
            count += 1
            ptr = ptr.next
        
        if count == n:
            head = head.next
            return head
        
        ptr = head
        n = count - n - 1
        count = 0
        while ptr is not None:
            if count == n:
                ptr.next = ptr.next.next
            count += 1
            ptr = ptr.next
        
        return head