class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        mul=1
        mulz=1
        zcount=0
        ans=[]
        for i in nums:
            mul=mul*i
            if i==0:
                zcount+=1
            if i !=0:
                mulz=mulz*i
        for i in nums:
            if i == 0:
                if zcount==len(nums):
                    ans.append(0)
                elif zcount>1:
                    ans.append(0)
                else: 
                    ans.append(mulz)
            else:
                ans.append((mul)//i)
        return ans