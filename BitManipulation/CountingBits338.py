class Solution:
    def hammingWeight(self, n: int) -> int:
        count=0
        while n:
            count+=(n&1)
            n=n>>1
        return count
    def countBits(self, n: int) -> List[int]:
        ans=[]
        for i in range(0,n+1):
            count=self.hammingWeight(i)
            ans.append(count)
        return ans
        