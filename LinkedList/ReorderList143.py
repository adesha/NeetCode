# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        llist=[]
        curr=head
        while curr:
            llist.append(curr.val)
            curr=curr.next
        i=0
        j=len(llist)-1
        nllist=[]
        while i<j:
            nllist.append(llist[i])
            nllist.append(llist[j])
            i+=1
            j-=1
            if i==j:
                nllist.append(llist[j])
                break
        curr=head
        for i in nllist:
            curr.val=i
            curr=curr.next