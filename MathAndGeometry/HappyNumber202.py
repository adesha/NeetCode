class Solution:
    def digitSum(self,n):
        total=0
        while n:
            rem=n%10
            total=total+(rem*rem)
            n=n//10
            if n<10:
                rem=n%10
                total=total+(rem*rem)
                break
        return total

    def isHappy(self, n: int) -> bool:
        digits=set()
        digits.add(n)
        while True:
            total=self.digitSum(n)
            if total==1:
                return True
            if total in digits:
                break
            else:
                digits.add(total)
            n=total
        return False
        