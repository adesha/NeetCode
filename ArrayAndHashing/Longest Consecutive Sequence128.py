class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums)==0:
            return 0
        unique=set(nums)
        ulist=list(unique)
        ulist.sort()
        ans=maxf=1
        for i in range(1,len(ulist)):
            if ulist[i]==ulist[i-1]+1:
                maxf+=1
                ans=max(ans,maxf)
            else:
                maxf=1
        return ans